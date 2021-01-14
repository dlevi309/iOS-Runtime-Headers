/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewServiceViewControllerOperatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, _UIAsyncInvocation, NSMutableDictionary, NSLock, NSMutableSet, NSString;

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	_UIAsyncInvocation* _invalidationInvocation;
	NSMutableDictionary* _connectionHandlers;
	NSLock* _connectionHandlersLock;
	NSMutableSet* _deputies;
	/*^block*/id _terminationHandler;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	id _delegate;

}

@property (assign) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1 ;
-(oneway void)release;
-(int)__automatic_invalidation_logic;
-(void)unregisterDeputyClass:(Class)arg1 ;
-(id)init;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(BOOL)_tryRetain;
-(id)delegate;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)registerDeputyClass:(Class)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(R)arg2 replyHandler:(id)arg3 :(/*^block*/id)arg4 ;
-(void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(unsigned long long)retainCount;
-(Class)_deputyClassForConnectionSelector:(SEL)arg1 ;
-(void)invalidate;
-(void)checkDeputyForRotation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

