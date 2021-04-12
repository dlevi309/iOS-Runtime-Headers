/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKHorizontalTimePeriodSeries.h>

@class UIColor, UIFont, NSString;

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries {

	BOOL _drawSampleSpans;
	double _markerRadius;
	UIColor* _innerMarkColor;
	UIFont* _categoryLevelFont;
	UIColor* _categoryLevelColor;
	UIColor* _specialMarkColor;
	NSString* _specialMarkLegendLabel;

}

@property (assign,nonatomic) double markerRadius;                            //@synthesize markerRadius=_markerRadius - In the implementation block
@property (nonatomic,retain) UIColor * innerMarkColor;                       //@synthesize innerMarkColor=_innerMarkColor - In the implementation block
@property (nonatomic,retain) UIFont * categoryLevelFont;                     //@synthesize categoryLevelFont=_categoryLevelFont - In the implementation block
@property (nonatomic,retain) UIColor * categoryLevelColor;                   //@synthesize categoryLevelColor=_categoryLevelColor - In the implementation block
@property (nonatomic,retain) UIColor * specialMarkColor;                     //@synthesize specialMarkColor=_specialMarkColor - In the implementation block
@property (nonatomic,retain) NSString * specialMarkLegendLabel;              //@synthesize specialMarkLegendLabel=_specialMarkLegendLabel - In the implementation block
@property (assign,nonatomic) BOOL drawSampleSpans;                           //@synthesize drawSampleSpans=_drawSampleSpans - In the implementation block
-(id)init;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK1)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(void)setCategoryLevelFont:(UIFont *)arg1 ;
-(void)setCategoryLevelColor:(UIColor *)arg1 ;
-(void)setMarkerRadius:(double)arg1 ;
-(void)setDrawSampleSpans:(BOOL)arg1 ;
-(UIFont *)categoryLevelFont;
-(UIColor *)categoryLevelColor;
-(BOOL)_interiorCategoryLabels;
-(void)_drawCategoryLabels:(CGContextRef)arg1 axisRect:(CGRect)arg2 ;
-(UIColor *)innerMarkColor;
-(double)markerRadius;
-(UIColor *)specialMarkColor;
-(BOOL)drawSampleSpans;
-(void)_drawMarkerWithContext:(CGContextRef)arg1 style:(long long)arg2 color:(CGColorRef)arg3 innerColor:(CGColorRef)arg4 specialColor:(CGColorRef)arg5 location:(CGPoint)arg6 radius:(double)arg7 ;
-(double)offsetForEnumerationRect:(CGRect)arg1 ;
-(id)marginsForYAxis:(id)arg1 chartRect:(CGRect)arg2 ;
-(void)setInnerMarkColor:(UIColor *)arg1 ;
-(void)setSpecialMarkColor:(UIColor *)arg1 ;
-(NSString *)specialMarkLegendLabel;
-(void)setSpecialMarkLegendLabel:(NSString *)arg1 ;
@end

