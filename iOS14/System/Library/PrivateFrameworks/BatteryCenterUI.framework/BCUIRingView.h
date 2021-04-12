/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
*/

#import <BatteryCenterUI/BatteryCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface BCUIRingView : UIView {

	double _ringStart;
	double _ringEnd;
	double _lineWidth;
	UIColor* _strokeColor;
	UIColor* _fillColor;

}

@property (assign,nonatomic) double ringStart;                 //@synthesize ringStart=_ringStart - In the implementation block
@property (assign,nonatomic) double ringEnd;                   //@synthesize ringEnd=_ringEnd - In the implementation block
@property (assign,nonatomic) double lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,copy) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
+(Class)layerClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(double)lineWidth;
-(void)setFractionComplete:(double)arg1 ;
-(void)mt_applyVisualStyling:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIColor *)fillColor;
-(id)_shapeLayer;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)ringEnd;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setRingStart:(double)arg1 ;
-(void)setRingEnd:(double)arg1 ;
-(void)_invalidatePath;
-(double)ringStart;
@end

