/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/VTUIEnrollTrainingViewControllerDelegate.h>
#import <libobjc.A.dylib/VTUISiriDataSharingOptInPresentationDelegate.h>
#import <AssistantSettingsSupport/AssistantVoiceSettingsConnectionProvider.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <AssistantSettingsSupport/AssistantHistoryDelegate.h>

@class SUICAssistantVoiceSettingsConnection, NSArray, NSString, PSSpecifier, CNContactStore, CNContactPickerViewController, NSMutableSet, VTUIEnrollTrainingViewController, VTUISiriDataSharingOptInPresenter, UIViewController, NSSet, AFSettingsConnection;

@interface AssistantController : PSListController <CNContactPickerDelegate, VTUIEnrollTrainingViewControllerDelegate, VTUISiriDataSharingOptInPresentationDelegate, AssistantVoiceSettingsConnectionProvider, DevicePINControllerDelegate, AssistantHistoryDelegate> {

	NSArray* _assistantSettings;
	SUICAssistantVoiceSettingsConnection* _settingsConnection;
	NSString* _pendingLanguage;
	PSSpecifier* _voiceSpecifier;
	PSSpecifier* _voiceActiviationSpecifier;
	PSSpecifier* _hardwareButtonActivationSpecifier;
	PSSpecifier* _currentSiriActivationSpecifier;
	PSSpecifier* _lockScreenSpecifier;
	CNContactStore* _contactStore;
	CNContactPickerViewController* _peoplePicker;
	NSMutableSet* _disabledSpotlightBundles;
	NSMutableSet* _disabledSpotlightDomains;
	BOOL _needsReloadSpecifiersOnViewWillAppear;
	VTUIEnrollTrainingViewController* _enrollmentController;
	VTUISiriDataSharingOptInPresenter* _siriDataSharingPresenter;
	UIViewController* _siriDataSharingOptInViewController;
	NSSet* _installedBundleIDs;
	NSArray* _allAppsSpecifiers;
	AFSettingsConnection* _AFSettingsConnection;

}

@property (nonatomic,readonly) SUICAssistantVoiceSettingsConnection * settingsConnection;              //@synthesize settingsConnection=_settingsConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundle;
+(BOOL)_heySiriSupportedForLanguage:(id)arg1 ;
+(id)shortTitlesForLanguageIdentifiers:(id)arg1 ;
+(void)presentAssistantEnableAlertForState:(BOOL)arg1 presentingViewController:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)bundle;
-(void)handleURL:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didBecomeActive;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setAssistantEnabled:(BOOL)arg1 ;
-(void)skipSetup;
-(void)continueSetup;
-(void)showLearnMore;
-(BOOL)_isVoiceTriggerEnabled;
-(void)preferencesDidChange;
-(SUICAssistantVoiceSettingsConnection *)settingsConnection;
-(BOOL)_isHeySiriAlwaysOn;
-(void)_showMeCardPopover;
-(void)showMeCardPicker:(id)arg1 ;
-(void)deleteHistorySuccessfulFromViewController:(id)arg1 ;
-(void)showAboutAssistantSheet:(id)arg1 ;
-(void)lowPowerModeChangedNotification:(id)arg1 ;
-(void)contactsDidChange;
-(void)prepareForSnapshot;
-(void)outputVoiceDidChange;
-(void)languageCodeDidChange;
-(id)assistantVoiceLanguage:(id)arg1 ;
-(void)_updateSpecifiersForLanguage:(id)arg1 ;
-(void)configureAskSiriSpecifiersFor:(id)arg1 ;
-(void)configurePersonalizationSpecifiersFor:(id)arg1 ;
-(void)configureApplicationListSpecifiersFor:(id)arg1 ;
-(BOOL)_isAssistantLockScreenAccessRestricted;
-(id)_localizeTriggerString:(id)arg1 ;
-(id)assistantLanguage:(id)arg1 ;
-(id)assistantEnabled:(id)arg1 ;
-(void)setAssistantSuggestionsEnabled:(id)arg1 ;
-(id)isAssistantSuggestionsEnabled;
-(void)setLookUpSuggestionsEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isLookUpSuggestionsEnabled:(id)arg1 ;
-(void)setLockScreenSuggestionsEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isLockScreenSuggestionEnabled:(id)arg1 ;
-(void)_setAssistantEnabled:(id)arg1 forSpecifier:(id)arg2 presentingViewController:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
-(BOOL)watchSupportsSiriLanguageCode:(id)arg1 ;
-(void)showAssistantConfirmationViewForSpecifier:(id)arg1 presentingViewController:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(void)assistantEnabledCancelled:(id)arg1 ;
-(void)confirmDisableForMultiUserVoiceIdentificationWithSpecifier:(id)arg1 pairedWatch:(BOOL)arg2 presentingViewController:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
-(void)confirmDisableWithSpecifier:(id)arg1 pairedWatch:(BOOL)arg2 presentingViewController:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
-(void)assistantDisabledCancelled:(id)arg1 ;
-(void)assistantDisabledConfirmed:(id)arg1 ;
-(void)assistantEnabledConfirmed:(id)arg1 ;
-(void)_presentSiriDataSharingOptInViewController;
-(void)saveSpotlightSettings;
-(void)setVoiceTrigger:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setHardwareButtonTrigger:(id)arg1 forSpecifier:(id)arg2 ;
-(BOOL)_isIncompatibleWithWatchLanguage:(id)arg1 ;
-(void)_showIncompatibleWatchLanguageAlert;
-(void)_setAssistantLanguageWatchMismatchConfirmed:(id)arg1 ;
-(void)_setAssistantLanguageConfirmed:(id)arg1 ;
-(void)_setAssistantLanguageCancelled:(id)arg1 ;
-(id)confirmationSpecifierWillDisableHeySiri:(BOOL)arg1 disableMultiUser:(BOOL)arg2 disableSpokenFeedbackOnWatch:(BOOL)arg3 ;
-(void)_setAssistantLanguageHeySiriDisableConfirmed:(id)arg1 ;
-(id)_confirmationPromptDisableHeySiri:(BOOL)arg1 disableMultiUser:(BOOL)arg2 disableSpokenFeedback:(BOOL)arg3 ;
-(BOOL)_languageWillDisableHeySiri:(id)arg1 ;
-(BOOL)_pairedWithSiriSpeaksEnabledNanoHardware;
-(void)_showWillDisableAlertWillDisableHeySiri:(BOOL)arg1 disableMultiUser:(BOOL)arg2 disableSpokenFeedbackOnWatch:(BOOL)arg3 ;
-(void)setAssistantLanguage:(id)arg1 ;
-(void)_setAccessibleFromLockScreen:(BOOL)arg1 ;
-(void)setDisabledFromLockScreen:(BOOL)arg1 ;
-(id)hardwareButtonTrigger:(id)arg1 ;
-(void)cancelSetup:(id)arg1 ;
-(void)loadAppStorePageForBundleId:(id)arg1 ;
-(void)assistantAboutDonePressed:(id)arg1 ;
-(void)showAboutSearchSuggestionsSheet:(id)arg1 ;
-(id)assistantVoice:(id)arg1 ;
-(id)assistantAudioFeedbackMode:(id)arg1 ;
-(void)setAssistantLanguage:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accessibleFromLockScreen:(id)arg1 ;
-(void)setAccessibleFromLockScreen:(id)arg1 forSpecifier:(id)arg2 ;
-(id)voiceTrigger:(id)arg1 ;
-(id)voiceControlLanguage:(id)arg1 ;
-(void)setVoiceControlLanguage:(id)arg1 specifier:(id)arg2 ;
-(id)meCard:(id)arg1 ;
-(void)showAssistantHistoryViewController:(id)arg1 ;
@end

