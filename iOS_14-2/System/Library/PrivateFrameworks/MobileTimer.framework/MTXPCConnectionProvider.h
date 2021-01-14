/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
#import <MobileTimer/MobileTimer-Structs.h>
@class NSXPCConnection, MTXPCConnectionInfo, NSDate;

@interface MTXPCConnectionProvider : NSObject {

	NSXPCConnection* _connection;
	BOOL _alive;
	os_unfair_lock_s _connectionLock;
	MTXPCConnectionInfo* _info;
	/*^block*/id _errorHandler;
	/*^block*/id _reconnectHandler;
	id<NAScheduler> _callbackScheduler;
	NSDate* _lastLifecycleNotification;

}

@property (nonatomic,retain) id<NAScheduler> callbackScheduler;               //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
@property (nonatomic,retain) MTXPCConnectionInfo * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id errorHandler;                                   //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id reconnectHandler;                               //@synthesize reconnectHandler=_reconnectHandler - In the implementation block
@property (nonatomic,retain) NSDate * lastLifecycleNotification;              //@synthesize lastLifecycleNotification=_lastLifecycleNotification - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s connectionLock;               //@synthesize connectionLock=_connectionLock - In the implementation block
+(id)providerWithConnectionInfo:(id)arg1 reconnectHandler:(/*^block*/id)arg2 ;
+(id)providerWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)_connectionRebuildingIfNecessary;
-(MTXPCConnectionInfo *)info;
-(id)reconnectHandler;
-(id)_retryConnection;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)setCallbackScheduler:(id<NAScheduler>)arg1 ;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 isSynchronous:(BOOL)arg3 ;
-(id<NAScheduler>)callbackScheduler;
-(id)_syncRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)description;
-(id)connection;
-(void)setInfo:(MTXPCConnectionInfo *)arg1 ;
-(id)initWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 reconnectHandler:(/*^block*/id)arg3 ;
-(void)_retryConnectionWithRecover:(BOOL)arg1 ;
-(void)invalidate;
-(void)_didInterruptConnection;
-(NSDate *)lastLifecycleNotification;
-(void)didReceiveLifecycleNotification;
-(void)performRemoteBlock:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithXPCConnectionProvider:(/*^block*/id)arg1 remoteObjectProxyProvider:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setLastLifecycleNotification:(NSDate *)arg1 ;
-(os_unfair_lock_s)connectionLock;
-(void)_didInvalidateConnection;
-(void)dealloc;
-(void)setReconnectHandler:(id)arg1 ;
-(id)_asyncRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

