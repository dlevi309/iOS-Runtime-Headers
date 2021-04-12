/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIVisualEffectView, UILabel, UIImageView, NAUILayoutConstraintSet;

@interface HUCameraFloatingMicrophoneButton : UIButton {

	UIVisualEffectView* _backgroundView;
	UILabel* _microphoneLabel;
	UIImageView* _microphoneImageView;
	NAUILayoutConstraintSet* _constraintSet;

}

@property (nonatomic,readonly) UIVisualEffectView * backgroundView;                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * microphoneLabel;                            //@synthesize microphoneLabel=_microphoneLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * microphoneImageView;                    //@synthesize microphoneImageView=_microphoneImageView - In the implementation block
@property (nonatomic,readonly) NAUILayoutConstraintSet * constraintSet;              //@synthesize constraintSet=_constraintSet - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)_createBackgroundEffect;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateAlpha;
-(void)_setupConstraintSet;
-(void)_updateSelectionState;
-(UILabel *)microphoneLabel;
-(UIImageView *)microphoneImageView;
-(NAUILayoutConstraintSet *)constraintSet;
@end

