/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesDataSourceDelegate.h>

@protocol HKSeriesDelegate, HKGraphSeriesAxisAnnotation, HKAxisAccessoryViewDelegate, HKGraphSeriesAxisScalingRule;
@class NSMutableDictionary, HKValueRange, HKPropertyAnimationApplier, HKGraphSeriesDataSource, NSArray, NSUUID, HKAxis, UIView, UIColor, NSString;

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate> {

	BOOL _dirty;
	SCD_Struct_HK11 _selectedPathRange;
	NSMutableDictionary* _cachedCoordinateListsByBlockPath;
	NSMutableDictionary* _cachedDataBlocksByBlockPath;
	HKValueRange* _closestXCoordinateRange;
	HKPropertyAnimationApplier* _animationApplier;
	HKValueRange* _visibleValueRange;
	BOOL _allowsSelection;
	BOOL _adjustYAxisForLabels;
	BOOL _animatingDuringAutoscale;
	BOOL _primarySeriesForAutoscale;
	BOOL _wantsRoundingDuringYRangeExpansion;
	HKGraphSeriesDataSource* _dataSource;
	NSArray* _titleLegendEntries;
	NSArray* _detailLegendEntries;
	id<HKSeriesDelegate> _delegate;
	id<HKGraphSeriesAxisAnnotation> _axisAnnotationDelegate;
	id<HKAxisAccessoryViewDelegate> _yAxisAccessoryViewDelegate;
	double _alpha;
	double _offscreenIndicatorAlpha;
	NSUUID* _UUID;
	id _context;
	HKAxis* _yAxis;
	id<HKGraphSeriesAxisScalingRule> _axisScalingRule;
	UIView* _cachedYAxisAccessoryView;
	UIColor* _offScreenIndicatorColor;

}

@property (nonatomic,retain) UIView * cachedYAxisAccessoryView;                                              //@synthesize cachedYAxisAccessoryView=_cachedYAxisAccessoryView - In the implementation block
@property (nonatomic,retain) HKGraphSeriesDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * titleLegendEntries;                                                   //@synthesize titleLegendEntries=_titleLegendEntries - In the implementation block
@property (nonatomic,retain) NSArray * detailLegendEntries;                                                  //@synthesize detailLegendEntries=_detailLegendEntries - In the implementation block
@property (assign,nonatomic,__weak) id<HKSeriesDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HKGraphSeriesAxisAnnotation> axisAnnotationDelegate;                  //@synthesize axisAnnotationDelegate=_axisAnnotationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HKAxisAccessoryViewDelegate> yAxisAccessoryViewDelegate;              //@synthesize yAxisAccessoryViewDelegate=_yAxisAccessoryViewDelegate - In the implementation block
@property (assign,nonatomic) double alpha;                                                                   //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double offscreenIndicatorAlpha;                                                 //@synthesize offscreenIndicatorAlpha=_offscreenIndicatorAlpha - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                                                //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL allowsSelection;                                                           //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (assign,nonatomic) BOOL adjustYAxisForLabels;                                                      //@synthesize adjustYAxisForLabels=_adjustYAxisForLabels - In the implementation block
@property (nonatomic,retain) id context;                                                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL animatingDuringAutoscale;                                                //@synthesize animatingDuringAutoscale=_animatingDuringAutoscale - In the implementation block
@property (assign,nonatomic) BOOL primarySeriesForAutoscale;                                                 //@synthesize primarySeriesForAutoscale=_primarySeriesForAutoscale - In the implementation block
@property (assign,nonatomic) BOOL wantsRoundingDuringYRangeExpansion;                                        //@synthesize wantsRoundingDuringYRangeExpansion=_wantsRoundingDuringYRangeExpansion - In the implementation block
@property (nonatomic,copy) HKAxis * yAxis;                                                                   //@synthesize yAxis=_yAxis - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesAxisScalingRule> axisScalingRule;                               //@synthesize axisScalingRule=_axisScalingRule - In the implementation block
@property (nonatomic,retain) UIColor * offScreenIndicatorColor;                                              //@synthesize offScreenIndicatorColor=_offScreenIndicatorColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)drawFilledMarkerInContext:(CGContextRef)arg1 color:(CGColorRef)arg2 x:(double)arg3 y:(double)arg4 radius:(double)arg5 ;
+(void)drawInnerDotMarkerInContext:(CGContextRef)arg1 outColor:(CGColorRef)arg2 inColor:(CGColorRef)arg3 x:(double)arg4 y:(double)arg5 radius:(double)arg6 ;
-(id)init;
-(void)dealloc;
-(id<HKSeriesDelegate>)delegate;
-(void)setDelegate:(id<HKSeriesDelegate>)arg1 ;
-(NSUUID *)UUID;
-(id)context;
-(void)clearCaches;
-(void)setContext:(id)arg1 ;
-(double)alpha;
-(HKGraphSeriesDataSource *)dataSource;
-(void)setDataSource:(HKGraphSeriesDataSource *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)isHighlighted;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(BOOL)allowsSelection;
-(HKAxis *)yAxis;
-(long long)overlayType;
-(void)setYAxis:(HKAxis *)arg1 ;
-(void)setWantsRoundingDuringYRangeExpansion:(BOOL)arg1 ;
-(void)setAxisScalingRule:(id<HKGraphSeriesAxisScalingRule>)arg1 ;
-(SCD_Struct_HK11)selectedPathRange;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)setTitleLegendEntries:(NSArray *)arg1 ;
-(void)dataSourceDidUpdateCache:(id)arg1 ;
-(BOOL)shouldInvertAxis;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(id<HKGraphSeriesAxisAnnotation>)axisAnnotationDelegate;
-(void)_setDirtyWithNewData:(BOOL)arg1 ;
-(void)autoscaleYAxisWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(CGRect)arg5 animated:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(id)valueRangeForYAxisWithXAxisRange:(id)arg1 dateZoom:(long long)arg2 chartRect:(CGRect)arg3 ;
-(void)autoscaleYAxisWithYAxisRange:(id)arg1 chartRect:(CGRect)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)adjustYAxisForLabels;
-(id)_dataBlockForBlockPath:(SCD_Struct_HK9)arg1 ;
-(void)_enumeratePathIndexesInValueRange:(id)arg1 zoomLevel:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)_expandYRange:(id)arg1 withXRange:(id)arg2 dateZoom:(long long)arg3 chartRect:(CGRect)arg4 ;
-(id)marginsForYAxis:(id)arg1 chartRect:(CGRect)arg2 ;
-(UIEdgeInsets)virtualMarginInsets;
-(id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(CGRect)arg3 contentOffset:(CGPoint)arg4 ;
-(CGAffineTransform)coordinateTransformForChartRect:(CGRect)arg1 xAxisTransform:(CGAffineTransform)arg2 ;
-(void)enumerateCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 roundToViewScale:(BOOL)arg6 exclusionOptions:(long long)arg7 block:(/*^block*/id)arg8 ;
-(id<HKAxisAccessoryViewDelegate>)yAxisAccessoryViewDelegate;
-(void)setCachedYAxisAccessoryView:(UIView *)arg1 ;
-(UIView *)cachedYAxisAccessoryView;
-(id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(CGRect)arg2 contentOffset:(CGPoint)arg3 zoomScale:(double)arg4 ;
-(id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3 ;
-(id)_cachedCoordinatesForBlockPath:(SCD_Struct_HK9)arg1 ;
-(id)_coordinatesForBlockPath:(SCD_Struct_HK9)arg1 xAxis:(id)arg2 ;
-(void)_cacheCoordinates:(id)arg1 forBlockPath:(SCD_Struct_HK9)arg2 ;
-(void)selectPathsinPathRange:(SCD_Struct_HK11)arg1 coordinateRange:(id)arg2 ;
-(UIColor *)offScreenIndicatorColor;
-(id)visibleValueRange;
-(void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(CGRect)arg5 ;
-(void)cancelInFlightAutoscale;
-(double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(id)seriesCoordinatesWithXAxis:(id)arg1 chartRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 ;
-(CGAffineTransform)coordinateTransformFromXAxisTransform:(CGAffineTransform)arg1 chartRect:(CGRect)arg2 ;
-(void)drawWithChartRect:(CGRect)arg1 seriesCoordinates:(id)arg2 zoomLevelConfiguration:(id)arg3 coordinateTransform:(CGAffineTransform)arg4 inContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)containsCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 ;
-(CGSize)yAxisAccessoryViewSize;
-(UIEdgeInsets)yAxisAccessoryViewEdgeInsets;
-(BOOL)configureYAxisAccessoryViewForDateRange:(id)arg1 timeScope:(long long)arg2 ;
-(void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2 ;
-(id)overlayIdentifier;
-(void)drawOverlayInContext:(CGContextRef)arg1 seriesOverlayData:(id)arg2 ;
-(id)overlayInteractiveViewsWithDelegate:(id)arg1 ;
-(void)layoutOverlayInteractiveViews:(id)arg1 seriesOverlayData:(id)arg2 overlayRect:(CGRect)arg3 ;
-(id)closestXCoordinateRange;
-(void)deselectPath;
-(double)distanceFromTouchPoint:(CGPoint)arg1 inChartRect:(CGRect)arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(CGPoint)arg5 xAxisTransform:(CGAffineTransform)arg6 ;
-(id)findVisibleBlockCoordinatesForChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 ;
-(BOOL)untransformedChartPointsForTimeScope:(long long)arg1 range:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)adjustRect:(CGRect)arg1 forFont:(id)arg2 ;
-(void)drawRoundedRect:(CGRect)arg1 color:(id)arg2 context:(CGContextRef)arg3 ;
-(CGRect)backgroundRectFromStringRect:(CGRect)arg1 forFont:(id)arg2 ;
-(NSArray *)titleLegendEntries;
-(NSArray *)detailLegendEntries;
-(void)setDetailLegendEntries:(NSArray *)arg1 ;
-(void)setAxisAnnotationDelegate:(id<HKGraphSeriesAxisAnnotation>)arg1 ;
-(void)setYAxisAccessoryViewDelegate:(id<HKAxisAccessoryViewDelegate>)arg1 ;
-(double)offscreenIndicatorAlpha;
-(void)setOffscreenIndicatorAlpha:(double)arg1 ;
-(void)setAdjustYAxisForLabels:(BOOL)arg1 ;
-(BOOL)animatingDuringAutoscale;
-(BOOL)primarySeriesForAutoscale;
-(void)setPrimarySeriesForAutoscale:(BOOL)arg1 ;
-(BOOL)wantsRoundingDuringYRangeExpansion;
-(id<HKGraphSeriesAxisScalingRule>)axisScalingRule;
-(void)setOffScreenIndicatorColor:(UIColor *)arg1 ;
@end

