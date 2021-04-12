/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMXPCProxyCreating.h>

@protocol OS_dispatch_queue;
@class NSObject, Protocol, NSMutableArray, NSString;

@interface EMRemoteConnection : NSObject <EFLoggable, EMXPCProxyCreating> {

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
	BOOL _preferImmediateRecovery;

}

@property (readonly) Protocol * protocol;                           //@synthesize protocol=_protocol - In the implementation block
@property (readonly) id reattemptingRemoteObjectProxy; 
@property (readonly) id remoteObjectProxy; 
@property (assign) BOOL preferImmediateRecovery;                    //@synthesize preferImmediateRecovery=_preferImmediateRecovery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(Protocol *)protocol;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)reset;
-(id)remoteObjectProxy;
-(id)_methodSignatureForRemoteSelector:(SEL)arg1 ;
-(void)_sendInvocation:(id)arg1 withProxy:(id)arg2 ;
-(BOOL)_respondsToRemoteSelector:(SEL)arg1 ;
-(id)proxy;
-(void)addResetHandler:(/*^block*/id)arg1 ;
-(void)addRecoveryHandler:(/*^block*/id)arg1 ;
-(id)initWithProtocol:(id)arg1 proxyGenerator:(/*^block*/id)arg2 ;
-(BOOL)preferImmediateRecovery;
-(void)recover;
-(id)reattemptingRemoteObjectProxy;
-(void)setPreferImmediateRecovery:(BOOL)arg1 ;
-(id)proxyCreator:(id*)arg1 ;
-(void)_reattemptInvocation:(id)arg1 withProxy:(id)arg2 originalError:(id)arg3 ;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(/*^block*/id)arg1 ;
@end

