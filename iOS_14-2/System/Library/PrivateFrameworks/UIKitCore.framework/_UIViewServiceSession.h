/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <UIKitCore/_UIViewServiceDeputyManagerDelegate.h>
#import <UIKitCore/_UIViewServiceViewControllerOperatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, _UIViewServiceDeputyManager, _UIAsyncInvocation, NSString;

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	_UIViewServiceDeputyManager* _deputyManager;
	_UIAsyncInvocation* _invalidationInvocation;
	/*^block*/id _terminationHandler;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (nonatomic,copy) id terminationHandler;                   //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionWithConnection:(id)arg1 ;
-(oneway void)release;
-(int)__automatic_invalidation_logic;
-(void)unregisterDeputyClass:(Class)arg1 ;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(id)terminationHandler;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)registerDeputyClass:(Class)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)deputy:(id)arg1 didFailWithError:(id)arg2 ;
-(unsigned long long)retainCount;
-(void)setTerminationHandler:(id)arg1 ;
-(void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2 ;
-(void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2 ;
-(void)dealloc;
@end

