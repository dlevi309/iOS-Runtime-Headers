/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface SiriUIContentButton : UIButton {

	BOOL _isRenderingImageTemplate;
	UIColor* _defaultColorForTemplate;
	UIColor* _highlightColorForTemplate;
	UIColor* _overrideTextColor;
	BOOL _usePlatterStyle;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic) BOOL usePlatterStyle;                        //@synthesize usePlatterStyle=_usePlatterStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;              //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
+(id)button;
+(id)buttonWithLightWeightFont;
+(id)buttonWithMediumWeightFont;
+(id)buttonWithImageMask:(id)arg1 style:(long long)arg2 ;
+(id)buttonWithImageTemplate:(id)arg1 style:(long long)arg2 ;
+(id)buttonWithImageMask:(id)arg1 ;
+(id)buttonWithImageTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateTintColor;
-(void)_updateStyling;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)usePlatterStyle;
-(void)setUsePlatterStyle:(BOOL)arg1 ;
-(void)_setIsRenderingImageTemplate:(BOOL)arg1 ;
-(void)setDefaultColorForTemplate:(id)arg1 ;
-(void)setHighlightColorForTemplate:(id)arg1 ;
-(void)setOverrideTextColor:(id)arg1 ;
@end

