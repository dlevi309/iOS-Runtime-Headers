/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKGraphViewDelegate.h>
#import <libobjc.A.dylib/HKSampleTypeDateRangeControllerObserver.h>
#import <libobjc.A.dylib/HKCurrentTimeViewDelegate.h>
#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HKMonthViewControllerDelegate.h>
#import <libobjc.A.dylib/HKLollipopDelegate.h>
#import <libobjc.A.dylib/HKInteractiveChartCurrentValueViewHandler.h>
#import <libobjc.A.dylib/HKInteractiveChartCurrentValueViewCallbacks.h>
#import <libobjc.A.dylib/HKCurrentValueViewDataSourceDelegate.h>

@protocol HKInteractiveChartCurrentValueViewHandler, HKCurrentValueViewDataSourceDelegate, HKInteractiveChartCurrentValueViewCallbacks;
@class NSMutableArray, UILabel, HKTimeScopeControl, HKCurrentTimeView, UIView, NSArray, UIFont, HKUIDateLabel, UIImpactFeedbackGenerator, HKGraphViewController, NSDate, HKValueRange, HKHealthStore, HKUnitPreferenceController, HKDateCache, HKSelectedTimeScopeController, HKSelectedRangeFormatter, HKChartDataCacheController, HKDisplayTypeController, HKDisplayCategoryController, HKSampleTypeDateRangeController, HKInteractiveChartAnnotationViewDataSource, HKLollipopController, HKCurrentValueViewDataSource, HKDisplayType, HKSampleType, UIColor, NSString;

@interface HKInteractiveChartViewController : HKViewController <HKGraphViewDelegate, HKSampleTypeDateRangeControllerObserver, HKCurrentTimeViewDelegate, HKInteractiveChartAnnotationViewDelegate, UIGestureRecognizerDelegate, HKMonthViewControllerDelegate, HKLollipopDelegate, HKInteractiveChartCurrentValueViewHandler, HKInteractiveChartCurrentValueViewCallbacks, HKCurrentValueViewDataSourceDelegate> {

	NSMutableArray* _observers;
	long long _displayState;
	UILabel* _selectedSeriesLabel;
	UILabel* _selectedSeriesUnitLabel;
	HKTimeScopeControl* _radioButtons;
	HKCurrentTimeView* _currentTimeView;
	UIView* _currentValueView;
	double _bannerBottom;
	UIView* _graphTopDividerView;
	UIView* _graphBottomDividerView;
	UILabel* _dashboardEmptyHeader;
	UILabel* _dashboardEmptyDescription;
	NSArray* _allGraphSeriesConfigurationManagers;
	UIFont* _majorSelectedPointFont;
	UIFont* _minorSelectedPointFont;
	HKUIDateLabel* _selectedPointDateLabel;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	UIView* _primaryGraphViewWrapper;
	HKGraphViewController* _primaryGraphViewController;
	NSDate* _creationDate;
	unsigned long long _options;
	HKValueRange* _fixedRange;
	double _lastDateValueRangeUpdate;
	HKHealthStore* _healthStore;
	HKUnitPreferenceController* _unitPreferenceController;
	HKDateCache* _dateCache;
	HKSelectedTimeScopeController* _selectedTimeScopeController;
	HKSelectedRangeFormatter* _selectedRangeFormatter;
	HKChartDataCacheController* _chartDataCacheController;
	HKDisplayTypeController* _displayTypeController;
	HKDisplayCategoryController* _displayCategoryController;
	HKSampleTypeDateRangeController* _sampleTypeDateRangeController;
	id<HKInteractiveChartCurrentValueViewHandler> _currentValueViewHandler;
	id<HKCurrentValueViewDataSourceDelegate> _currentValueViewDataSourceDelegate;
	HKInteractiveChartAnnotationViewDataSource* _annotationDataSource;
	HKLollipopController* _lollipopController;
	double _legendBottomLocation;
	NSArray* _displayTypeStack;
	HKCurrentValueViewDataSource* _currentValueViewDataSource;
	id _initialXValue;
	long long _sampleDateRangeUpdateCount;
	long long _delayedAutoscaleRequestCount;
	long long _delayedAutoscaleActualCount;
	/*^block*/id _startupReportingBlock;
	id<HKInteractiveChartCurrentValueViewCallbacks> _standardCurrentValueViewCallbacks;

}

@property (nonatomic,retain) HKLollipopController * lollipopController;                                                             //@synthesize lollipopController=_lollipopController - In the implementation block
@property (assign,nonatomic) double legendBottomLocation;                                                                           //@synthesize legendBottomLocation=_legendBottomLocation - In the implementation block
@property (nonatomic,retain) NSArray * displayTypeStack;                                                                            //@synthesize displayTypeStack=_displayTypeStack - In the implementation block
@property (nonatomic,retain) HKSelectedRangeFormatter * selectedRangeFormatter;                                                     //@synthesize selectedRangeFormatter=_selectedRangeFormatter - In the implementation block
@property (nonatomic,retain) HKCurrentValueViewDataSource * currentValueViewDataSource;                                             //@synthesize currentValueViewDataSource=_currentValueViewDataSource - In the implementation block
@property (nonatomic,retain) id initialXValue;                                                                                      //@synthesize initialXValue=_initialXValue - In the implementation block
@property (assign,nonatomic) long long sampleDateRangeUpdateCount;                                                                  //@synthesize sampleDateRangeUpdateCount=_sampleDateRangeUpdateCount - In the implementation block
@property (assign,nonatomic) long long delayedAutoscaleRequestCount;                                                                //@synthesize delayedAutoscaleRequestCount=_delayedAutoscaleRequestCount - In the implementation block
@property (assign,nonatomic) long long delayedAutoscaleActualCount;                                                                 //@synthesize delayedAutoscaleActualCount=_delayedAutoscaleActualCount - In the implementation block
@property (nonatomic,copy) id startupReportingBlock;                                                                                //@synthesize startupReportingBlock=_startupReportingBlock - In the implementation block
@property (assign,nonatomic,__weak) id<HKInteractiveChartCurrentValueViewCallbacks> standardCurrentValueViewCallbacks;              //@synthesize standardCurrentValueViewCallbacks=_standardCurrentValueViewCallbacks - In the implementation block
@property (nonatomic,readonly) HKGraphViewController * primaryGraphViewController;                                                  //@synthesize primaryGraphViewController=_primaryGraphViewController - In the implementation block
@property (nonatomic,readonly) double dateSelectorHeight; 
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                                         //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;                                               //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                                                             //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HKSelectedTimeScopeController * selectedTimeScopeController;                                         //@synthesize selectedTimeScopeController=_selectedTimeScopeController - In the implementation block
@property (nonatomic,readonly) HKChartDataCacheController * chartDataCacheController;                                               //@synthesize chartDataCacheController=_chartDataCacheController - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                                                     //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKDisplayCategoryController * displayCategoryController;                                             //@synthesize displayCategoryController=_displayCategoryController - In the implementation block
@property (nonatomic,readonly) HKSampleTypeDateRangeController * sampleTypeDateRangeController;                                     //@synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController - In the implementation block
@property (assign,nonatomic,__weak) id<HKInteractiveChartCurrentValueViewHandler> currentValueViewHandler;                          //@synthesize currentValueViewHandler=_currentValueViewHandler - In the implementation block
@property (assign,nonatomic,__weak) id<HKCurrentValueViewDataSourceDelegate> currentValueViewDataSourceDelegate;                    //@synthesize currentValueViewDataSourceDelegate=_currentValueViewDataSourceDelegate - In the implementation block
@property (nonatomic,retain) HKInteractiveChartAnnotationViewDataSource * annotationDataSource;                                     //@synthesize annotationDataSource=_annotationDataSource - In the implementation block
@property (readonly) HKDisplayType * calendarQueryDisplayType; 
@property (readonly) HKSampleType * calendarQuerySampleType; 
@property (readonly) UIColor * calendarDaySamplePresentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_timeScopeForTimeScope:(long long)arg1 availableTimeScopes:(id)arg2 ;
+(id)_timeScopesWithOptions:(unsigned long long)arg1 ;
-(HKHealthStore *)healthStore;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(HKDateCache *)dateCache;
-(id)stringForValueRange:(id)arg1 timeScope:(long long)arg2 ;
-(BOOL)infographicSupportedForDisplayType:(id)arg1 healthStore:(id)arg2 ;
-(id)infographicViewControllerForDisplayType:(id)arg1 healthStore:(id)arg2 ;
-(void)viewDidLoad;
-(HKDisplayCategoryController *)displayCategoryController;
-(HKSelectedRangeFormatter *)selectedRangeFormatter;
-(id)_colorForDisplayType:(id)arg1 ;
-(id)makeStandardCurrentValueViewDataSource;
-(id)makeAnnotationDataSourceWithMetrics:(id)arg1 ;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(HKChartDataCacheController *)chartDataCacheController;
-(void)addChartViewObserver:(id)arg1 ;
-(HKDisplayTypeController *)displayTypeController;
-(id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9 ;
-(void)loadView;
-(void)setDetailView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(HKUnitPreferenceController *)unitPreferenceController;
-(HKSelectedTimeScopeController *)selectedTimeScopeController;
-(HKSampleTypeDateRangeController *)sampleTypeDateRangeController;
-(long long)stackCountForGraphView:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(void)monthViewController:(id)arg1 didSelectDate:(id)arg2 ;
-(HKGraphViewController *)primaryGraphViewController;
-(id)currentDisplayTypesForStackOffset:(long long)arg1 ;
-(void)replaceCurrentDisplayTypesWithTypes:(id)arg1 stackOffset:(long long)arg2 resetDateRange:(BOOL)arg3 ;
-(void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2 ;
-(id)_primaryDisplayType;
-(void)scrollToMostRecentData;
-(void)graphViewDidBeginSelection:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2 ;
-(void)graphViewDidEndSelection:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4 ;
-(void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3 ;
-(void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2 ;
-(void)graphViewSizeChanged:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(CGRect)arg2 ;
-(void)graphViewDidTapYAxis:(id)arg1 ;
-(void)graphView:(id)arg1 startupTime:(long long)arg2 ;
-(long long)_dateZoom;
-(BOOL)_tilingDisabled;
-(void)currentTimeViewDidTapOnDateSelector:(id)arg1 ;
-(void)currentTimeViewDidTapOnPreviousTimeButton:(id)arg1 ;
-(void)currentTimeViewDidTapOnNextTimeButton:(id)arg1 ;
-(void)didTapOnInfoButtonFromCurrentValueView:(id)arg1 ;
-(void)didTapOnDateFromCurrentValueView:(id)arg1 ;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9 fixedRange:(id)arg10 ;
-(void)unitPreferencesWillUpdate:(id)arg1 ;
-(void)addOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2 ;
-(void)removeOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2 automaticAutoscale:(BOOL)arg3 ;
-(id)graphSeriesForDisplayType:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(double)minimumHeightForChart;
-(id)makeAnnotationDataSource;
-(id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2 ;
-(id)lollipopAnnotationColor;
-(id)lollipopExtensionColor;
-(id)lollipopFieldColor;
-(double)lollipopExtensionLength;
-(void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2 ;
-(void)setLollipopController:(HKLollipopController *)arg1 ;
-(HKLollipopController *)lollipopController;
-(void)setSelectedRangeFormatter:(HKSelectedRangeFormatter *)arg1 ;
-(void)primaryGraphViewControllerDidInitialize:(id)arg1 ;
-(id)descriptionSpansForGraphView:(id)arg1 ;
-(HKDisplayType *)calendarQueryDisplayType;
-(void)removeChartViewObserver:(id)arg1 ;
-(void)removeOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2 ;
-(void)setDisplayTypeStack:(NSArray *)arg1 ;
-(BOOL)_chartHasDateAxis;
-(void)_setVisibleDisplayTypes:(id)arg1 ;
-(void)_createAndPrepareFeedbackGenerator;
-(id)initWithStackedDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9 ;
-(id)descriptionSeriesForGraphView:(id)arg1 ;
-(id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2 ;
-(id)descriptionForXCoordinate:(double)arg1 graphView:(id)arg2 ;
-(id)_dateForXCoordinate:(double)arg1 graphView:(id)arg2 ;
-(id)_addNoDataEntries:(id)arg1 timeScope:(long long)arg2 ;
-(BOOL)_date:(id)arg1 closeToDate:(id)arg2 epsilonDateComponents:(id)arg3 calendar:(id)arg4 ;
-(id)_rangeValueAsNumber:(id)arg1 ;
-(id)_displayTypeForSeries:(id)arg1 ;
-(id)_displayNameForDisplayType:(id)arg1 ;
-(id)replaceRangeClause:(id)arg1 ;
-(id)_numberForXCoordinate:(double)arg1 graphView:(id)arg2 ;
-(void)setStartupReportingBlock:(id)arg1 ;
-(void)_addDisplayTypeToConfiguration:(id)arg1 allDisplayTypes:(id)arg2 configurationManager:(id)arg3 ;
-(void)_updateAfterConfigurationChangeIncludeDateAxis:(BOOL)arg1 ;
-(void)_automaticAutoScale;
-(void)_setSelectedGraphSeries:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateCurrentValueViewWithVisibleRange;
-(double)_effectiveHorizontalMargin;
-(BOOL)_headerLineEnabled;
-(void)_layoutHeader;
-(void)_omitLayoutHeader;
-(BOOL)_timeScopeEnabled;
-(BOOL)_currentValueEnabled;
-(double)dateSelectorHeight;
-(void)_layoutDividerViews;
-(void)_layoutDashboardEmptyLabelsIfNecessary;
-(BOOL)_selectedDateRangeLabelEnabled;
-(BOOL)_dashboardEmptyLabelsExist;
-(id<HKInteractiveChartCurrentValueViewHandler>)currentValueViewHandler;
-(id)makeCurrentValueView;
-(void)setCurrentValueViewCallbacks:(id)arg1 ;
-(long long)_defaultTimeScopeWithAvailableTimeScopes:(id)arg1 ;
-(id)initialXValue;
-(void)_replacePrimaryGraphViewControllerWithTimeScope:(long long)arg1 anchorDate:(id)arg2 animated:(BOOL)arg3 ;
-(void)_replacePrimaryGraphViewControllerWithScalarController;
-(void)_radioButtonsDidUpdate:(id)arg1 ;
-(void)_hideTimeDateControls;
-(void)setAnnotationDataSource:(HKInteractiveChartAnnotationViewDataSource *)arg1 ;
-(void)setLegendBottomLocation:(double)arg1 ;
-(HKInteractiveChartAnnotationViewDataSource *)annotationDataSource;
-(void)_updateSelectedSeriesLabel:(id)arg1 ;
-(void)_showHideNoGraphSeriesLabels;
-(id)_graphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 fixedRange:(id)arg2 ;
-(id)_defaultAxisRangeIncludeToday:(BOOL)arg1 ;
-(long long)_defaultAlignmentForTimeScope:(long long)arg1 ;
-(BOOL)_acceptSubclassRange:(id)arg1 proposedRange:(id)arg2 axisRange:(id)arg3 ;
-(BOOL)_visibleRangeIsNowForTimeScope:(long long)arg1 ;
-(id)_dateForMostRecentData;
-(id)makeAnchorDateFromPreviousAnchorDate:(id)arg1 previousEffectiveVisibleRange:(id)arg2 previousTimeScope:(long long)arg3 currentTimeScope:(long long)arg4 ;
-(void)_configureSelectedRangeFormatterWithChartRangeProvider;
-(void)_setGraphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 preserveScrollPosition:(BOOL)arg3 ;
-(void)_setDateSelectorToVisibleRange;
-(void)_updateAxisScalingRulesForUnitPreferenceChangesOfTypes:(id)arg1 ;
-(void)_handleVisibleRangeChange;
-(id)_displayUnitForDisplayType:(id)arg1 ;
-(id)_allDisplayTypes;
-(id)_customGraphSeriesForDisplayType:(id)arg1 ;
-(long long)_numHorizontalDisplayTypesForTimeScope:(long long)arg1 displayTypes:(id)arg2 ;
-(void)_addSeriesForDisplayType:(id)arg1 updatingTimeScopeProperties:(id)arg2 configurationManager:(id)arg3 ;
-(void)_configureCustomDisplayType:(id)arg1 graphSeries:(id)arg2 configurationManager:(id)arg3 ;
-(void)_updateGraphViewAxisDateRange;
-(BOOL)_displayTypeIsHorizontalForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(BOOL)_shouldHideSeriesForDisplayType:(id)arg1 ;
-(id)_createGraphSeriesConfigurationFromDisplayType:(id)arg1 timeScope:(long long)arg2 ;
-(id<HKCurrentValueViewDataSourceDelegate>)currentValueViewDataSourceDelegate;
-(HKCurrentValueViewDataSource *)currentValueViewDataSource;
-(void)_createDashboardEmptyLabelsIfNecessary;
-(double)legendBottomLocation;
-(id)_configurationForSeries:(id)arg1 ;
-(void)_notifyObserversDidUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2 ;
-(long long)delayedAutoscaleRequestCount;
-(void)setDelayedAutoscaleRequestCount:(long long)arg1 ;
-(long long)delayedAutoscaleActualCount;
-(void)setDelayedAutoscaleActualCount:(long long)arg1 ;
-(void)_scheduleDelayedAutoscale;
-(void)_scrollToMostRecentDataWithAlignment:(long long)arg1 ;
-(void)_scrollToAnchorDate:(id)arg1 graphView:(id)arg2 alignment:(long long)arg3 ;
-(BOOL)_viewHierarchyIsHidden:(id)arg1 ;
-(id)startupReportingBlock;
-(NSArray *)displayTypeStack;
-(HKSampleType *)calendarQuerySampleType;
-(UIColor *)calendarDaySamplePresentColor;
-(void)_moveSelectedDateInDirection:(long long)arg1 ;
-(void)_setVisibleRangeUsingDateFromDateSelector:(id)arg1 ;
-(void)setCurrentValueViewDataSource:(HKCurrentValueViewDataSource *)arg1 ;
-(BOOL)_primaryDisplayTypeHasNoData;
-(void)setStandardCurrentValueViewCallbacks:(id<HKInteractiveChartCurrentValueViewCallbacks>)arg1 ;
-(void)updateCurrentValueView:(id)arg1 graphView:(id)arg2 timeScope:(long long)arg3 ;
-(long long)sampleDateRangeUpdateCount;
-(void)setSampleDateRangeUpdateCount:(long long)arg1 ;
-(void)didTapBackButtonForMonthViewController:(id)arg1 ;
-(id)accessibilityDataForChart;
-(void)reportStartupTime:(/*^block*/id)arg1 ;
-(long long)stackOffsetCount;
-(double)_annotationViewCenterY;
-(BOOL)_inPointSelectionMode;
-(BOOL)_selectedSeriesWantsLastRecordedDate;
-(BOOL)_valueRange:(id)arg1 fitsInsideValueRange:(id)arg2 ;
-(long long)_countOfHorizontalSectionsForConfigurationManager:(id)arg1 timeScope:(long long)arg2 ;
-(void)setCurrentValueViewDataSourceDelegate:(id<HKCurrentValueViewDataSourceDelegate>)arg1 ;
-(void)_showTimeDateControls;
-(id)_configurationForDisplayType:(id)arg1 ;
-(BOOL)_shouldShowDateRangeForSelectedPointDateLabel;
-(id)_pointSelectionInfo:(id)arg1 ;
-(long long)_userInfoSelectionCount:(id)arg1 ;
-(id)_midPointDateFromVisibleRange;
-(id)_debugDateStringForPoint:(id)arg1 ;
-(id)_dateForBlockPoint:(id)arg1 ;
-(id)_chartDataForPoint:(id)arg1 ;
-(id)_formatterForSeries:(id)arg1 ;
-(void)selectTimeScope:(long long)arg1 ;
-(void)setCurrentValueViewHandler:(id<HKInteractiveChartCurrentValueViewHandler>)arg1 ;
-(void)setInitialXValue:(id)arg1 ;
-(id<HKInteractiveChartCurrentValueViewCallbacks>)standardCurrentValueViewCallbacks;
@end
