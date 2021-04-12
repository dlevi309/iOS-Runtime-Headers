/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartViewController.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>

@class HKSleepAnnotationViewDataSource, NSString;

@interface HKSleepChartViewControllerYukon : HKInteractiveChartViewController <HKInteractiveChartViewObserver> {

	HKSleepAnnotationViewDataSource* _annotationViewDataSource;

}

@property (nonatomic,retain) HKSleepAnnotationViewDataSource * annotationViewDataSource;              //@synthesize annotationViewDataSource=_annotationViewDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKSleepAnnotationViewDataSource *)annotationViewDataSource;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(void)setAnnotationViewDataSource:(HKSleepAnnotationViewDataSource *)arg1 ;
-(id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9 ;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(id)makeAnnotationDataSource;
-(id)lollipopAnnotationColor;
-(void)primaryGraphViewControllerDidInitialize:(id)arg1 ;
-(id)descriptionSpansForGraphView:(id)arg1 ;
-(id)calendarQueryDisplayType;
@end

