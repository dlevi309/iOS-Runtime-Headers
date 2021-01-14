/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)reduction;
-(id)description;
-(id)_baseDimensions;
@end

