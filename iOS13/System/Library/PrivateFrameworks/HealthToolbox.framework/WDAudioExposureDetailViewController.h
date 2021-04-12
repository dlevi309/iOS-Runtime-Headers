/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDDisplayTypeDetailViewController.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>

@class HKGraphSeries, NSString;

@interface WDAudioExposureDetailViewController : WDDisplayTypeDetailViewController <HKInteractiveChartViewObserver> {

	HKGraphSeries* _LEQSeries;

}

@property (nonatomic,retain) HKGraphSeries * LEQSeries;              //@synthesize LEQSeries=_LEQSeries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4 ;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(void)_installLEQOverlayForDisplayType:(id)arg1 unitPreferenceController:(id)arg2 healthStore:(id)arg3 ;
-(id)_buildLEQDisplayTypeForDisplayType:(id)arg1 unitPreferenceController:(id)arg2 healthStore:(id)arg3 ;
-(id)_buildLEQSeriesForDisplayType:(id)arg1 unitPreferenceController:(id)arg2 healthStore:(id)arg3 ;
-(long long)_dataTypeCodeForAudioDisplayType:(id)arg1 ;
-(void)setLEQSeries:(HKGraphSeries *)arg1 ;
-(id)_lineSeriesForDisplayType:(id)arg1 ;
-(id)_buildLEQChartCacheWithUnitPreferenceController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(id)_buildLEQPresentationStyle;
-(id)_buildLEQDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(HKGraphSeries *)LEQSeries;
@end

