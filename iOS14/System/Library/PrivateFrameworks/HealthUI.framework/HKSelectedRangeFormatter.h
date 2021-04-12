/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKInteractiveChartRangeProvider;
@class HKUnitPreferenceController, UIFont;

@interface HKSelectedRangeFormatter : NSObject {

	id<HKInteractiveChartRangeProvider> _chartRangeProvider;
	HKUnitPreferenceController* _unitPreferenceController;
	UIFont* _majorFont;
	UIFont* _minorFont;

}

@property (nonatomic,retain) id<HKInteractiveChartRangeProvider> chartRangeProvider;              //@synthesize chartRangeProvider=_chartRangeProvider - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitPreferenceController;               //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,retain) UIFont * majorFont;                                                  //@synthesize majorFont=_majorFont - In the implementation block
@property (nonatomic,retain) UIFont * minorFont;                                                  //@synthesize minorFont=_minorFont - In the implementation block
-(HKUnitPreferenceController *)unitPreferenceController;
-(UIFont *)minorFont;
-(UIFont *)majorFont;
-(void)setMajorFont:(UIFont *)arg1 ;
-(void)setMinorFont:(UIFont *)arg1 ;
-(id<HKInteractiveChartRangeProvider>)chartRangeProvider;
-(void)setChartRangeProvider:(id<HKInteractiveChartRangeProvider>)arg1 ;
-(id)selectedRangeDataWithGraphView:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6 ;
-(id)initWithUnitPreferenceController:(id)arg1 ;
-(void)configureWithChartRangeProvider:(id)arg1 ;
-(id)selectedRangeDataWithCoordinateInfo:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6 ;
-(void)setUnitPreferenceController:(HKUnitPreferenceController *)arg1 ;
-(id)_formatterForDisplayType:(id)arg1 timeScope:(long long)arg2 majorFont:(id)arg3 minorFont:(id)arg4 ;
-(id)_statFormatterItemOptionsForTimePeriodDisplayType:(id)arg1 timeScope:(long long)arg2 context:(long long)arg3 ;
-(id)_handwashingStatFormatterItemOptionsForTimePeriodTimeScope:(long long)arg1 ;
-(id)selectedRangeDataWithCoordinates:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6 ;
@end

