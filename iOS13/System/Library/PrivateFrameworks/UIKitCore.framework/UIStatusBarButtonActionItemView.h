/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(long long)buttonType;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)allowsUserInteraction;
-(double)updateContentsAndWidth;
-(id)highlightImage;
-(BOOL)usesAdvancedActions;
-(void)_pressButton:(id)arg1 ;
-(BOOL)extendsHitTestingFrame;
-(void)_doubleTapButton:(id)arg1 ;
-(void)_pressAndHoldButton:(id)arg1 ;
-(id)_createButton;
-(void)setLayerHighlightImage:(id)arg1 ;
-(CALayer *)ringLayer;
-(void)setRingLayer:(CALayer *)arg1 ;
-(void)_triggerButtonWithAction:(long long)arg1 ;
-(CGRect)_contentsImageFrame;
@end

