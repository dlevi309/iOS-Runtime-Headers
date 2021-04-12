/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKQuantity;

@interface HKQuantityRange : NSObject {

	HKQuantity* _minimum;
	HKQuantity* _maximum;

}

@property (nonatomic,readonly) HKQuantity * minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) HKQuantity * maximum;              //@synthesize maximum=_maximum - In the implementation block
-(id)init;
-(HKQuantity *)minimum;
-(HKQuantity *)maximum;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 ;
-(BOOL)containsQuantityInclusive:(id)arg1 ;
@end

