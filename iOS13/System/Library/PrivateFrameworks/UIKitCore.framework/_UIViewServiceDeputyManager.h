/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)invalidate;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(int)__automatic_invalidation_logic;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)registerDeputyClass:(Class)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)unregisterDeputyClass:(Class)arg1 ;
-(void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2 ;
-(Class)_deputyClassForConnectionSelector:(SEL)arg1 ;
-(void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)checkDeputyForRotation:(id)arg1 ;
-(void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(R)arg2 replyHandler:(id)arg3 :(/*^block*/id)arg4 ;
@end

