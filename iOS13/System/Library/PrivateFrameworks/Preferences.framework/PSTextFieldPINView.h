/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <UIKit/UITableViewDataSource.h>

@class UITextField, AlphanumericPINTableViewCell, UITableView, NSString;

@interface PSTextFieldPINView : PINView <UITableViewDataSource> {

	UITextField* _passcodeField;
	AlphanumericPINTableViewCell* _cell;
	UITableView* _table;
	BOOL _usesNumericKeyboard;

}

@property (assign,nonatomic) BOOL usesNumericKeyboard;              //@synthesize usesNumericKeyboard=_usesNumericKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setTextFieldKeyboardType:(long long)arg1 ;
-(void)setTextFieldKeyboardAppearance:(long long)arg1 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(void)okButtonPressed:(id)arg1 ;
-(void)setUsesNumericKeyboard:(BOOL)arg1 ;
-(BOOL)usesNumericKeyboard;
@end

