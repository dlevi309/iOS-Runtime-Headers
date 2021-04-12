/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSTableCell.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@protocol KeychainSyncPasscodeFieldDelegate;
@class PSPasscodeField, NSString;

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;
	BOOL _convertsNumeralsToASCII;
	BOOL _denyFirstResponder;
	id<KeychainSyncPasscodeFieldDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeychainSyncPasscodeFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL convertsNumeralsToASCII;                                       //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) BOOL denyFirstResponder;                                            //@synthesize denyFirstResponder=_denyFirstResponder - In the implementation block
@property (nonatomic,readonly) PSPasscodeField * passcodeField;                                  //@synthesize passcodeField=_passcodeField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<KeychainSyncPasscodeFieldDelegate>)delegate;
-(void)setDelegate:(id<KeychainSyncPasscodeFieldDelegate>)arg1 ;
-(long long)keyboardType;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(BOOL)hasText;
-(PSPasscodeField *)passcodeField;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setConvertsNumeralsToASCII:(BOOL)arg1 ;
-(void)cellTapped:(id)arg1 ;
-(BOOL)denyFirstResponder;
-(BOOL)convertsNumeralsToASCII;
-(void)_setSecureTextEntry:(BOOL)arg1 ;
-(void)setPasscodeText:(id)arg1 ;
-(id)passcodeText;
-(void)setDenyFirstResponder:(BOOL)arg1 ;
@end

