/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@class HKQuantity, HDCodableQuantitySample, HKQuantityType;

@interface HKQuantitySample : HKSample {

	HKQuantity* _quantity;
	long long _freezeState;
	long long _count;
	HDCodableQuantitySample* _codableQuantitySample;

}

@property (assign,setter=_setFrozen:,getter=_frozen,nonatomic) BOOL frozen; 
@property (setter=_setCodableQuantitySample:,nonatomic,retain) HDCodableQuantitySample * codableQuantitySample;              //@synthesize codableQuantitySample=_codableQuantitySample - In the implementation block
@property (copy,readonly) HKQuantityType * quantityType; 
@property (copy,readonly) HKQuantity * quantity; 
@property (readonly) long long count;                                                                                        //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(BOOL)_isConcreteObjectClass;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5 ;
+(id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4 ;
+(id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(BOOL)_shouldNotifyOnInsert;
-(BOOL)_frozen;
-(HKQuantityType *)quantityType;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantity *)quantity;
-(long long)count;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)_setFrozen:(BOOL)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setCount:(long long)arg1 ;
-(id)_valueDescription;
-(void)_setQuantity:(id)arg1 ;
-(long long)_compareFreezeStateWithSample:(id)arg1 ;
-(HDCodableQuantitySample *)codableQuantitySample;
-(void)_setCodableQuantitySample:(id)arg1 ;
-(void)_setFreezing;
@end

