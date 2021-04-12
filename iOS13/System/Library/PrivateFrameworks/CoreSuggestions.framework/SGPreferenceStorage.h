/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGPreferenceStorage : NSObject
+(id)defaults;
+(BOOL)showContactsFoundInMail;
+(void)setShowContactsFoundInMail:(BOOL)arg1 ;
+(BOOL)showEventsFoundInMail;
+(void)setShowEventsFoundInMail:(BOOL)arg1 ;
+(void)resetAllPreferences;
+(long long)suggestionsLogLevel;
+(BOOL)showPastEvents;
+(void)setShowPastEvents:(BOOL)arg1 ;
+(BOOL)alwaysShowCancelledEvents;
+(void)setAlwaysShowCancelledEvents:(BOOL)arg1 ;
+(void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2 ;
+(void)updateIntSettingKey:(id)arg1 withValue:(int)arg2 ;
+(BOOL)onlyShowSignificantPseudoContacts;
+(void)setOnlyShowSignificantPseudoContacts:(BOOL)arg1 ;
+(void)setOnlyShowSignificantPseudoContactsForTests:(BOOL)arg1 ;
+(BOOL)onlyShowSignificantNLEvents;
+(void)setOnlyShowSignificantNLEvents:(BOOL)arg1 ;
+(long long)hashedSessionsLogging;
+(void)setHashedSessionsLogging:(int)arg1 ;
+(BOOL)showSuggestionsCalendar;
+(int)registerBlockOnSuggestionsSettingsChange:(/*^block*/id)arg1 ;
+(void)removeDeprecatedDefaults;
+(long long)messagesToProcessImmediately;
+(void)setMessagesToProcessImmediately:(long long)arg1 ;
+(BOOL)syncHistoryToCloud;
+(void)setSyncHistoryToCloud:(BOOL)arg1 ;
+(BOOL)allowGeocode;
+(void)setAllowGeocode:(BOOL)arg1 ;
+(BOOL)allowAgeBasedPruning;
+(void)setAllowAgeBasedPruning:(BOOL)arg1 ;
+(BOOL)useMLModelForContacts;
+(void)setUseMLModelForContacts:(BOOL)arg1 ;
+(BOOL)useMLModelForSelfId;
+(void)setUseMLModelForSelfId:(BOOL)arg1 ;
+(BOOL)useMLModelForContactSharing;
+(void)setUseMLModelForContactSharing:(BOOL)arg1 ;
+(float)contactSharingNegativeSamplingRate;
+(void)setContactSharingNegativeSamplingRate:(float)arg1 ;
+(BOOL)detectContacts;
+(BOOL)detectNLEvents;
+(BOOL)detectStructuredEvents;
+(BOOL)detectReminders;
+(void)updateDetection:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setDetectStructuredEvents:(BOOL)arg1 ;
+(void)setDetectNLEvents:(BOOL)arg1 ;
+(void)setDetectContacts:(BOOL)arg1 ;
+(void)setDetectReminders:(BOOL)arg1 ;
+(void)setFirstPartyCalendarAppIsInstalled:(BOOL)arg1 ;
+(void)setFirstPartyMailAppIsInstalled:(BOOL)arg1 ;
+(BOOL)shouldHarvestEvents;
+(id)cloudKitPersistedState;
+(void)setCloudKitPersistedState:(id)arg1 ;
+(BOOL)useManateeSaltForHistory;
+(void)setUseManateeSaltForHistory:(BOOL)arg1 ;
+(BOOL)showOperatingSystemVersionInSnippets;
+(void)setShowOperatingSystemVersionInSnippets:(BOOL)arg1 ;
+(BOOL)hidePastEventsForTests;
+(void)setHidePastEventsForTests:(BOOL)arg1 ;
+(void)setShowCancelledEventsForTests:(BOOL)arg1 ;
+(void)setNLEventsDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setStructuredEventsDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setRemindersDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setContactsDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setAllowGeocodeForTests:(BOOL)arg1 ;
+(void)setSyncHistoryToCloudForTests:(BOOL)arg1 ;
+(void)setMessagesToProcessImmediatelyForTests:(long long)arg1 ;
+(void)setUseMLModelForSelfIdForTests:(BOOL)arg1 ;
+(id)defaultsForTests;
+(void)suspendNotificationQueue;
+(void)resumeNotificationQueue;
@end

