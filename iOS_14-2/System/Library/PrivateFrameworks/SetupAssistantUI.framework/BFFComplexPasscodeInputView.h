/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPasscodeInputView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView <UITextFieldDelegate> {

	UITextField* _passcodeField;

}

@property (nonatomic,retain) UITextField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layout;
-(void)setPasscodeField:(UITextField *)arg1 ;
-(UITextField *)passcodeField;
-(id)initWithFrame:(CGRect)arg1 numericOnly:(BOOL)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setPasscode:(id)arg1 ;
-(void)layoutSubviews;
-(id)passcode;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)passcodeDisplayView;
@end

