/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIButton, CALayer;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {

	UIButton* _button;
	UIButton* _externalButton;
	BOOL _selected;
	CALayer* _ringLayer;

}

@property (assign,nonatomic) BOOL selected;                              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) CALayer * ringLayer;                        //@synthesize ringLayer=_ringLayer - In the implementation block
@property (nonatomic,readonly) BOOL extendsHitTestingFrame; 
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CALayer *)ringLayer;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)allowsUserInteraction;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)updateContentsAndWidth;
-(id)highlightImage;
-(long long)buttonType;
-(BOOL)usesAdvancedActions;
-(void)_pressButton:(id)arg1 ;
-(BOOL)extendsHitTestingFrame;
-(void)_doubleTapButton:(id)arg1 ;
-(void)_pressAndHoldButton:(id)arg1 ;
-(id)_createButton;
-(void)setLayerHighlightImage:(id)arg1 ;
-(void)setRingLayer:(CALayer *)arg1 ;
-(void)_triggerButtonWithAction:(long long)arg1 ;
-(CGRect)_contentsImageFrame;
-(BOOL)showsTouchWhenHighlighted;
@end

