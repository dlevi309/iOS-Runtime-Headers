/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQuantitySample.h>

@class HKQuantity, NSDateInterval;

@interface HKDiscreteQuantitySample : HKQuantitySample {

	HKQuantity* _minimumQuantity;
	HKQuantity* _maximumQuantity;
	HKQuantity* _mostRecentQuantity;
	NSDateInterval* _mostRecentQuantityDateInterval;
	BOOL __hasMinimumQuantity;
	BOOL __hasMaximumQuantity;
	BOOL __hasMostRecentQuantity;
	BOOL __hasMostRecentQuantityDateInterval;

}

@property (setter=_setMinimumQuantity:,nonatomic,copy) HKQuantity * minimumQuantity;                                                //@synthesize minimumQuantity=_minimumQuantity - In the implementation block
@property (setter=_setAverageQuantity:,nonatomic,copy) HKQuantity * averageQuantity; 
@property (setter=_setMaximumQuantity:,nonatomic,copy) HKQuantity * maximumQuantity;                                                //@synthesize maximumQuantity=_maximumQuantity - In the implementation block
@property (setter=_setMostRecentQuantity:,nonatomic,copy) HKQuantity * mostRecentQuantity;                                          //@synthesize mostRecentQuantity=_mostRecentQuantity - In the implementation block
@property (setter=_setMostRecentQuantityDateInterval:,nonatomic,copy) NSDateInterval * mostRecentQuantityDateInterval;              //@synthesize mostRecentQuantityDateInterval=_mostRecentQuantityDateInterval - In the implementation block
@property (assign,nonatomic) BOOL _hasMinimumQuantity;                                                                              //@synthesize _hasMinimumQuantity=__hasMinimumQuantity - In the implementation block
@property (assign,nonatomic) BOOL _hasMaximumQuantity;                                                                              //@synthesize _hasMaximumQuantity=__hasMaximumQuantity - In the implementation block
@property (assign,nonatomic) BOOL _hasMostRecentQuantity;                                                                           //@synthesize _hasMostRecentQuantity=__hasMostRecentQuantity - In the implementation block
@property (assign,nonatomic) BOOL _hasMostRecentQuantityDateInterval;                                                               //@synthesize _hasMostRecentQuantityDateInterval=__hasMostRecentQuantityDateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
-(HKQuantity *)minimumQuantity;
-(NSDateInterval *)mostRecentQuantityDateInterval;
-(HKQuantity *)maximumQuantity;
-(BOOL)_hasMinimumQuantity;
-(void)_setAverageQuantity:(id)arg1 ;
-(HKQuantity *)mostRecentQuantity;
-(HKQuantity *)averageQuantity;
-(BOOL)_hasMaximumQuantity;
-(BOOL)_hasMostRecentQuantity;
-(BOOL)_hasMostRecentQuantityDateInterval;
-(void)_setMinimumQuantity:(id)arg1 ;
-(void)_setMaximumQuantity:(id)arg1 ;
-(void)_setMostRecentQuantity:(id)arg1 ;
-(void)_setMostRecentQuantityDateInterval:(id)arg1 ;
-(void)set_hasMinimumQuantity:(BOOL)arg1 ;
-(void)set_hasMaximumQuantity:(BOOL)arg1 ;
-(void)set_hasMostRecentQuantity:(BOOL)arg1 ;
-(void)set_hasMostRecentQuantityDateInterval:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
@end

