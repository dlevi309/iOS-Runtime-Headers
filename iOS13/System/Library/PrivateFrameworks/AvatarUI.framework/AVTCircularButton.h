/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(UIColor *)dynamicBackgroundColor;
-(void)setupView;
-(void)setSymbolImageWithName:(id)arg1 configuration:(id)arg2 ;
-(void)setSymbolTintColor:(UIColor *)arg1 ;
-(void)setSymbolImageWithName:(id)arg1 ;
-(void)updateDynamicBackgroundColor;
-(BOOL)isUsingDynamicBackground;
-(void)setIsUsingDynamicBackground:(BOOL)arg1 ;
-(void)setDynamicBackgroundColor:(UIColor *)arg1 ;
-(void)updateBackgroundColorIfNeeded;
-(double)circleLayerAlpha;
-(UIImage *)symbolImage;
-(void)setSymbolImage:(UIImage *)arg1 ;
-(UIColor *)symbolTintColor;
@end

