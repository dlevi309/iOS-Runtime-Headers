/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSString, _UIRemoteViewService, NSObject, NSError, _UIAsyncInvocation, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {

	/*^block*/id _connectionHandler;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isCancelled;
	NSError* _cancellationError;
	_UIAsyncInvocation* _cancellationInvocation;
	int _sessionRequestNotifyToken;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceSessionConnection;
	BOOL _serviceSessionConnectionResumed;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}
+(id)connectToViewService:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(oneway void)release;
-(void)_didConnectToService;
-(void)_launchService;
-(int)__automatic_invalidation_logic;
-(void)_createAndEstablishConnection;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)_createProcessAssertion;
-(void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(/*^block*/id)arg3 ;
-(unsigned long long)retainCount;
-(void)_cancelUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_createPlugInProcessAssertion;
-(void)dealloc;
-(void)_establishConnection;
-(void)_cancelWithError:(id)arg1 ;
@end

