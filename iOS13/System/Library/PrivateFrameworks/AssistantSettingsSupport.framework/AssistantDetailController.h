/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>

@class NSMutableSet, PSSpecifier;

@interface AssistantDetailController : PSListController {

	NSMutableSet* _disabledSpotlightBundles;
	NSMutableSet* _disabledLockScreenBundles;
	NSMutableSet* _disabledSpotlightApps;
	NSMutableSet* _disabledSpotlightShortcuts;
	PSSpecifier* _inSearchShowInSearchSpecifier;
	PSSpecifier* _inSearchSuggestShortcutsSpecifier;
	PSSpecifier* _inSearchShowAppGroup;
	PSSpecifier* _inSearchShowAppSpecifier;
	PSSpecifier* _onLockScreenGroup;
	PSSpecifier* _onLockScreenShowSiriSuggestionsSpecifier;

}
-(id)_bundleId;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_appName;
-(id)specifiers;
-(void)_fetchIntentsSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)_loadDisabledShortcutsSet;
-(void)_addInAppSpecifiersToSpecifiers:(id)arg1 ;
-(void)_addInSearchSpecifiersToSpecifiers:(id)arg1 ;
-(void)_asyncAddAskSiriSettingsIfNecessary;
-(id)_siriSuggestionsClients;
-(id)_inAppFooterString;
-(id)_inAppShowToggleLableString;
-(void)setInAppShowSiriSuggestionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)inAppShowSiriSuggestionsEnabled:(id)arg1 ;
-(void)setInAppLearnFromAppEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)inAppLearnFromAppEnabled:(id)arg1 ;
-(void)setInSearchShowInSearchEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)inSearchShowInSearchEnabled:(id)arg1 ;
-(void)setInSearchSuggestShortcutsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)inSearchSuggestShortcutsEnabled:(id)arg1 ;
-(void)setInSearchShowAppEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)inSearchShowAppEnabled:(id)arg1 ;
-(void)setOnLockScreenShowSiriSuggestionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)onLockScreenShowSiriSuggestionsEnabled:(id)arg1 ;
-(BOOL)_showLockscreenGroup;
-(void)_saveInSearchShowInSearchEnabled:(BOOL)arg1 ;
-(void)_saveInSearchShowAppEnabled:(BOOL)arg1 ;
-(void)_saveInSearchSuggestShortcutsEnabled:(BOOL)arg1 ;
-(void)_saveOnLockScreenShowSiriSuggestionsEnabled:(BOOL)arg1 ;
-(id)_enableSiriAppSpecifiersWithAppId:(id)arg1 accessGranted:(BOOL)arg2 ;
-(void)setAskSiriUseWithAskSiriEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)askSiriUseWithAskSiriEnabled:(id)arg1 ;
@end

