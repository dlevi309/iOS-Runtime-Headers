/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

