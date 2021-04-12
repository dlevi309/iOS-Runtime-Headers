/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateAlpha;
-(void)updateConstraints;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setupConstraintSet;
-(void)_updateSelectionState;
-(UILabel *)microphoneLabel;
-(UIImageView *)microphoneImageView;
-(NAUILayoutConstraintSet *)constraintSet;
@end

