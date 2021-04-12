/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKAxisLabelDataSource.h>

@protocol HKZoomScale, HKAxisLabelDataSource;
@class HKAxisStyle, HKCoordinateTransform, HKValueRange, NSMutableArray, HKAxisLabelCache, NSString;

@interface HKAxis : NSObject <NSCopying, HKAxisLabelDataSource> {

	BOOL _requiresScaling;
	BOOL _automaticallyFitData;
	HKAxisStyle* _preferredStyle;
	HKAxisStyle* _secondaryStyle;
	long long _maxLabels;
	long long _minLabels;
	long long _axisLabelEndings;
	HKCoordinateTransform* _transform;
	id<HKZoomScale> _zoomScale;
	id<HKAxisLabelDataSource> _labelDataSource;
	HKValueRange* _chartableValueRange;
	NSMutableArray* _axisAnnotations;
	HKAxisLabelCache* _axisLabelCache;
	HKLinearTransform _pointTransform;

}

@property (nonatomic,retain) NSMutableArray * axisAnnotations;                              //@synthesize axisAnnotations=_axisAnnotations - In the implementation block
@property (nonatomic,retain) HKAxisLabelCache * axisLabelCache;                             //@synthesize axisLabelCache=_axisLabelCache - In the implementation block
@property (nonatomic,readonly) BOOL requiresScaling;                                        //@synthesize requiresScaling=_requiresScaling - In the implementation block
@property (nonatomic,retain) HKAxisStyle * preferredStyle;                                  //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,retain) HKAxisStyle * secondaryStyle;                                  //@synthesize secondaryStyle=_secondaryStyle - In the implementation block
@property (assign,nonatomic) BOOL automaticallyFitData;                                     //@synthesize automaticallyFitData=_automaticallyFitData - In the implementation block
@property (assign,nonatomic) long long maxLabels;                                           //@synthesize maxLabels=_maxLabels - In the implementation block
@property (assign,nonatomic) long long minLabels;                                           //@synthesize minLabels=_minLabels - In the implementation block
@property (assign,nonatomic) long long axisLabelEndings;                                    //@synthesize axisLabelEndings=_axisLabelEndings - In the implementation block
@property (nonatomic,readonly) HKCoordinateTransform * transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) id<HKZoomScale> zoomScale;                                   //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) HKLinearTransform pointTransform;                              //@synthesize pointTransform=_pointTransform - In the implementation block
@property (assign,nonatomic,__weak) id<HKAxisLabelDataSource> labelDataSource;              //@synthesize labelDataSource=_labelDataSource - In the implementation block
@property (nonatomic,retain) HKValueRange * chartableValueRange;                            //@synthesize chartableValueRange=_chartableValueRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(HKAxisMinMaxDefinition)expandByPointsLow:(double)arg1 high:(double)arg2 modelRange:(HKAxisMinMaxDefinition)arg3 pointRange:(HKAxisMinMaxDefinition)arg4 ;
+(HKAxisMinMaxDefinition)contractByPointsLow:(double)arg1 high:(double)arg2 modelRange:(HKAxisMinMaxDefinition)arg3 pointRange:(HKAxisMinMaxDefinition)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearCache;
-(HKCoordinateTransform *)transform;
-(void)setPreferredStyle:(HKAxisStyle *)arg1 ;
-(HKAxisStyle *)preferredStyle;
-(id<HKZoomScale>)zoomScale;
-(long long)maxLabels;
-(void)setMaxLabels:(long long)arg1 ;
-(void)clearAnnotations;
-(void)setAutomaticallyFitData:(BOOL)arg1 ;
-(BOOL)automaticallyFitData;
-(BOOL)requiresScaling;
-(HKLinearTransform)_pointTransformFromSeriesRanges:(id)arg1 linearTransform:(HKLinearTransform)arg2 chartRange:(HKRange)arg3 ;
-(HKLinearTransform)pointTransform;
-(void)setPointTransform:(HKLinearTransform)arg1 ;
-(void)setAxisLabelEndings:(long long)arg1 ;
-(id)adjustValueRangeForLabels:(id)arg1 ;
-(HKValueRange *)chartableValueRange;
-(void)setLabelDataSource:(id<HKAxisLabelDataSource>)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(CGPoint)renderPositionForLabel:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7 ;
-(CGRect)labelRectWithModelRange:(id)arg1 chartRect:(CGRect)arg2 zoomScale:(double)arg3 ;
-(void)setChartableValueRange:(HKValueRange *)arg1 ;
-(id)adjustedRangeForFittedRange:(id)arg1 chartRange:(HKRange)arg2 ;
-(BOOL)isEqualToAxis:(id)arg1 ;
-(void)drawBaselineForModelRange:(id)arg1 chartRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 renderView:(id)arg5 ;
-(void)drawGridlinesForModelRange:(id)arg1 chartRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 renderView:(id)arg5 blendMode:(int)arg6 ;
-(void)drawLabelsWithModelRange:(id)arg1 chartRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 renderView:(id)arg5 maximumLabelSize:(CGSize*)arg6 omitOffscreenLabels:(BOOL)arg7 ;
-(id)rangeForChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 ;
-(long long)dateZoomForZoomScale:(double)arg1 ;
-(void)offsetForValueRange:(id)arg1 chartRect:(CGRect)arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(CGPoint*)arg4 ;
-(id)zoomScaleEngine;
-(void)addAxisAnnotation:(id)arg1 textColor:(id)arg2 modelCoordinate:(id)arg3 ;
-(long long)axisLabelEndings;
-(void)setSecondaryStyle:(HKAxisStyle *)arg1 ;
-(void)setMinLabels:(long long)arg1 ;
-(id)initWithTransform:(id)arg1 zoomScale:(id)arg2 ;
-(HKRange)_chartRangeForChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 ;
-(void)_offsetForChartRect:(CGRect)arg1 chartRange:(HKRange)arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(CGPoint*)arg4 ;
-(id<HKAxisLabelDataSource>)labelDataSource;
-(long long)minLabels;
-(HKLinearTransform)pointTransformFittingValueRange:(id)arg1 toChartRange:(HKRange)arg2 ;
-(HKAxisLabelCache *)axisLabelCache;
-(BOOL)_styleIsHorizontal:(id)arg1 ;
-(id)_cachedAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(double)_axisOffsetWithStyle:(id)arg1 chartRect:(CGRect)arg2 horizontalAlignmentOut:(long long*)arg3 ;
-(CGRect)_labelBackgroundRectWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(CGRect)arg4 style:(id)arg5 ;
-(void)_drawTextForModelRange:(id)arg1 inRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 renderView:(id)arg5 style:(id)arg6 maximumLabelSize:(CGSize*)arg7 omitOffscreenLabels:(BOOL)arg8 ;
-(id)_baselineForModelRange:(id)arg1 axisRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 style:(id)arg5 ;
-(id)_gridLinesForModelRange:(id)arg1 axisRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 style:(id)arg5 gridLineType:(long long)arg6 ;
-(void)_drawTextBackgroundWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(CGRect)arg4 style:(id)arg5 renderView:(id)arg6 ;
-(double)_axisFillWidthForStyle:(id)arg1 labels:(id)arg2 font:(id)arg3 ;
-(double)_maxLabelWidthFromLabels:(id)arg1 font:(id)arg2 ;
-(void)enumerateTickCoordinatesInModelRange:(id)arg1 zoomScale:(double)arg2 handler:(/*^block*/id)arg3 ;
-(double)_baselineYCoordinateForModelRange:(id)arg1 axisRect:(CGRect)arg2 zoomScale:(double)arg3 ;
-(void)_addTickMarksForPosition:(unsigned long long)arg1 axisRect:(CGRect)arg2 modelRange:(id)arg3 zoomScale:(double)arg4 contentOffset:(CGPoint)arg5 toBezierPath:(id)arg6 style:(id)arg7 ;
-(void)_renderTickMarksForModelRange:(id)arg1 chartRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 style:(id)arg5 renderView:(id)arg6 ;
-(long long)axisAnnotationCount;
-(HKAxisStyle *)secondaryStyle;
-(NSMutableArray *)axisAnnotations;
-(void)setAxisAnnotations:(NSMutableArray *)arg1 ;
-(void)setAxisLabelCache:(HKAxisLabelCache *)arg1 ;
@end
