/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARNamedService.h>

@protocol ARDaemonServiceBaseProtocol;
@class NSXPCConnection, NSString;

@interface ARRemoteService : NSObject <ARNamedService> {

	NSXPCConnection* _connection;
	id<ARDaemonServiceBaseProtocol> _service;
	id<ARDaemonServiceBaseProtocol> _syncService;

}

@property (retain) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<ARDaemonServiceBaseProtocol> service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<ARDaemonServiceBaseProtocol> syncService;              //@synthesize syncService=_syncService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reconnect;
-(id<ARDaemonServiceBaseProtocol>)syncService;
-(id)clientProcessName;
-(id)initWithEndpoint:(id)arg1 ;
-(void)setSyncService:(id<ARDaemonServiceBaseProtocol>)arg1 ;
-(int)clientProcessIdentifier;
-(NSXPCConnection *)connection;
-(void)setService:(id<ARDaemonServiceBaseProtocol>)arg1 ;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)invalidationHandler;
-(void)interruptionHandler;
-(id<ARDaemonServiceBaseProtocol>)service;
-(id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 endpoint:(id)arg4 ;
-(id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 ;
-(void)setService:(id)arg1 syncService:(id)arg2 ;
@end

