/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartViewController.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>

@class HKDisplayType, HKValueRange, HKUIMetricColors, UIColor, NSMutableDictionary, NSMutableArray, NSString;

@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver> {

	HKDisplayType* _primaryDisplayType;
	long long _displayMode;
	HKValueRange* _initialVisibleDateRange;
	HKUIMetricColors* _annotationDataSourceMetricColors;
	HKDisplayType* _overlayDisplayType;
	UIColor* _currentOverlayColor;
	NSMutableDictionary* _overlayChartCaches;
	NSMutableDictionary* _customNamedCaches;
	NSMutableArray* _cachedDataControllersWaitingForData;

}

@property (nonatomic,retain) HKDisplayType * overlayDisplayType;                                //@synthesize overlayDisplayType=_overlayDisplayType - In the implementation block
@property (nonatomic,retain) UIColor * currentOverlayColor;                                     //@synthesize currentOverlayColor=_currentOverlayColor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overlayChartCaches;                          //@synthesize overlayChartCaches=_overlayChartCaches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customNamedCaches;                           //@synthesize customNamedCaches=_customNamedCaches - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedDataControllersWaitingForData;              //@synthesize cachedDataControllersWaitingForData=_cachedDataControllersWaitingForData - In the implementation block
@property (nonatomic,readonly) HKDisplayType * primaryDisplayType;                              //@synthesize primaryDisplayType=_primaryDisplayType - In the implementation block
@property (assign,nonatomic) long long displayMode;                                             //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) HKValueRange * initialVisibleDateRange;                            //@synthesize initialVisibleDateRange=_initialVisibleDateRange - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * annotationDataSourceMetricColors;               //@synthesize annotationDataSourceMetricColors=_annotationDataSourceMetricColors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1 ;
-(HKUIMetricColors *)annotationDataSourceMetricColors;
-(id)makeAnnotationDataSource;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(id)initWithFixedRange:(id)arg1 healthStore:(id)arg2 primaryDisplayType:(id)arg3 unitPreferenceController:(id)arg4 dateCache:(id)arg5 chartDataCacheController:(id)arg6 selectedTimeScopeController:(id)arg7 initialXValue:(id)arg8 ;
-(void)setAnnotationDataSourceMetricColors:(HKUIMetricColors *)arg1 ;
-(id)displayTypeForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 overlayColor:(id)arg3 options:(long long)arg4 namedPredicate:(id)arg5 ;
-(void)installOverlayDisplayType:(id)arg1 ;
-(double)minimumHeightForChart;
-(id)initWithHealthStore:(id)arg1 primaryDisplayType:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 initialXValue:(id)arg7 ;
-(void)cachedDataForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 cacheDataSource:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)cachedDataForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 namedPredicate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)displayTypeForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 displayTypeController:(id)arg3 overlayColor:(id)arg4 cacheDataSource:(id)arg5 alternateLineSeries:(id)arg6 alternateFormatter:(id)arg7 seriesOptions:(long long)arg8 ;
-(id)lollipopAnnotationColor;
-(id)lollipopExtensionColor;
-(HKDisplayType *)primaryDisplayType;
-(HKValueRange *)initialVisibleDateRange;
-(void)setInitialVisibleDateRange:(HKValueRange *)arg1 ;
-(HKDisplayType *)overlayDisplayType;
-(void)setOverlayDisplayType:(HKDisplayType *)arg1 ;
-(void)_commonInitializationWithDisplayType:(id)arg1 ;
-(void)clearOverlayDisplayType;
-(id)_dataSourceForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3 ;
-(void)_modifyFormatter:(id)arg1 forTitleOptions:(long long)arg2 ;
-(id)_dataSourceForQuantityType:(id)arg1 timeScope:(long long)arg2 customDataSource:(id)arg3 ;
-(void)_deliverOrWaitForDataSource:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_deliverCachedDataFromSource:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NSMutableArray *)cachedDataControllersWaitingForData;
-(NSMutableDictionary *)overlayChartCaches;
-(BOOL)_displayTypeRequiresAverageAndDuration:(id)arg1 ;
-(NSMutableDictionary *)customNamedCaches;
-(id)_overlayChartCacheForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3 ;
-(id)_overlayChartCacheForDataSource:(id)arg1 timeScope:(long long)arg2 ;
-(id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2 ;
-(void)_removeControllerWaitingForData:(id)arg1 ;
-(UIColor *)currentOverlayColor;
-(void)setCurrentOverlayColor:(UIColor *)arg1 ;
-(void)setOverlayChartCaches:(NSMutableDictionary *)arg1 ;
-(void)setCustomNamedCaches:(NSMutableDictionary *)arg1 ;
-(void)setCachedDataControllersWaitingForData:(NSMutableArray *)arg1 ;
@end

