/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMRemoteConnectionRecoveryAssertionDelegate.h>
#import <libobjc.A.dylib/EMXPCProxyCreating.h>

@protocol OS_dispatch_queue;
@class NSObject, Protocol, NSMutableArray, NSString;

@interface EMRemoteConnection : NSObject <EFLoggable, EMRemoteConnectionRecoveryAssertionDelegate, EMXPCProxyCreating> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _generator;
	Protocol* _protocol;
	CFDictionaryRef _knownSelectors;
	NSMutableArray* _resetHandlers;
	NSMutableArray* _recoveryHandlers;
	NSMutableArray* _pendingReattempts;
	id _currentProxy;
	os_unfair_lock_s _lock;
	os_unfair_lock_s _proxyLock;
	BOOL _waitingForRecovery;
	AI _activeVouchers;

}

@property (readonly) Protocol * protocol;                           //@synthesize protocol=_protocol - In the implementation block
@property (readonly) id reattemptingRemoteObjectProxy; 
@property (readonly) id remoteObjectProxy; 
@property (readonly) BOOL prefersImmediateActivity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(/*^block*/id)arg1 ;
-(id)proxy;
-(id)remoteObjectProxy;
-(Protocol *)protocol;
-(void)addRecoveryHandler:(/*^block*/id)arg1 ;
-(id)reattemptingRemoteObjectProxy;
-(void)addResetHandler:(/*^block*/id)arg1 ;
-(NSString *)debugDescription;
-(id)requestRecoveryAssertion;
-(void)voucherInvalidated;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_reattemptInvocation:(id)arg1 withProxy:(id)arg2 originalError:(id)arg3 ;
-(void)voucherInitialized;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)recover;
-(NSString *)description;
-(id)proxyCreator:(id*)arg1 ;
-(BOOL)_respondsToRemoteSelector:(SEL)arg1 ;
-(void)reset;
-(void)_sendInvocation:(id)arg1 withProxy:(id)arg2 ;
-(id)initWithProtocol:(id)arg1 proxyGenerator:(/*^block*/id)arg2 ;
-(id)_methodSignatureForRemoteSelector:(SEL)arg1 ;
-(BOOL)prefersImmediateActivity;
@end

