/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKQuantity;

@interface HKQuantityRange : NSObject {

	HKQuantity* _minimum;
	HKQuantity* _maximum;

}

@property (nonatomic,readonly) HKQuantity * minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) HKQuantity * maximum;              //@synthesize maximum=_maximum - In the implementation block
-(HKQuantity *)maximum;
-(HKQuantity *)minimum;
-(id)init;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 ;
-(BOOL)containsQuantityInclusive:(id)arg1 ;
@end

