/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKStatistics;

@interface _HKBloodPressureWrapper : NSObject {

	HKStatistics* _systolic;
	HKStatistics* _diastolic;

}

@property (nonatomic,retain) HKStatistics * systolic;               //@synthesize systolic=_systolic - In the implementation block
@property (nonatomic,retain) HKStatistics * diastolic;              //@synthesize diastolic=_diastolic - In the implementation block
-(HKStatistics *)systolic;
-(void)setSystolic:(HKStatistics *)arg1 ;
-(HKStatistics *)diastolic;
-(void)setDiastolic:(HKStatistics *)arg1 ;
@end

