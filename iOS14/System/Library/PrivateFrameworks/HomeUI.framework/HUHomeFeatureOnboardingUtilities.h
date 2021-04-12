/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUHomeFeatureOnboardingUtilities : NSObject
+(void)initialize;
+(id)home:(id)arg1 onboardFeaturesForKeyPaths:(id)arg2 presentingViewController:(id)arg3 usageOptions:(id)arg4 ;
+(BOOL)home:(id)arg1 canShowHomeTheaterOnboardingWithUsageOptions:(id)arg2 ;
+(id)fetchSupportedVoiceRecognitionLanguages;
+(BOOL)atLeastOneHomePodHasLanguageSettingsForHome:(id)arg1 ;
+(id)analyzeHomeAssistantDevicesForSupportedVoiceRecognitionLanguages:(id)arg1 home:(id)arg2 ;
+(BOOL)home:(id)arg1 hasSomeHomePodsOnSupportedVoiceRecognitionLanguages:(id)arg2 ;
+(void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)arg1 ;
+(BOOL)home:(id)arg1 canShowNaturalLightingOnboardingWithUsageOptions:(id)arg2 ;
+(id)home:(id)arg1 createMultiUserLanguageToHomePodsMapping:(id)arg2 ;
+(void)fetchSupportedVoiceRecognitionLanguagesWithCompletion:(/*^block*/id)arg1 ;
+(id)home:(id)arg1 processHomeFeatureOnboarderResults:(id)arg2 ;
+(id)_fetchSupportedMultiUserLanguagesSynchronously;
+(id)home:(id)arg1 onboardIdentifyVoiceFromPresentingViewController:(id)arg2 usageOptions:(id)arg3 ;
+(id)home:(id)arg1 onboardAllFeaturesFromPresentingViewController:(id)arg2 usageOptions:(id)arg3 ;
+(id)groupedFeaturesForOnboardingFlowKeyPaths:(id)arg1 ;
+(BOOL)home:(id)arg1 canShowAnnounceOnboardingWithUsageOptions:(id)arg2 ;
+(BOOL)hasUserSaidYesToVoiceIdentificationInResults:(id)arg1 ;
+(id)_checkIdentifyVoicePrerequisitesForHome:(id)arg1 ;
+(BOOL)isDeviceUsingASupportedVoiceRecognitionSiriLanguage:(id)arg1 ;
+(id)createPersonalIdentityDeviceLanguageMismatchList:(id)arg1 ;
+(BOOL)_checkIdentifyVoicePrerequisitesSimpleForHome:(id)arg1 ;
+(id)checkVoiceProfileAvailabiltyForLanguage:(id)arg1 ;
+(BOOL)_userHasSaidYesToShowTVViewingProfilesIn:(id)arg1 ;
+(void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)arg1 ;
+(BOOL)home:(id)arg1 voiceRecognitionIsSupportedForCurrentUserOnHomePod:(id)arg2 ;
+(BOOL)userWhomIsNotOwnerHasCompletedHomeSwitchingOnboarding:(id)arg1 ;
+(BOOL)currentUserHasUnfinishedFeatureOnboardingForHome:(id)arg1 ;
+(BOOL)home:(id)arg1 canShowIdentifyVoiceOnboardingWithUsageOptions:(id)arg2 ;
+(unsigned long long)home:(id)arg1 checkForOwnerUpgradeRequirementsFromResults:(id)arg2 ;
+(unsigned long long)home:(id)arg1 checkForMultiUserDeviceUpgradeRequirements:(id)arg2 ;
+(id)processLanguageAndMediaProfileInfo:(id)arg1 ;
@end

