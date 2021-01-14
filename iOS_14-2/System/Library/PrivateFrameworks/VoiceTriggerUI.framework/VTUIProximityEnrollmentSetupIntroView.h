/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentDelegate;
@class SUICOrbView, VTUIProximityContainerView, UILabel, UITextView, VTUIStyle, SSRVoiceProfileManager, NSString, VTUIButton, UIButton, NSArray;

@interface VTUIProximityEnrollmentSetupIntroView : VTUIProximityView <UITextViewDelegate> {

	SUICOrbView* _orbView;
	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UITextView* _termsAndConds;
	VTUIStyle* _vtStyle;
	SSRVoiceProfileManager* _voiceProfileMgr;
	NSString* _languageCode;
	id<VTUIEnrollmentDelegate> _enrollmentDelegate;
	VTUIButton* _setupButton;
	VTUIButton* _notNowButton;
	UIButton* _dismissButton;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                                         //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<VTUIEnrollmentDelegate> enrollmentDelegate;              //@synthesize enrollmentDelegate=_enrollmentDelegate - In the implementation block
@property (nonatomic,readonly) VTUIButton * setupButton;                                        //@synthesize setupButton=_setupButton - In the implementation block
@property (nonatomic,readonly) VTUIButton * notNowButton;                                       //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)notNowButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(VTUIButton *)setupButton;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)dealloc;
-(void)_setupContent;
-(void)setEnrollmentDelegate:(id<VTUIEnrollmentDelegate>)arg1 ;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)_setupTermsAndConditions;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
-(id<VTUIEnrollmentDelegate>)enrollmentDelegate;
@end

