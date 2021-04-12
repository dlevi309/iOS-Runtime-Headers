/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentStateView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentSetupIntroViewDelegate;
@class UIView, VTUIButton, NSString;

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentStateView <UITextViewDelegate> {

	UIView* _footerView;
	id<VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
	VTUIButton* _laterButton;
	VTUIButton* _continueButton;
	NSString* _languageCode;

}

@property (assign,nonatomic,__weak) id<VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) VTUIButton * laterButton;                                                     //@synthesize laterButton=_laterButton - In the implementation block
@property (nonatomic,readonly) VTUIButton * continueButton;                                                  //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                                                 //@synthesize languageCode=_languageCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)languageCode;
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)continueButton;
-(id)footerView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(VTUIButton *)laterButton;
-(void)setStateViewDelegate:(id<VTUIEnrollmentSetupIntroViewDelegate>)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(BOOL)suppressFinishButton;
-(id<VTUIEnrollmentSetupIntroViewDelegate>)stateViewDelegate;
-(id)_createFooterTextView;
-(id)_createFooterWithTextField:(BOOL)arg1 laterButton:(BOOL)arg2 ;
@end

