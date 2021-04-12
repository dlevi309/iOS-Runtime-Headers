/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@protocol PKForegroundActiveArbiter, NSObject, PKInvalidatable, PKXPCServiceDelegate;
@class NSXPCInterface, NSString, NSXPCConnection, PKXPCForwarder;

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver> {

	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _className;
	NSString* _serviceResumedNotificationName;
	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	PKXPCForwarder* _templateExportedProxy;
	PKXPCForwarder* _currentExportedProxy;
	BOOL _suspendCallbacks;
	BOOL _forceConnectionOnResume;
	id<PKForegroundActiveArbiter> _foregroundActiveArbiter;
	id<NSObject> _foregroundListener;
	id<NSObject> _backgroundListener;
	id<PKInvalidatable> _serviceResumedListenerInvalidater;
	id<PKXPCServiceDelegate> _delegate;
	NSString* _machServiceName;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSString * machServiceName;                          //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<PKXPCServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,readonly) BOOL connectionEstablished; 
@property (assign,nonatomic) BOOL forceConnectionOnResume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setForegroundActiveArbiter:(id)arg1 ;
-(void)_sendResumed;
-(id)remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(BOOL)connectionEstablished;
-(id)existingRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)isSuspended;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK11)arg2 ;
-(void)_sendSuspended;
-(void)_unregisterForServiceListenerResumedNotifications;
-(id)remoteObjectProxy;
-(id)init;
-(id<PKXPCServiceDelegate>)delegate;
-(unsigned long long)options;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(void)_invalidateConnectionIfPossible;
-(id)remoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)existingSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)machServiceName;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 ;
-(void)setDelegate:(id<PKXPCServiceDelegate>)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 options:(unsigned long long)arg6 ;
-(void)_establishServiceConnection;
-(void)_createConnectionIfPossible:(BOOL)arg1 ;
-(/*^block*/id)_newErrorHandlerWithSemaphore:(id)arg1 ;
-(id)existingRemoteObjectProxy;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 ;
-(/*^block*/id)_newWrappedErrorHandlerForHandler:(/*^block*/id)arg1 ;
-(void)_registerForServiceListenerResumedNotifications;
-(id)_connection;
-(BOOL)forceConnectionOnResume;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)setForceConnectionOnResume:(BOOL)arg1 ;
-(void)dealloc;
@end

