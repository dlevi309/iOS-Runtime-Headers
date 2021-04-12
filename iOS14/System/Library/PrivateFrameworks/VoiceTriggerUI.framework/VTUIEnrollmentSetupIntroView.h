/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentBaseView.h>

@class UIView, VTUIButton, NSString;

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentBaseView {

	UIView* _footerView;
	VTUIButton* _laterButton;
	VTUIButton* _continueButton;
	NSString* _languageCode;

}

@property (nonatomic,readonly) VTUIButton * laterButton;                  //@synthesize laterButton=_laterButton - In the implementation block
@property (nonatomic,readonly) VTUIButton * continueButton;               //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
-(id)footerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)languageCode;
-(VTUIButton *)laterButton;
-(VTUIButton *)continueButton;
-(void)_setupContent;
-(BOOL)showPrivacyTextView;
-(id)_createFooterWithTextFieldShowlaterButton:(BOOL)arg1 ;
@end

