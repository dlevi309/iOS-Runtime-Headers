/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class CAShapeLayer, UIColor, UIImage;

@interface AVTCircularButton : UIButton {

	BOOL _isUsingDynamicBackground;
	CAShapeLayer* _clippingLayer;
	UIColor* _dynamicBackgroundColor;
	UIImage* _symbolImage;
	UIColor* _symbolTintColor;

}

@property (nonatomic,retain) CAShapeLayer * clippingLayer;                  //@synthesize clippingLayer=_clippingLayer - In the implementation block
@property (nonatomic,retain) UIColor * dynamicBackgroundColor;              //@synthesize dynamicBackgroundColor=_dynamicBackgroundColor - In the implementation block
@property (nonatomic,retain) UIImage * symbolImage;                         //@synthesize symbolImage=_symbolImage - In the implementation block
@property (nonatomic,retain) UIColor * symbolTintColor;                     //@synthesize symbolTintColor=_symbolTintColor - In the implementation block
@property (assign,nonatomic) BOOL isUsingDynamicBackground;                 //@synthesize isUsingDynamicBackground=_isUsingDynamicBackground - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateDynamicBackgroundColor;
-(UIColor *)dynamicBackgroundColor;
-(BOOL)isUsingDynamicBackground;
-(void)setIsUsingDynamicBackground:(BOOL)arg1 ;
-(void)setDynamicBackgroundColor:(UIColor *)arg1 ;
-(double)circleLayerAlpha;
-(void)updateBackgroundColorIfNeeded;
-(UIColor *)symbolTintColor;
-(void)setSymbolImage:(UIImage *)arg1 ;
-(UIImage *)symbolImage;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setupView;
-(void)layoutSubviews;
-(void)setSymbolTintColor:(UIColor *)arg1 ;
-(void)setSymbolImageWithName:(id)arg1 configuration:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(void)setSymbolImageWithName:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

