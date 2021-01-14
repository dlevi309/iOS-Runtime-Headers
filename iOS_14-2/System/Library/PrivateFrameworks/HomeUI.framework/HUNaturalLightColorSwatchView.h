/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer, CAGradientLayer, UIImage;

@interface HUNaturalLightColorSwatchView : UIView {

	unsigned long long _selectionState;
	CAShapeLayer* _circleMaskLayer;
	CAGradientLayer* _circleGradientLayer;
	CAShapeLayer* _selectedCircleMaskLayer;
	CAGradientLayer* _selectedCircleGradientLayer;
	CAShapeLayer* _selectedCircleInnerLayer;
	CAShapeLayer* _circleOuterLayer;
	UIImage* _truetoneIcon;

}

@property (nonatomic,retain) CAShapeLayer * circleMaskLayer;                             //@synthesize circleMaskLayer=_circleMaskLayer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * circleGradientLayer;                      //@synthesize circleGradientLayer=_circleGradientLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleMaskLayer;                     //@synthesize selectedCircleMaskLayer=_selectedCircleMaskLayer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * selectedCircleGradientLayer;              //@synthesize selectedCircleGradientLayer=_selectedCircleGradientLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleInnerLayer;                    //@synthesize selectedCircleInnerLayer=_selectedCircleInnerLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * circleOuterLayer;                            //@synthesize circleOuterLayer=_circleOuterLayer - In the implementation block
@property (nonatomic,retain) UIImage * truetoneIcon;                                     //@synthesize truetoneIcon=_truetoneIcon - In the implementation block
@property (assign,nonatomic) unsigned long long selectionState;                          //@synthesize selectionState=_selectionState - In the implementation block
+(id)_createGradientLayer;
-(void)_updateLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(unsigned long long)selectionState;
-(UIImage *)truetoneIcon;
-(id)_buildMaskFromImage:(id)arg1 ;
-(CAGradientLayer *)circleGradientLayer;
-(CAGradientLayer *)selectedCircleGradientLayer;
-(CAShapeLayer *)selectedCircleInnerLayer;
-(CAShapeLayer *)circleMaskLayer;
-(CAShapeLayer *)selectedCircleMaskLayer;
-(CAShapeLayer *)circleOuterLayer;
-(void)setCircleMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setCircleGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setSelectedCircleMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setSelectedCircleGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setSelectedCircleInnerLayer:(CAShapeLayer *)arg1 ;
-(void)setCircleOuterLayer:(CAShapeLayer *)arg1 ;
-(void)setTruetoneIcon:(UIImage *)arg1 ;
@end

