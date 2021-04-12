/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartViewController.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>

@class HKSleepAnnotationViewDataSource, NSString;

@interface HKSleepChartViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver> {

	BOOL _disableXAxisAndInteraction;
	HKSleepAnnotationViewDataSource* _annotationViewDataSource;

}

@property (nonatomic,retain) HKSleepAnnotationViewDataSource * annotationViewDataSource;              //@synthesize annotationViewDataSource=_annotationViewDataSource - In the implementation block
@property (assign,nonatomic) BOOL disableXAxisAndInteraction;                                         //@synthesize disableXAxisAndInteraction=_disableXAxisAndInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_titlesAndValuesWithSleepDay:(id)arg1 sleepPeriod:(id)arg2 context:(id)arg3 result:(/*^block*/id)arg4 ;
+(id)_goalLineStrokeStyle;
+(id)_inBedColor;
+(id)_asleepColor;
+(id)_lessSaturatedColorWithColor:(id)arg1 ;
+(id)_generateDailyTimePeriodSeries;
+(id)_buildSleepChartCacheWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4 ;
+(id)_buildSleepAnalysisDataSourceWithHealthStore:(id)arg1 displayTypeController:(id)arg2 ;
+(id)consistencyDisplayTypesWithHealthStore:(id)arg1 unitController:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4 ;
-(id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 initialXValue:(id)arg7 options:(unsigned long long)arg8 ;
-(HKSleepAnnotationViewDataSource *)annotationViewDataSource;
-(id)makeAnnotationDataSource;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(void)setAnnotationViewDataSource:(HKSleepAnnotationViewDataSource *)arg1 ;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(void)setDisableXAxisAndInteraction:(BOOL)arg1 ;
-(id)lollipopAnnotationColor;
-(void)primaryGraphViewControllerDidInitialize:(id)arg1 ;
-(id)descriptionSpansForGraphView:(id)arg1 ;
-(id)calendarQueryDisplayType;
-(BOOL)disableXAxisAndInteraction;
@end

