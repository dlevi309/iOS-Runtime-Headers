/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CAGradientLayer, CAShapeLayer, UIColor;

@interface LinearGaugeView : UIView {

	BOOL _renderValueAsPercentage;
	NSArray* _colorIndices;
	double _value;
	CAGradientLayer* _gaugeLayer;
	double _lastLayoutSubviewsHeight;
	CAShapeLayer* _valueIndicatorLayer;
	UIColor* _indicatorFillColor;
	SCD_Struct_Li1 _layoutConstants;

}

@property (assign,nonatomic) SCD_Struct_Li1 layoutConstants;                                                 //@synthesize layoutConstants=_layoutConstants - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gaugeLayer;                                                   //@synthesize gaugeLayer=_gaugeLayer - In the implementation block
@property (assign,nonatomic) double lastLayoutSubviewsHeight;                                                //@synthesize lastLayoutSubviewsHeight=_lastLayoutSubviewsHeight - In the implementation block
@property (nonatomic,retain) CAShapeLayer * valueIndicatorLayer;                                             //@synthesize valueIndicatorLayer=_valueIndicatorLayer - In the implementation block
@property (nonatomic,copy) UIColor * indicatorFillColor;                                                     //@synthesize indicatorFillColor=_indicatorFillColor - In the implementation block
@property (nonatomic,retain) NSArray * colorIndices;                                                         //@synthesize colorIndices=_colorIndices - In the implementation block
@property (assign,nonatomic) double value;                                                                   //@synthesize value=_value - In the implementation block
@property (assign,getter=shouldRenderValueAsPercentage,nonatomic) BOOL renderValueAsPercentage;              //@synthesize renderValueAsPercentage=_renderValueAsPercentage - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)applyFilter:(id)arg1 ;
-(void)updateMonochromeColor:(id)arg1 fraction:(double)arg2 ;
-(SCD_Struct_Li1)layoutConstants;
-(double)lastLayoutSubviewsHeight;
-(void)setLastLayoutSubviewsHeight:(double)arg1 ;
-(CAGradientLayer *)gaugeLayer;
-(NSArray *)colorIndices;
-(BOOL)shouldRenderValueAsPercentage;
-(CAShapeLayer *)valueIndicatorLayer;
-(void)_setNeedsUpdateGauge;
-(void)setIndicatorFillColor:(UIColor *)arg1 ;
-(UIColor *)indicatorFillColor;
-(void)setGaugeLayer:(CAGradientLayer *)arg1 ;
-(void)applyCGColorsToGradientLayer:(id)arg1 ;
-(id)initWithLayouConstants:(SCD_Struct_Li1)arg1 ;
-(void)applyIndicatorFillColor:(id)arg1 ;
-(void)setColorIndices:(NSArray *)arg1 ;
-(void)setRenderValueAsPercentage:(BOOL)arg1 ;
-(void)setLayoutConstants:(SCD_Struct_Li1)arg1 ;
-(void)setValueIndicatorLayer:(CAShapeLayer *)arg1 ;
@end

