/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>
#import <libobjc.A.dylib/HKAxisLabelDataSource.h>

@class UIColor, UIImage, NSString;

@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource> {

	BOOL _shouldConnectPoints;
	double _topInsetPercentage;
	UIColor* _baseColor;
	double _lineWidth;
	double _selectedLineWidth;
	double _markRadius;
	UIImage* _selectedPointMarkerImage;

}

@property (assign,nonatomic) double topInsetPercentage;                       //@synthesize topInsetPercentage=_topInsetPercentage - In the implementation block
@property (assign,nonatomic) BOOL shouldConnectPoints;                        //@synthesize shouldConnectPoints=_shouldConnectPoints - In the implementation block
@property (nonatomic,retain) UIColor * baseColor;                             //@synthesize baseColor=_baseColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double selectedLineWidth;                        //@synthesize selectedLineWidth=_selectedLineWidth - In the implementation block
@property (assign,nonatomic) double markRadius;                               //@synthesize markRadius=_markRadius - In the implementation block
@property (nonatomic,retain) UIImage * selectedPointMarkerImage;              //@synthesize selectedPointMarkerImage=_selectedPointMarkerImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(id)init;
-(void)setYAxis:(id)arg1 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK1)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(UIColor *)baseColor;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(CGPoint)renderPositionForLabelLocation:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7 ;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(void)setShouldConnectPoints:(BOOL)arg1 ;
-(void)setTopInsetPercentage:(double)arg1 ;
-(void)setSelectedLineWidth:(double)arg1 ;
-(double)selectedLineWidth;
-(void)setMarkRadius:(double)arg1 ;
-(double)yCoordinateForLevel:(long long)arg1 chartRect:(CGRect)arg2 ;
-(double)markRadius;
-(BOOL)shouldConnectPoints;
-(UIImage *)selectedPointMarkerImage;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(double)topInsetPercentage;
@end

