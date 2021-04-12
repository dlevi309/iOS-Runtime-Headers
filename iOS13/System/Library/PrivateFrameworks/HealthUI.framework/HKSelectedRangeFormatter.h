/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIFont *)majorFont;
-(UIFont *)minorFont;
-(HKUnitPreferenceController *)unitPreferenceController;
-(void)setMajorFont:(UIFont *)arg1 ;
-(void)setMinorFont:(UIFont *)arg1 ;
-(id<HKInteractiveChartRangeProvider>)chartRangeProvider;
-(void)setChartRangeProvider:(id<HKInteractiveChartRangeProvider>)arg1 ;
-(id)selectedRangeDataWithCoordinateInfo:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6 ;
-(id)initWithUnitPreferenceController:(id)arg1 ;
-(void)configureWithChartRangeProvider:(id)arg1 ;
-(id)selectedRangeDataWithGraphView:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6 ;
-(void)setUnitPreferenceController:(HKUnitPreferenceController *)arg1 ;
-(id)_formatterForDisplayType:(id)arg1 timeScope:(long long)arg2 majorFont:(id)arg3 minorFont:(id)arg4 ;
-(id)_statFormatterItemOptionsForTimePeriodDisplayType:(id)arg1 timeScope:(long long)arg2 context:(long long)arg3 ;
-(id)selectedRangeDataWithCoordinates:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6 ;
@end

