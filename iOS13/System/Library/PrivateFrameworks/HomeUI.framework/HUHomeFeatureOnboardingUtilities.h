/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUHomeFeatureOnboardingUtilities : NSObject
+(id)fetchSupportedMultiUserLanguages:(id*)arg1 ;
+(BOOL)atLeastOneHomePodHasLanguageSettingsForHome:(id)arg1 ;
+(id)analyzeHomeAssistantDevicesForSupportedMultiUserLanguages:(id)arg1 home:(id)arg2 ;
+(BOOL)home:(id)arg1 hasSomeHomePodsOnSupportedMultiUserLanguages:(id)arg2 ;
+(void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)arg1 ;
+(id)home:(id)arg1 createMultiUserLanguageToHomePodsMapping:(id)arg2 ;
+(void)fetchSupportedMultiUserLanguagesWithCompletion:(/*^block*/id)arg1 ;
+(id)home:(id)arg1 processHomeFeatureOnboarderResults:(id)arg2 ;
+(id)home:(id)arg1 onboardIdentifyVoiceFromPresentingViewController:(id)arg2 usageOptions:(id)arg3 ;
+(id)home:(id)arg1 onboardAllFeaturesFromPresentingViewController:(id)arg2 usageOptions:(id)arg3 ;
+(id)groupedFeaturesForOnboardingFlowKeyPaths:(id)arg1 ;
+(id)home:(id)arg1 onboardFeaturesForKeyPaths:(id)arg2 presentingViewController:(id)arg3 usageOptions:(id)arg4 ;
+(BOOL)hasUserSaidYesToVoiceIdentificationInResults:(id)arg1 ;
+(id)_checkIdentifyVoicePrerequisitesForHome:(id)arg1 ;
+(BOOL)isDeviceUsingASupportedMultiUserSiriLanguage:(id)arg1 ;
+(id)createPersonalIdentityDeviceLanguageMismatchList:(id)arg1 ;
+(BOOL)_checkIdentifyVoicePrerequisitesSimpleForHome:(id)arg1 ;
+(id)checkVoiceProfileAvailabiltyForLanguage:(id)arg1 ;
+(BOOL)_userHasSaidYesToShowTVViewingProfilesIn:(id)arg1 ;
+(void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)arg1 ;
+(BOOL)home:(id)arg1 voiceRecognitionIsSupportedForCurrentUserOnHomePod:(id)arg2 ;
+(BOOL)currentUserHasUnfinishedFeatureOnboardingForHome:(id)arg1 ;
+(BOOL)home:(id)arg1 canShowIdentifyVoiceOnboardingWithUsageOptions:(id)arg2 ;
+(unsigned long long)home:(id)arg1 checkForOwnerUpgradeRequirementsFromResults:(id)arg2 ;
+(unsigned long long)home:(id)arg1 checkForMultiUserDeviceUpgradeRequirements:(id)arg2 ;
+(id)processLanguageAndMediaProfileInfo:(id)arg1 ;
@end

