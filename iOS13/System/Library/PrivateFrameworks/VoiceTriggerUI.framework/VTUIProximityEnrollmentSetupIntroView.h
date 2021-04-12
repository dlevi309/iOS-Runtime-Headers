/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentSetupIntroViewDelegate;
@class VTUIProximityContainerView, UILabel, UIImageView, UIView, UITextView, VTUIStyle, CSVoiceProfileManager, NSString, VTUIButton, UIButton, NSArray;

@interface VTUIProximityEnrollmentSetupIntroView : VTUIProximityView <UITextViewDelegate> {

	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	UIView* _imageViewContainer;
	UILabel* _subtitleLabel;
	UITextView* _termsAndConds;
	VTUIStyle* _vtStyle;
	CSVoiceProfileManager* _voiceProfileMgr;
	NSString* _languageCode;
	id<VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
	VTUIButton* _setupButton;
	VTUIButton* _notNowButton;
	UIButton* _dismissButton;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                                                      //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) VTUIButton * setupButton;                                                     //@synthesize setupButton=_setupButton - In the implementation block
@property (nonatomic,readonly) VTUIButton * notNowButton;                                                    //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                       //@synthesize dismissButton=_dismissButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(void)_setImage:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(VTUIButton *)setupButton;
-(VTUIButton *)notNowButton;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)setStateViewDelegate:(id<VTUIEnrollmentSetupIntroViewDelegate>)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)_setupTermsAndConditions;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
-(id<VTUIEnrollmentSetupIntroViewDelegate>)stateViewDelegate;
@end

