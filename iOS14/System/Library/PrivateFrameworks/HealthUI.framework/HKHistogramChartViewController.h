/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKGraphViewDelegate.h>
#import <libobjc.A.dylib/HKLollipopDelegate.h>
#import <libobjc.A.dylib/HKHistogramChartDataSourceDataFetchObserver.h>

@class HKHealthStore, UILabel, HKScalarGraphViewController, HKHistogramBarSeries, HKHistogramChartDataSource, HKHistogramChartDataFormatter, HKDisplayType, HKHistogramAnnotationViewDataSource, HKLollipopController, NSString;

@interface HKHistogramChartViewController : HKViewController <HKGraphViewDelegate, HKLollipopDelegate, HKHistogramChartDataSourceDataFetchObserver> {

	HKHealthStore* _healthStore;
	double _minimumGraphViewHeight;
	UILabel* _headerLabel;
	HKScalarGraphViewController* _graphViewController;
	HKHistogramBarSeries* _histogramSeries;
	HKHistogramChartDataSource* _dataSource;
	HKHistogramChartDataFormatter* _dataFormatter;
	HKDisplayType* _displayType;
	HKHistogramAnnotationViewDataSource* _annotationViewDataSource;
	HKLollipopController* _lollipopController;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                 //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic) double minimumGraphViewHeight;                                               //@synthesize minimumGraphViewHeight=_minimumGraphViewHeight - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                                       //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) HKScalarGraphViewController * graphViewController;                           //@synthesize graphViewController=_graphViewController - In the implementation block
@property (nonatomic,retain) HKHistogramBarSeries * histogramSeries;                                      //@synthesize histogramSeries=_histogramSeries - In the implementation block
@property (nonatomic,retain) HKHistogramChartDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) HKHistogramChartDataFormatter * dataFormatter;                               //@synthesize dataFormatter=_dataFormatter - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                                 //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) HKHistogramAnnotationViewDataSource * annotationViewDataSource;              //@synthesize annotationViewDataSource=_annotationViewDataSource - In the implementation block
@property (nonatomic,retain) HKLollipopController * lollipopController;                                   //@synthesize lollipopController=_lollipopController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultVerticalAxis;
-(HKHealthStore *)healthStore;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKHistogramChartDataSource *)dataSource;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setDataSource:(HKHistogramChartDataSource *)arg1 ;
-(void)viewDidLoad;
-(HKHistogramAnnotationViewDataSource *)annotationViewDataSource;
-(void)setAnnotationViewDataSource:(HKHistogramAnnotationViewDataSource *)arg1 ;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(long long)stackCountForGraphView:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(void)didCompleteFetchForDataSource:(id)arg1 ;
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
-(void)_pinView:(id)arg1 toParentView:(id)arg2 ;
-(void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2 ;
-(HKScalarGraphViewController *)graphViewController;
-(void)setGraphViewController:(HKScalarGraphViewController *)arg1 ;
-(void)setLollipopController:(HKLollipopController *)arg1 ;
-(HKLollipopController *)lollipopController;
-(HKHistogramChartDataFormatter *)dataFormatter;
-(double)minimumGraphViewHeight;
-(id)_descriptionDateFormatter;
-(id)_displayDescriptionForDataSource:(id)arg1 ;
-(HKHistogramBarSeries *)histogramSeries;
-(id)initWithHealthStore:(id)arg1 dataSource:(id)arg2 dataFormatter:(id)arg3 minimumGraphViewHeight:(double)arg4 ;
-(void)setMinimumGraphViewHeight:(double)arg1 ;
-(void)setHistogramSeries:(HKHistogramBarSeries *)arg1 ;
-(void)setDataFormatter:(HKHistogramChartDataFormatter *)arg1 ;
@end

