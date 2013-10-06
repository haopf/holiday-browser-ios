//
//  ServerBrowser.h
//  PacketSending
//
//  Created by Jon Manning on 21/09/13.
//  Copyright (c) 2013 Secret Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ServerBrowserDelegate <NSObject>

- (void) serverBrowserFoundService:(NSNetService*)service;
- (void) serverBrowserLostService:(NSNetService*)service index:(NSUInteger)index;

@end

@interface ServerBrowser : NSObject

- (id) initWithServerType:(NSString*)serverType port:(int16_t)port;

@property (readonly) NSArray* discoveredServers;

@property (readonly) NSString* serverType;
@property (readonly) int16_t port;

- (BOOL) isRunningServer;
- (void) createServer;
- (void) stopServer;

@property (strong) id<ServerBrowserDelegate> delegate;

@end
