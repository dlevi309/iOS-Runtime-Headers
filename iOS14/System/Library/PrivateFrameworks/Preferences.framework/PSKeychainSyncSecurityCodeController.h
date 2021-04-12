/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)mode;
-(id)specifiers;
-(id)init;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(NSString *)firstPasscodeEntry;
-(void)setFirstPasscodeEntry:(NSString *)arg1 ;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(id)_configureTextEntryCell;
-(void)showAdvancedOptions;
-(void)generateRandomCode;
-(void)forgotSecurityCode;
-(void)updateNextButton;
-(void)animatePasscodeFieldLeft:(BOOL)arg1 ;
-(void)dismissAlerts;
-(void)textEntryViewDidChange:(id)arg1 ;
-(id)placeholderText;
-(void)didFinishEnteringText:(id)arg1 ;
-(BOOL)showsAdvancedSettings;
-(void)setShowsAdvancedSettings:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)viewDidLoad;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

