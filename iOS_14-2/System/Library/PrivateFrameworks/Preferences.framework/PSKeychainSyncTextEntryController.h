/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <libobjc.A.dylib/KeychainSyncPasscodeFieldDelegate.h>

@protocol UIKeyInput;
@class PSTableCell, UIView, PSSpecifier, NSString;

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {

	PSTableCell* _textEntryCell;
	UIView*<UIKeyInput> _textEntryView;
	PSSpecifier* _textEntrySpecifier;
	BOOL _hidesNextButton;
	BOOL _secureTextEntry;
	BOOL _textFieldHasRoundBorder;
	BOOL _convertsNumeralsToASCII;
	int _textEntryType;
	unsigned long long _numberOfPasscodeFields;
	NSString* _textValue;

}

@property (nonatomic,retain) NSString * textValue;                                   //@synthesize textValue=_textValue - In the implementation block
@property (assign,nonatomic) int textEntryType;                                      //@synthesize textEntryType=_textEntryType - In the implementation block
@property (assign,nonatomic) BOOL hidesNextButton;                                   //@synthesize hidesNextButton=_hidesNextButton - In the implementation block
@property (assign,nonatomic) BOOL secureTextEntry;                                   //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,nonatomic) BOOL textFieldHasRoundBorder;                           //@synthesize textFieldHasRoundBorder=_textFieldHasRoundBorder - In the implementation block
@property (assign,nonatomic) BOOL convertsNumeralsToASCII;                           //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPasscodeFields;              //@synthesize numberOfPasscodeFields=_numberOfPasscodeFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBecomeActive;
-(BOOL)becomeFirstResponder;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(id)init;
-(BOOL)secureTextEntry;
-(void)nextPressed;
-(void)setTextEntryType:(int)arg1 ;
-(void)setHidesNextButton:(BOOL)arg1 ;
-(int)textEntryType;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(id)textEntryView;
-(void)setTextFieldHasRoundBorder:(BOOL)arg1 ;
-(void)updateNextButton;
-(void)setTextEntryText:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)textEntryText;
-(void)setNumberOfPasscodeFields:(unsigned long long)arg1 ;
-(void)textEntryViewDidChange:(id)arg1 ;
-(id)placeholderText;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setConvertsNumeralsToASCII:(BOOL)arg1 ;
-(NSString *)textValue;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)textFieldChanged:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2 ;
-(BOOL)convertsNumeralsToASCII;
-(BOOL)hidesNextButton;
-(void)setTextValue:(NSString *)arg1 ;
-(id)textEntrySpecifier;
-(void)setTextValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getTextValueForSpecifier:(id)arg1 ;
-(unsigned long long)numberOfPasscodeFields;
-(BOOL)textFieldHasRoundBorder;
-(void)dealloc;
@end

