/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/

#import <libobjc.A.dylib/AEPolicySession.h>

@protocol AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;
@class NSArray, NSObject;

@interface AERecoveryPolicySession : NSObject <AEPolicySession> {

	NSArray* _persistentDeactivations;
	id<AEPolicyStore> _policyStore;
	id<AEPerformancePrimitives> _performancePrimitives;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)deactivateWithCompletion:(/*^block*/id)arg1 ;
@end

