/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>
#import <libobjc.A.dylib/HKAxisLabelDataSource.h>

@class NSArray, UIImage, UIColor, NSDictionary, NSString;

@interface HKHorizontalTimePeriodSeries : HKGraphSeries <HKAxisLabelDataSource> {

	NSArray* _cachedAxisLabels;
	UIImage* _selectedPointMarkerImage;
	UIColor* _fillColor;
	double _lineWidth;
	NSArray* _enumerationValueOrdering;
	NSDictionary* _valueLabels;

}

@property (nonatomic,retain) UIImage * selectedPointMarkerImage;              //@synthesize selectedPointMarkerImage=_selectedPointMarkerImage - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                             //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) NSArray * enumerationValueOrdering;              //@synthesize enumerationValueOrdering=_enumerationValueOrdering - In the implementation block
@property (nonatomic,retain) NSDictionary * valueLabels;                      //@synthesize valueLabels=_valueLabels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)lineWidth;
-(void)setYAxis:(id)arg1 ;
-(UIColor *)fillColor;
-(NSDictionary *)valueLabels;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)setValueLabels:(NSDictionary *)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(CGPoint)renderPositionForLabelLocation:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7 ;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(void)setEnumerationValueOrdering:(NSArray *)arg1 ;
-(double)offsetForCoordinate:(id)arg1 axisRect:(CGRect)arg2 ;
-(NSArray *)enumerationValueOrdering;
-(CGRect)enumerationRectForLevel:(long long)arg1 axisRect:(CGRect)arg2 ;
-(double)offsetForEnumerationRect:(CGRect)arg1 ;
-(double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(UIImage *)selectedPointMarkerImage;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(long long)_enumeratedLevelForCoordinate:(id)arg1 ;
-(id)_generateAxisLabels;
@end

