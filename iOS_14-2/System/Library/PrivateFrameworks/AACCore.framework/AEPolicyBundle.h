/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/


@protocol OS_dispatch_queue, AEPolicyStore, AEPerformancePrimitives;
@class NSObject, NSArray;

@interface AEPolicyBundle : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<AEPolicyStore> _policyStore;
	NSArray* _activations;
	id<AEPerformancePrimitives> _performancePrimitives;

}
-(void)activateSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 activations:(id)arg3 ;
-(id)recoverySession;
@end

