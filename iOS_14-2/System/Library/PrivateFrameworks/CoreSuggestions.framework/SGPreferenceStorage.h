/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGPreferenceStorage : NSObject
+(void)setMessagesToProcessImmediately:(long long)arg1 ;
+(id)defaults;
+(long long)suggestionsLogLevel;
+(void)resetAllPreferences;
+(void)setHidePastEventsForTests:(BOOL)arg1 ;
+(void)setSyncHistoryToCloud:(BOOL)arg1 ;
+(void)setUseMLModelForSelfId:(BOOL)arg1 ;
+(void)setStructuredEventsDetectionEnabledForTests:(BOOL)arg1 ;
+(BOOL)showPastEvents;
+(void)setSyncHistoryToCloudForTests:(BOOL)arg1 ;
+(void)setHarvestBudgetCPUTimeSeconds:(double)arg1 ;
+(void)setOnlyShowSignificantPseudoContactsForTests:(BOOL)arg1 ;
+(void)setShowPastEvents:(BOOL)arg1 ;
+(void)setDetectNLEvents:(BOOL)arg1 ;
+(BOOL)detectContacts;
+(void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2 ;
+(void)setNLEventsDetectionEnabledForTests:(BOOL)arg1 ;
+(BOOL)useManateeSaltForHistory;
+(id)cloudKitPersistedState;
+(BOOL)detectReminders;
+(int)registerBlockOnSuggestionsSettingsChange:(/*^block*/id)arg1 ;
+(void)setRemindersDetectionInMailEnabledForTests:(BOOL)arg1 ;
+(void)setDetectRemindersInMail:(BOOL)arg1 ;
+(void)setAllowAgeBasedPruning:(BOOL)arg1 ;
+(void)setStructuredEventsMLDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setHarvestBudgetNumberOfOperations:(long long)arg1 ;
+(BOOL)shouldHarvestEvents;
+(void)setFirstPartyMailAppIsInstalled:(BOOL)arg1 ;
+(BOOL)showEventsFoundInMail;
+(double)harvestBudgetCPUTimeSeconds;
+(BOOL)useMLModelForContacts;
+(BOOL)allowGeocode;
+(void)setAlwaysShowCancelledEvents:(BOOL)arg1 ;
+(void)setShowOperatingSystemVersionInSnippets:(BOOL)arg1 ;
+(void)resumeNotificationQueue;
+(BOOL)allowUnverifiedSourceForMarkup;
+(void)setDetectStructuredEvents:(BOOL)arg1 ;
+(BOOL)showOperatingSystemVersionInSnippets;
+(BOOL)detectStructuredEvents;
+(void)setUseMLModelForContactSharing:(BOOL)arg1 ;
+(void)setUseMLModelForSelfIdForTests:(BOOL)arg1 ;
+(void)setShowEventsFoundInMail:(BOOL)arg1 ;
+(void)setFirstPartyCalendarAppIsInstalled:(BOOL)arg1 ;
+(void)setCloudKitPersistedState:(id)arg1 ;
+(void)setUseManateeSaltForHistory:(BOOL)arg1 ;
+(BOOL)syncHistoryToCloud;
+(void)updateIntSettingKey:(id)arg1 withValue:(int)arg2 ;
+(void)setDetectStructuredEventsML:(BOOL)arg1 ;
+(long long)harvestBudgetNumberOfOperations;
+(void)setUseMLModelForContacts:(BOOL)arg1 ;
+(id)defaultsForTests;
+(void)setMessagesToProcessImmediatelyForTests:(long long)arg1 ;
+(void)suspendNotificationQueue;
+(float)contactSharingNegativeSamplingRate;
+(BOOL)allowAnyDomainForMarkup;
+(void)setDetectContacts:(BOOL)arg1 ;
+(void)setShowCancelledEventsForTests:(BOOL)arg1 ;
+(void)updateDetection:(BOOL)arg1 forKey:(id)arg2 ;
+(BOOL)showContactsFoundInMail;
+(void)setHashedSessionsLogging:(int)arg1 ;
+(void)setContactSharingNegativeSamplingRate:(float)arg1 ;
+(void)removeDeprecatedDefaults;
+(void)setAllowUnverifiedSourceForMarkup:(BOOL)arg1 ;
+(BOOL)useMLModelForSelfId;
+(long long)hashedSessionsLogging;
+(void)setAllowGeocodeForTests:(BOOL)arg1 ;
+(BOOL)allowAgeBasedPruning;
+(id)userAccountsPersistedState;
+(BOOL)useMLModelForContactSharing;
+(long long)messagesToProcessImmediately;
+(void)setOnlyShowSignificantPseudoContacts:(BOOL)arg1 ;
+(void)setRemindersDetectionEnabledForTests:(BOOL)arg1 ;
+(BOOL)detectRemindersInMail;
+(void)setContactsDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setUserAccountsPersistedState:(id)arg1 ;
+(BOOL)detectStructuredEventsML;
+(BOOL)hidePastEventsForTests;
+(void)setShowContactsFoundInMail:(BOOL)arg1 ;
+(void)setDetectReminders:(BOOL)arg1 ;
+(BOOL)detectNLEvents;
+(BOOL)onlyShowSignificantPseudoContacts;
+(void)setOnlyShowSignificantNLEvents:(BOOL)arg1 ;
+(void)setAllowGeocode:(BOOL)arg1 ;
+(void)setAllowAnyDomainForMarkup:(BOOL)arg1 ;
+(BOOL)showSuggestionsCalendar;
+(BOOL)alwaysShowCancelledEvents;
+(BOOL)onlyShowSignificantNLEvents;
@end

