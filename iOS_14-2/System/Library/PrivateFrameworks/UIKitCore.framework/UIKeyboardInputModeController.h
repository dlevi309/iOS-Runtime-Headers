/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardInputModeControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIKeyboardInputMode, NSArray, NSString, NSObject, UITextInputMode;

@interface UIKeyboardInputModeController : NSObject {

	UIKeyboardInputMode* _currentInputMode;
	NSArray* _inputModesWithoutHardwareSupport;
	NSArray* _allExtensions;
	NSArray* _allowedExtensions;
	BOOL _skipExtensionInputModes;
	BOOL _excludeExtensionInputModes;
	BOOL _cacheNeedsRefresh;
	int _notifyPasscodeChangedToken;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	NSString* _newModeForUserNotification;
	NSObject* _keyboardTagForUserNotification;
	BOOL _loadingExtensions;
	BOOL _needsUpdateExtensions;
	BOOL _suppressCurrentPublicInputMode;
	BOOL disableFloatingKeyboardFilter;
	BOOL _shouldRunContinuousDiscovery;
	UITextInputMode* _documentInputMode;
	NSArray* keyboardInputModes;
	NSArray* keyboardInputModeIdentifiers;
	NSArray* enabledInputModes;
	NSArray* normalizedInputModes;
	NSArray* defaultKeyboardInputModes;
	NSArray* defaultRawInputModes;
	NSArray* defaultInputModes;
	NSArray* defaultNormalizedInputModes;
	NSArray* suggestedInputModesForSiriLanguage;
	UIKeyboardInputMode* _lastUsedInputMode;
	NSString* _inputModeContextIdentifier;
	NSArray* _additionalTextInputLocales;
	id<UIKeyboardInputModeControllerDelegate> _delegate;
	NSArray* _userSelectableKeyboardInputModes;
	NSArray* _userSelectableKeyboardInputModeIdentifiers;
	UIKeyboardInputMode* _nextInputModeToUse;
	UIKeyboardInputMode* _currentUsedInputMode;
	id _extensionMatchingContext;

}

@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * inputModesWithoutHardwareSupport; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
@property (readonly) NSArray * normalizedEnabledInputModeIdentifiers; 
@property (readonly) NSArray * enabledInputModeLanguages; 
@property (readonly) NSArray * activeInputModeIdentifiers; 
@property (readonly) NSArray * activeUserSelectableInputModeIdentifiers; 
@property (nonatomic,readonly) NSArray * allowedExtensions;                                           //@synthesize allowedExtensions=_allowedExtensions - In the implementation block
@property (retain) NSArray * keyboardInputModes; 
@property (retain) NSArray * userSelectableKeyboardInputModes;                                        //@synthesize userSelectableKeyboardInputModes=_userSelectableKeyboardInputModes - In the implementation block
@property (retain) NSArray * keyboardInputModeIdentifiers; 
@property (retain) NSArray * userSelectableKeyboardInputModeIdentifiers;                              //@synthesize userSelectableKeyboardInputModeIdentifiers=_userSelectableKeyboardInputModeIdentifiers - In the implementation block
@property (retain) NSArray * enabledInputModes; 
@property (retain) NSArray * normalizedInputModes; 
@property (retain) NSArray * defaultKeyboardInputModes; 
@property (nonatomic,copy) NSArray * defaultRawInputModes; 
@property (retain) NSArray * defaultInputModes; 
@property (retain) NSArray * defaultNormalizedInputModes; 
@property (retain) NSArray * suggestedInputModesForSiriLanguage; 
@property (nonatomic,retain) UIKeyboardInputMode * nextInputModeToUse;                                //@synthesize nextInputModeToUse=_nextInputModeToUse - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentUsedInputMode;                              //@synthesize currentUsedInputMode=_currentUsedInputMode - In the implementation block
@property (nonatomic,retain) id extensionMatchingContext;                                             //@synthesize extensionMatchingContext=_extensionMatchingContext - In the implementation block
@property (retain) UIKeyboardInputMode * currentInputMode; 
@property (assign,nonatomic) UIKeyboardInputMode * currentInputModeInPreference; 
@property (nonatomic,retain) UITextInputMode * documentInputMode;                                     //@synthesize documentInputMode=_documentInputMode - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * lastUsedInputMode;                                 //@synthesize lastUsedInputMode=_lastUsedInputMode - In the implementation block
@property (nonatomic,readonly) UIKeyboardInputMode * hardwareInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentSystemInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentPublicInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentLinguisticInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * lastUsedInputModeForCurrentContext; 
@property (nonatomic,readonly) BOOL containsEmojiInputMode; 
@property (nonatomic,readonly) BOOL containsDictationSupportedInputMode; 
@property (nonatomic,readonly) NSArray * activeDictationSupportedInputModeIdentifiers; 
@property (nonatomic,readonly) NSArray * activeDictationLanguages; 
@property (nonatomic,readonly) NSArray * enabledDictationLanguages; 
@property (nonatomic,copy) NSString * inputModeContextIdentifier;                                     //@synthesize inputModeContextIdentifier=_inputModeContextIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * additionalTextInputLocales;                                      //@synthesize additionalTextInputLocales=_additionalTextInputLocales - In the implementation block
@property (assign,nonatomic) BOOL shouldRunContinuousDiscovery;                                       //@synthesize shouldRunContinuousDiscovery=_shouldRunContinuousDiscovery - In the implementation block
@property (assign,nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disableFloatingKeyboardFilter; 
+(id)inputModeIdentifierForPreferredLanguages:(id)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)hardwareInputModeAutomaticHardwareLayout;
+(id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+(id)disallowedDictationLanguagesForDeviceLanguage;
+(id)sharedInputModeController;
-(BOOL)containsDictationSupportedInputMode;
-(NSArray *)defaultInputModes;
-(void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(UITextInputMode *)documentInputMode;
-(UIKeyboardInputMode *)nextInputModeToUse;
-(void)performWithForcedExtensionInputModes:(/*^block*/id)arg1 ;
-(UIKeyboardInputMode *)lastUsedInputModeForCurrentContext;
-(void)didEnterBackground:(id)arg1 ;
-(id)extensionMatchingContext;
-(id)enabledInputModeIdentifiers:(BOOL)arg1 ;
-(id)nextInputModeToUseForTraits:(id)arg1 ;
-(NSArray *)enabledInputModeIdentifiers;
-(void)updateEnabledDictationAndSLSLanguagesWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)hardwareLayoutToUseForInputMode:(id)arg1 hardwareKeyboardLanguage:(id)arg2 countryCode:(id)arg3 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 ;
-(id)supportedInputModesFromArray:(id)arg1 ;
-(void)_inputModeChangedWhileContextTracked;
-(id)fullInputModeFromIdentifier:(id)arg1 hardwareKeyboardLanguage:(id)arg2 ;
-(UIKeyboardInputMode *)currentPublicInputMode;
-(void)setNormalizedInputModes:(NSArray *)arg1 ;
-(id)init;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(BOOL)disableFloatingKeyboardFilter;
-(id)updateEnabledDictationLanguages:(BOOL)arg1 ;
-(id)userSelectableInputModeIdentifiersFromInputModeIdentifiers:(id)arg1 ;
-(UIKeyboardInputMode *)lastUsedInputMode;
-(id<UIKeyboardInputModeControllerDelegate>)delegate;
-(void)setUserSelectableKeyboardInputModeIdentifiers:(NSArray *)arg1 ;
-(id)currentSystemInputModeExcludingEmoji:(BOOL)arg1 ;
-(void)setUserSelectableKeyboardInputModes:(NSArray *)arg1 ;
-(void)showAddKeyboardAlertForInputModeIdentifier:(id)arg1 ;
-(NSArray *)userSelectableKeyboardInputModeIdentifiers;
-(id)suggestedInputModesForCurrentHardwareKeyboardAndSuggestedInputModes:(id)arg1 ;
-(void)setDisableFloatingKeyboardFilter:(BOOL)arg1 ;
-(void)setKeyboardInputModes:(NSArray *)arg1 ;
-(void)switchToDictationInputMode;
-(id)inputModeIdentifierLastUsedForLanguage:(id)arg1 ;
-(NSArray *)normalizedEnabledInputModeIdentifiers;
-(void)setCurrentInputMode:(UIKeyboardInputMode *)arg1 ;
-(id)inputModeToAddForKeyboardLanguage:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3 ;
-(id)lastUsedInputModeForTextInputMode:(id)arg1 ;
-(void)updateLastUsedInputMode:(id)arg1 ;
-(void)clearNextInputModeToUse;
-(BOOL)shouldRunContinuousDiscovery;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2 skipEmoji:(BOOL)arg3 ;
-(void)_trackInputModeIfNecessary:(id)arg1 ;
-(id)keyboardLanguageForDictationLanguage:(id)arg1 ;
-(id)supportedFullModesForHardwareKeyboard:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3 matchedMode:(id*)arg4 ;
-(void)setAdditionalTextInputLocales:(NSArray *)arg1 ;
-(id)hardwareLayoutToUseForInputMode:(id)arg1 ;
-(void)_clearAllExtensions;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(void)updateCurrentAndNextInputModes;
-(id)suggestedInputModesForCurrentLocale;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(id)inputModeWithIdentifier:(id)arg1 ;
-(void)handleSpecificHardwareKeyboard;
-(void)_removeInputModes:(id)arg1 ;
-(void)_setCurrentAndNextInputModePreference;
-(void)setKeyboardInputModeIdentifiers:(NSArray *)arg1 ;
-(UIKeyboardInputMode *)currentInputMode;
-(UIKeyboardInputMode *)currentInputModeInPreference;
-(NSArray *)suggestedInputModesForSiriLanguage;
-(NSArray *)activeDictationLanguages;
-(void)handleLastUsedInputMode:(id)arg1 withNewInputMode:(id)arg2 ;
-(NSArray *)defaultKeyboardInputModes;
-(void)setDelegate:(id<UIKeyboardInputModeControllerDelegate>)arg1 ;
-(id)inputModeLastUsedForLanguage:(id)arg1 includingExtensions:(BOOL)arg2 ;
-(NSArray *)enabledDictationLanguages;
-(id)inputModeByReplacingSoftwareLayoutWithSoftwareLayout:(id)arg1 inInputMode:(id)arg2 ;
-(id)inputModesFromIdentifiers:(id)arg1 ;
-(NSArray *)inputModesWithoutHardwareSupport;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2 ;
-(void)setCurrentInputModeInPreference:(UIKeyboardInputMode *)arg1 ;
-(void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(NSArray *)enabledInputModes;
-(NSString *)inputModeContextIdentifier;
-(id)userSelectableInputModesFromInputModes:(id)arg1 ;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(NSArray *)userSelectableKeyboardInputModes;
-(id)extensionInputModes;
-(id)_MCFilteredExtensionIdentifiers;
-(id)fallbackCurrentInputModeForFilteredInputModeIdentifier:(id)arg1 fromInputModeIdentifiers:(id)arg2 ;
-(id)filteredInputModesForSiriLanguageFromInputModes:(id)arg1 ;
-(NSArray *)defaultRawInputModes;
-(NSArray *)keyboardInputModes;
-(id)inputModeLastUsedForLanguage:(id)arg1 ;
-(void)keyboardsPreferencesChanged:(id)arg1 ;
-(void)updateDefaultInputModesIfNecessaryForIdiom;
-(void)setDefaultRawInputModes:(NSArray *)arg1 ;
-(void)releaseAddKeyboardNotification;
-(id)fallbackCurrentInputModeForFilteredInputMode:(id)arg1 fromInputModes:(id)arg2 ;
-(id)activeInputModes;
-(id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2 ;
-(BOOL)currentLocaleRequiresExtendedSetup;
-(id)identifiersFromInputModes:(id)arg1 ;
-(id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3 ;
-(void)_clearAllExtensionsIfNeeded;
-(id)textInputModeForResponder:(id)arg1 ;
-(void)setDictationSLSLanguagesEnabled:(id)arg1 ;
-(id)inputModeIdentifierLastUsedForLanguage:(id)arg1 includingExtensions:(BOOL)arg2 ;
-(id)inputModeForASCIIToggleWithTraits:(id)arg1 ;
-(void)setExtensionMatchingContext:(id)arg1 ;
-(void)setNextInputModeToUse:(UIKeyboardInputMode *)arg1 ;
-(void)extensionsChanged;
-(NSArray *)enabledInputModeLanguages;
-(NSArray *)additionalTextInputLocales;
-(void)stopDictation;
-(void)updateUserSelectableInputModes;
-(BOOL)isLockscreenPasscodeKeyboard;
-(void)getHardwareKeyboardLanguage:(id*)arg1 countryCode:(id*)arg2 ;
-(id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1 ;
-(void)setSuggestedInputModesForSiriLanguage:(NSArray *)arg1 ;
-(id)getDictationSLSLanguagesEnabled;
-(NSArray *)defaultNormalizedInputModes;
-(BOOL)_mayContainExtensionInputModes;
-(void)setLastUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(id)suggestedInputModesForHardwareKeyboardLanguage:(id)arg1 countryCode:(id)arg2 inputModes:(id)arg3 ;
-(void)willEnterForeground:(id)arg1 ;
-(UIKeyboardInputMode *)hardwareInputMode;
-(id)defaultDictationLanguages:(id)arg1 ;
-(void)loadSuggestedInputModesForSiriLanguage;
-(void)saveDeviceUnlockPasscodeInputModes;
-(id)filteredPadInputModesFromInputModes:(id)arg1 withRules:(id)arg2 ;
-(void)performWithoutExtensionInputModes:(/*^block*/id)arg1 ;
-(id)suggestedInputModesForLocales:(id)arg1 ;
-(void)setShouldRunContinuousDiscovery:(BOOL)arg1 ;
-(id)inputModesByAppendingApplicationLanguagesToInputModes:(id)arg1 ;
-(UIKeyboardInputMode *)currentSystemInputMode;
-(UIKeyboardInputMode *)currentUsedInputMode;
-(BOOL)isDictationLanguageEnabled:(id)arg1 ;
-(id)_systemInputModePassingTest:(/*^block*/id)arg1 ;
-(BOOL)containsEmojiInputMode;
-(NSArray *)activeInputModeIdentifiers;
-(NSArray *)keyboardInputModeIdentifiers;
-(void)setInputModeContextIdentifier:(NSString *)arg1 ;
-(NSArray *)activeUserSelectableInputModeIdentifiers;
-(BOOL)verifyKeyboardExtensionsWithApp;
-(id)appendPasscodeInputModes:(id)arg1 ;
-(void)setDefaultKeyboardInputModes:(NSArray *)arg1 ;
-(id)suggestedInputModesForPreferredLanguages;
-(id)nextInputModeToUseForTraits:(id)arg1 updatePreference:(BOOL)arg2 ;
-(void)setDefaultNormalizedInputModes:(NSArray *)arg1 ;
-(void)updateCurrentInputMode:(id)arg1 ;
-(id)_allExtensionsFromMatchingExtensions:(id)arg1 ;
-(NSArray *)activeDictationSupportedInputModeIdentifiers;
-(void)setCurrentUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(NSArray *)normalizedInputModes;
-(void)_setCurrentInputMode:(id)arg1 force:(BOOL)arg2 ;
-(void)switchToCurrentSystemInputMode;
-(BOOL)deviceStateIsLocked;
-(void)dealloc;
-(id)activeUserSelectableInputModes;
-(NSArray *)allowedExtensions;
-(void)_beginContinuousDiscoveryIfNeeded;
-(NSArray *)supportedInputModeIdentifiers;
-(UIKeyboardInputMode *)currentLinguisticInputMode;
-(id)filteredTVInputModesFromInputModes:(id)arg1 ;
-(void)didAcceptAddKeyboardInputMode;
-(id)_systemInputModePassingLanguageTest:(/*^block*/id)arg1 ;
@end

