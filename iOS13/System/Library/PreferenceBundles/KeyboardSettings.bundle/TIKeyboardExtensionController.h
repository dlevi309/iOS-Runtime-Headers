/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class TIAboutKeyboardPrivacyController, TIAddExtensionKeyboardController, PSSpecifier;

@interface TIKeyboardExtensionController : PSListController {

	TIAboutKeyboardPrivacyController* _aboutPrivacyController;
	TIAddExtensionKeyboardController* _addExtensionKeyboardController;
	PSSpecifier* _lastInputModeSpecifier;

}

@property (nonatomic,retain) TIAboutKeyboardPrivacyController * aboutPrivacyController;                      //@synthesize aboutPrivacyController=_aboutPrivacyController - In the implementation block
@property (nonatomic,retain) TIAddExtensionKeyboardController * addExtensionKeyboardController;              //@synthesize addExtensionKeyboardController=_addExtensionKeyboardController - In the implementation block
@property (nonatomic,retain) PSSpecifier * lastInputModeSpecifier;                                           //@synthesize lastInputModeSpecifier=_lastInputModeSpecifier - In the implementation block
+(id)keyboardsForBundleID:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(id)specifiers;
-(TIAboutKeyboardPrivacyController *)aboutPrivacyController;
-(void)setAboutPrivacyController:(TIAboutKeyboardPrivacyController *)arg1 ;
-(TIAddExtensionKeyboardController *)addExtensionKeyboardController;
-(PSSpecifier *)lastInputModeSpecifier;
-(void)setKeyboardEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isKeyboardEnabled:(id)arg1 ;
-(void)setLastInputModeSpecifier:(PSSpecifier *)arg1 ;
-(void)setAddExtensionKeyboardController:(TIAddExtensionKeyboardController *)arg1 ;
@end

