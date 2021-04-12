/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>

@class UIButton, UILabel, NSString;

@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController {

	UIButton* _footerButton;
	UILabel* _footerLabel;
	NSString* _generatedCode;
	double _keyboardHeight;
	BOOL _showsAdvancedSettings;
	int _mode;
	int _securityCodeType;
	NSString* _firstPasscodeEntry;

}

@property (nonatomic,retain) NSString * firstPasscodeEntry;              //@synthesize firstPasscodeEntry=_firstPasscodeEntry - In the implementation block
@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int securityCodeType;                       //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (assign,nonatomic) BOOL showsAdvancedSettings;                 //@synthesize showsAdvancedSettings=_showsAdvancedSettings - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)specifiers;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(NSString *)firstPasscodeEntry;
-(void)setFirstPasscodeEntry:(NSString *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(id)_configureTextEntryCell;
-(void)showAdvancedOptions;
-(void)generateRandomCode;
-(void)forgotSecurityCode;
-(void)updateNextButton;
-(void)animatePasscodeFieldLeft:(BOOL)arg1 ;
-(void)textEntryViewDidChange:(id)arg1 ;
-(id)placeholderText;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)dismissAlerts;
-(BOOL)showsAdvancedSettings;
-(void)setShowsAdvancedSettings:(BOOL)arg1 ;
@end

