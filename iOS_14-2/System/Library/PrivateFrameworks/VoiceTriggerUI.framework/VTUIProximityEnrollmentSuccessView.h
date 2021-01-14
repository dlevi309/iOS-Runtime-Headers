/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSString, SUICOrbView, UILabel, VTUIProximityContainerView, VTUIStyle, VTUIButton, UIButton;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {

	NSString* _languageCode;
	SUICOrbView* _orbView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	VTUIProximityContainerView* _containerView;
	VTUIStyle* _vtStyle;
	VTUIButton* _continueButton;
	UIButton* _dismissButton;

}

@property (nonatomic,readonly) VTUIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                   //@synthesize dismissButton=_dismissButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(VTUIButton *)continueButton;
-(UIButton *)dismissButton;
-(void)dealloc;
-(void)_setupContent;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
@end

