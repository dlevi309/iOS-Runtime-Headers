/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

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
+(BOOL)_isConcreteObjectClass;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5 ;
+(id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4 ;
+(id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(HKQuantityType *)quantityType;
-(id)_valueDescription;
-(BOOL)_frozen;
-(HKQuantity *)quantity;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(void)_setCount:(long long)arg1 ;
-(void)_setQuantity:(id)arg1 ;
-(BOOL)_shouldNotifyOnInsert;
-(void)_setFrozen:(BOOL)arg1 ;
-(void)_setFreezing;
-(long long)_compareFreezeStateWithSample:(id)arg1 ;
-(HDCodableQuantitySample *)codableQuantitySample;
-(void)_setCodableQuantitySample:(id)arg1 ;
@end

