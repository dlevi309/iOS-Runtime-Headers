/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionConfiguring.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionEventHandling.h>

@protocol OS_dispatch_queue, BSServiceDispatchingQueue;
@class BSXPCServiceConnectionProxy, NSString, NSObject, BSServiceQuality, BSServiceInterface, BSXPCCoder;

@interface BSXPCServiceConnectionEventHandler : NSObject <BSXPCServiceConnectionConfiguring, BSXPCServiceConnectionEventHandling> {

	os_unfair_lock_s _lock;
	BOOL _nonLaunchingAware;
	BSXPCServiceConnectionProxy* _lock_remoteTarget;
	id _context;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _targetQueue;
	id<BSServiceDispatchingQueue> _targetDispatchingQueue;
	BSServiceQuality* _serviceQuality;
	BSServiceInterface* _interface;
	id _interfaceTarget;
	BSXPCCoder* _initiatingContext;
	/*^block*/id _activationHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _connectionHandler;
	/*^block*/id _noMoreChildrenHandler;
	/*^block*/id _messageHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id connectionHandler;                                                //@synthesize connectionHandler=_connectionHandler - In the implementation block
@property (nonatomic,copy) id noMoreChildrenHandler;                                            //@synthesize noMoreChildrenHandler=_noMoreChildrenHandler - In the implementation block
@property (nonatomic,copy) id messageHandler;                                                   //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                                     //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id activationHandler;                                                //@synthesize activationHandler=_activationHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                              //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) BSXPCServiceConnectionProxy * remoteTarget; 
@property (nonatomic,retain) id context;                                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue;                          //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,retain) id<BSServiceDispatchingQueue> targetDispatchingQueue;              //@synthesize targetDispatchingQueue=_targetDispatchingQueue - In the implementation block
@property (nonatomic,retain) BSServiceQuality * serviceQuality;                                 //@synthesize serviceQuality=_serviceQuality - In the implementation block
@property (nonatomic,retain) BSServiceInterface * interface;                                    //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) id interfaceTarget;                                                //@synthesize interfaceTarget=_interfaceTarget - In the implementation block
@property (nonatomic,retain) BSXPCCoder * initiatingContext;                                    //@synthesize initiatingContext=_initiatingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventHandler;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)context;
-(BSServiceInterface *)interface;
-(void)setInterface:(BSServiceInterface *)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)setContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceQuality:(BSServiceQuality *)arg1 ;
-(void)setInterfaceTarget:(id)arg1 ;
-(void)setActivationHandler:(id)arg1 ;
-(void)setMessageHandler:(id)arg1 ;
-(void)setTargetDispatchingQueue:(id<BSServiceDispatchingQueue>)arg1 ;
-(void)encodeInitiatingContext:(/*^block*/id)arg1 ;
-(BSXPCServiceConnectionProxy *)remoteTarget;
-(BSXPCCoder *)initiatingContext;
-(void)setNonLaunchingAware;
-(void)setConnectionHandler:(id)arg1 ;
-(void)setNoMoreChildrenHandler:(id)arg1 ;
-(void)connection:(id)arg1 handleConnection:(id)arg2 ;
-(void)connectionHandleNoMoreChildren:(id)arg1 ;
-(void)connection:(id)arg1 handleError:(id)arg2 ;
-(void)connection:(id)arg1 handleMessage:(id)arg2 ;
-(void)connectionActivated:(id)arg1 ;
-(void)connectionInterrupted:(id)arg1 ;
-(void)connectionInvalidated:(id)arg1 ;
-(BOOL)isNonLaunchingAware;
-(BOOL)hasInterruptionHandler;
-(BOOL)hasInvalidationHandler;
-(BOOL)hasErrorHandler;
-(void)connectionInitialized:(id)arg1 withActiveXPCConnection:(id)arg2 xpcConnectionTargetQueue:(id)arg3 ;
-(void)connectionDisconnected:(id)arg1 ;
-(id<BSServiceDispatchingQueue>)targetDispatchingQueue;
-(BSServiceQuality *)serviceQuality;
-(id)interfaceTarget;
-(void)setInitiatingContext:(BSXPCCoder *)arg1 ;
-(id)activationHandler;
-(id)connectionHandler;
-(id)noMoreChildrenHandler;
-(id)messageHandler;
@end

