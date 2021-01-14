/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class CALayer, NSUUID;

@interface CPUIMediaButton : UIButton {

	CALayer* _focusColorLayer;
	BOOL _showBezelInTouch;
	BOOL _showHighlight;
	NSUUID* _identifier;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showBezelInTouch;                        //@synthesize showBezelInTouch=_showBezelInTouch - In the implementation block
@property (assign,nonatomic) BOOL showHighlight;                           //@synthesize showHighlight=_showHighlight - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)setShowHighlight:(BOOL)arg1 ;
-(BOOL)showHighlight;
-(void)_updateButtonStyle;
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

