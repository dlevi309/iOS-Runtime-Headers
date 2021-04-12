/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PINEntryView <UITextFieldDelegate>
@required
-(void)appendString:(id)arg1;
-(id)stringValue;
-(void)setDelegate:(id)arg1;
-(void)setStringValue:(id)arg1;
-(BOOL)becomeFirstResponder;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1;
-(void)showFailedAttempts:(long long)arg1;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
-(double)getCurrentTitleFontSize;
-(void)setTextFieldKeyboardType:(long long)arg1;
-(void)setTextFieldKeyboardAppearance:(long long)arg1;
-(void)showError:(id)arg1 animate:(BOOL)arg2;
-(void)setTitle:(id)arg1 font:(id)arg2;
-(void)hidePasscodeField:(BOOL)arg1;
-(void)setShowsOptionsButton:(BOOL)arg1;

@end

