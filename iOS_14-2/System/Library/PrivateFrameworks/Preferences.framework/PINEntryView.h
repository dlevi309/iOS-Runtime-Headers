/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PINEntryView <UITextFieldDelegate>
@required
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1;
-(void)hideError;
-(id)stringValue;
-(void)setDelegate:(id)arg1;
-(void)showFailedAttempts:(long long)arg1;
-(void)hideFailedAttempts;
-(void)setStringValue:(id)arg1;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
-(void)setTitle:(id)arg1 font:(id)arg2;
-(double)getCurrentTitleFontSize;
-(void)setTextFieldKeyboardType:(long long)arg1;
-(void)setTextFieldKeyboardAppearance:(long long)arg1;
-(void)showError:(id)arg1 animate:(BOOL)arg2;
-(void)hidePasscodeField:(BOOL)arg1;
-(void)setShowsOptionsButton:(BOOL)arg1;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1;

@end

