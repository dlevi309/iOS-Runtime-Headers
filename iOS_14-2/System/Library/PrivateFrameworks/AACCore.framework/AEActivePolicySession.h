/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/

#import <libobjc.A.dylib/AEInvalidationRouterDelegate.h>
#import <libobjc.A.dylib/AEPolicySession.h>

@protocol AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;
@class AEInvalidationRouter, NSObject, NSArray;

@interface AEActivePolicySession : NSObject <AEInvalidationRouterDelegate, AEPolicySession> {

	/*^block*/id _invalidationHandler;
	id<AEPolicyStore> _policyStore;
	id<AEPerformancePrimitives> _performancePrimitives;
	AEInvalidationRouter* _invalidationRouter;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _activation;
	NSArray* _persistentDeactivations;

}

@property (nonatomic,copy) id invalidationHandler;              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(id)sessionWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 invalidationRouter:(id)arg3 activations:(id)arg4 persistentDeactivations:(id)arg5 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)deactivateWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidationRouter:(id)arg1 didReceiveInvalidationError:(id)arg2 ;
@end

