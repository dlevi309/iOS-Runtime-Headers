/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKDisplayType;

@interface HKHandwashingInteractiveChartViewController : HKInteractiveChartViewController {

	HKDisplayType* _primaryDisplayType;
	HKDisplayType* _goalDisplayType;

}

@property (nonatomic,retain) HKDisplayType * primaryDisplayType;              //@synthesize primaryDisplayType=_primaryDisplayType - In the implementation block
@property (nonatomic,retain) HKDisplayType * goalDisplayType;                 //@synthesize goalDisplayType=_goalDisplayType - In the implementation block
-(void)viewDidLoad;
-(id)initWithDisplayTypeController:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 ;
-(HKDisplayType *)primaryDisplayType;
-(void)setPrimaryDisplayType:(HKDisplayType *)arg1 ;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(id)_generateHandwashingGoalDisplayTypeWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2 selectedTimeScopeController:(id)arg3 ;
-(void)setGoalDisplayType:(HKDisplayType *)arg1 ;
-(HKDisplayType *)goalDisplayType;
-(id)_generateHandwashingGoalLineSeriesWithDisplayType:(id)arg1 unitPreferenceController:(id)arg2 color:(id)arg3 ;
-(id)_generateHandwashingGoalDataSource;
@end

