/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasText;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(long long)keyboardType;
-(id<KeychainSyncPasscodeFieldDelegate>)delegate;
-(PSPasscodeField *)passcodeField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setDelegate:(id<KeychainSyncPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setConvertsNumeralsToASCII:(BOOL)arg1 ;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(id)passcodeText;
-(BOOL)denyFirstResponder;
-(void)cellTapped:(id)arg1 ;
-(BOOL)convertsNumeralsToASCII;
-(void)setPasscodeText:(id)arg1 ;
-(void)_setSecureTextEntry:(BOOL)arg1 ;
-(void)setDenyFirstResponder:(BOOL)arg1 ;
@end

