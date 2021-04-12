/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentBaseView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUITurnOnSiriViewDelegate;
@class NSArray, UIView, UIButton, NSString;

@interface VTUITurnOnSiriView : VTUIEnrollmentBaseView <UITextViewDelegate> {

	NSArray* _siriLanguages;
	UIView* _footerView;
	id<VTUITurnOnSiriViewDelegate> _stateViewDelegate;
	UIButton* _laterButton;
	UIButton* _continueButton;
	NSArray* _continueButtons;

}

@property (assign,nonatomic,__weak) id<VTUITurnOnSiriViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) UIButton * laterButton;                                             //@synthesize laterButton=_laterButton - In the implementation block
@property (nonatomic,readonly) UIButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,readonly) NSArray * continueButtons;                                          //@synthesize continueButtons=_continueButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)footerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)laterButton;
-(UIButton *)continueButton;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setStateViewDelegate:(id<VTUITurnOnSiriViewDelegate>)arg1 ;
-(NSArray *)continueButtons;
-(void)prepareForLastTimeShown;
-(id)languageSelectionOfContinueButton:(id)arg1 ;
-(void)_setupContent;
-(BOOL)showPrivacyTextView;
-(void)_setupTurnOnSiriUI;
-(id<VTUITurnOnSiriViewDelegate>)stateViewDelegate;
@end

