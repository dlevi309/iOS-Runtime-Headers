/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSAppListController.h>

@class NSArray, NSDictionary, TIUserWordsManager, PSSpecifier;

@interface KeyboardController : PSAppListController {

	BOOL _needsReloadSpecifiers;
	NSArray* _openShortcutsSpecifiers;
	NSDictionary* _offlineStatusForLanguage;
	TIUserWordsManager* _dictionaryController;
	PSSpecifier* _dictationLanguageSpecifier;
	PSSpecifier* _deleteWordSpecifier;
	unsigned long long _deleteWordSpecifierIndex;

}

@property (nonatomic,readonly) NSArray * openShortcutsSpecifiers;                      //@synthesize openShortcutsSpecifiers=_openShortcutsSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * dictationLanguageSpecifier;                 //@synthesize dictationLanguageSpecifier=_dictationLanguageSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * deleteWordSpecifier;                        //@synthesize deleteWordSpecifier=_deleteWordSpecifier - In the implementation block
@property (assign,nonatomic) unsigned long long deleteWordSpecifierIndex;              //@synthesize deleteWordSpecifierIndex=_deleteWordSpecifierIndex - In the implementation block
@property (nonatomic,readonly) TIUserWordsManager * dictionaryController;              //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (nonatomic,copy) NSDictionary * offlineStatusForLanguage;                    //@synthesize offlineStatusForLanguage=_offlineStatusForLanguage - In the implementation block
@property (assign,nonatomic) BOOL needsReloadSpecifiers;                               //@synthesize needsReloadSpecifiers=_needsReloadSpecifiers - In the implementation block
+(id)localizedListForInputModes:(id)arg1 forDictation:(BOOL)arg2 ;
+(id)singleActiveDisabledDictationLanguage;
+(long long)compareUsingOrderInArray:(id)arg1 withFirst:(id)arg2 second:(id)arg3 ;
+(id)localizedDisplayNameForInputMode:(id)arg1 forDictation:(BOOL)arg2 ;
+(void)localizeAndSortPreferencesArray:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)hardwareKeyboardAvailabilityChanged;
-(id)specifiers;
-(id)readPreferenceValue:(id)arg1 ;
-(TIUserWordsManager *)dictionaryController;
-(NSDictionary *)offlineStatusForLanguage;
-(void)presentPrivacySheet:(id)arg1 ;
-(void)_dismissConfirmationSheet;
-(void)managedKeyboardSettingsDidChange;
-(void)updateOfflineDictationStatus;
-(PSSpecifier *)deleteWordSpecifier;
-(unsigned long long)deleteWordSpecifierIndex;
-(void)setDeleteWordSpecifierIndex:(unsigned long long)arg1 ;
-(void)dictationEnabledConfirmed:(id)arg1 ;
-(void)dictationEnabledCancelled:(id)arg1 ;
-(void)dictationDisabledConfirmed:(id)arg1 ;
-(void)dictationDisabledCancelled:(id)arg1 ;
-(PSSpecifier *)dictationLanguageSpecifier;
-(void)setNeedsReloadSpecifiers:(BOOL)arg1 ;
-(void)moveCharacterPreviewPreferenceToEndForGroup:(id)arg1 ;
-(void)loadPreferenceForInputModeIdentifier:(id)arg1 keyboardInputMode:(id)arg2 addNewPreferencesToArray:(id)arg3 defaultPreferenceIdentifiers:(id)arg4 additionalPreferenceIdentifiers:(id)arg5 mapPreferenceToInputMode:(id)arg6 ;
-(id)addAllPreferencesToArray:(id)arg1 mapPreferenceToInputMode:(id)arg2 ;
-(id)groupPreferences:(id)arg1 forMapping:(id)arg2 inputModes:(id)arg3 ;
-(id)sortPreferencesKeysByInputModeOrderAndCount:(id)arg1 inputModes:(id)arg2 ;
-(id)mergePreferences:(id)arg1 inputModesToPreferences:(id)arg2 ;
-(void)removeShuangpinPreferenceIfNotApplicableForGroup:(id)arg1 ;
-(void)moveSpaceConfirmationPreferenceToEndAndAddFooterTextForGroup:(id)arg1 ;
-(void)disableLockedDownPreferencesForGroup:(id)arg1 ;
-(void)movePeriodShortcutPreferenceToEndAndAddFooterTextForGroup:(id)arg1 ;
-(void)moveEnableDictationPreferenceToEndAndAddFooterTextForGroup:(id)arg1 ;
-(id)hardwareKeyboardSpecifier;
-(NSArray *)openShortcutsSpecifiers;
-(BOOL)_supportsReachableKeyboard;
-(id)reachableKeyboardSpecifier;
-(BOOL)_supportsProKeyboard;
-(id)proKeyboardSpecifier;
-(void)setOfflineStatusForLanguage:(NSDictionary *)arg1 ;
-(id)loadAllKeyboardPreferences;
-(void)addHardwareKeyboardAndShortcuts:(id)arg1 ;
-(void)addEnabledExtensionSpecifiersToArray:(id)arg1 ;
-(void)addFooterTextForMemoji:(id)arg1 ;
-(void)setDictationLanguageSpecifier:(PSSpecifier *)arg1 ;
-(void)setDeleteWordSpecifier:(PSSpecifier *)arg1 ;
-(id)readCPPreferenceValue:(id)arg1 ;
-(void)setReachableKeyboardSetting:(id)arg1 specifier:(id)arg2 ;
-(id)getReachableKeybordSetting:(id)arg1 ;
-(void)setProKeyboardSetting:(id)arg1 specifier:(id)arg2 ;
-(id)getProKeyboardSetting:(id)arg1 ;
-(void)setKeyboardPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)readAutocorrectionPreferenceValue:(id)arg1 ;
-(id)readPredictionPreferenceValue:(id)arg1 ;
-(id)readKeyboardAllowPaddlePreferenceValue:(id)arg1 ;
-(id)readCheckSpellingPreferenceValue:(id)arg1 ;
-(id)readCPDeleteWordPreferenceValue:(id)arg1 ;
-(void)setAutocorrectionPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPredictionPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setKeyboardAllowPaddlePreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setCheckSpellingPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)readSmartTypingPreferenceValue:(id)arg1 ;
-(void)setSmartTypingPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)dictationEnabled:(id)arg1 ;
-(void)setDictationEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)shuangpinType:(id)arg1 ;
-(void)setShuangpinType:(id)arg1 specifier:(id)arg2 ;
-(id)smartFullwidthSpace:(id)arg1 ;
-(void)setSmartFullwidthSpace:(id)arg1 specifier:(id)arg2 ;
-(BOOL)needsReloadSpecifiers;
@end

