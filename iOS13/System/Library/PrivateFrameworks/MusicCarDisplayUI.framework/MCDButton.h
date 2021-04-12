/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class CALayer;

@interface MCDButton : UIButton {

	CALayer* _focusColorLayer;
	BOOL _showBezelInTouch;
	BOOL _showHighlight;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showBezelInTouch;                        //@synthesize showBezelInTouch=_showBezelInTouch - In the implementation block
@property (assign,nonatomic) BOOL showHighlight;                           //@synthesize showHighlight=_showHighlight - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateButtonStyle;
-(void)setShowHighlight:(BOOL)arg1 ;
-(BOOL)showHighlight;
-(BOOL)canShowHighlight;
-(id)tintColorForUnhighlightedTextLabel;
-(BOOL)showBezelInTouch;
-(double)focusLayerCornerRadius;
-(id)colorForKnobFocusLayer;
-(id)colorForKnobFocusLayerSelected;
-(BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
-(void)updateButtonOpacityForKnobUnfocused;
-(id)colorForKnobContentSelected;
-(id)colorForKnobFocused;
-(id)colorForTouchContentSelected;
-(id)colorForTouchFocusLayerSelected;
-(id)colorForTouchFocusLayer;
-(void)setShowBezelInTouch:(BOOL)arg1 ;
-(id)_buttonBackGroundColorTouch;
@end

