/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/


@protocol AEPolicyStore, AEPerformancePrimitives;
@class NSArray;

@interface AEActivationPool : NSObject {

	NSArray* _activations;
	/*^block*/id _invalidationHandler;
	id<AEPolicyStore> _policyStore;
	id<AEPerformancePrimitives> _performancePrimitives;

}
@end

