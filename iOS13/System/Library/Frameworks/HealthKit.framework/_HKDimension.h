/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class _HKFactorization;

@interface _HKDimension : NSObject {

	_HKFactorization* _reduction;
	os_unfair_lock_s _reductionLock;

}
+(id)dimensionFromString:(id)arg1 ;
-(id)init;
-(id)description;
-(id)_baseDimensions;
-(id)reduction;
@end

