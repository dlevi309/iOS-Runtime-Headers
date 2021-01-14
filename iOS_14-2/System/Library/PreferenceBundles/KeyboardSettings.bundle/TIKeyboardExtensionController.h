/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(void)dealloc;
-(TIAboutKeyboardPrivacyController *)aboutPrivacyController;
-(void)setAboutPrivacyController:(TIAboutKeyboardPrivacyController *)arg1 ;
-(TIAddExtensionKeyboardController *)addExtensionKeyboardController;
-(PSSpecifier *)lastInputModeSpecifier;
-(void)setKeyboardEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isKeyboardEnabled:(id)arg1 ;
-(void)setLastInputModeSpecifier:(PSSpecifier *)arg1 ;
-(void)setAddExtensionKeyboardController:(TIAddExtensionKeyboardController *)arg1 ;
@end

