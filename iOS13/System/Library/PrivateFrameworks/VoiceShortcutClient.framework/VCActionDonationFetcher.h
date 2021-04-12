/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@interface VCActionDonationFetcher : NSObject
+(void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)streams;
+(id)donationFromEvent:(id)arg1 ;
+(id)donationFromEvent:(id)arg1 filteringForTopLevel:(BOOL)arg2 ;
+(BOOL)shouldKeepAction:(id)arg1 forAppWithBundleIdentifier:(id)arg2 filteringForTopLevel:(BOOL)arg3 ;
+(BOOL)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1 ;
+(id)keyPathForStream:(id)arg1 ;
+(id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 ;
+(id)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 ;
+(void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)fetchDonationsWithLimit:(unsigned long long)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2 ;
+(id)donationWithUUID:(id)arg1 ;
+(id)isEligibleForPredictionPredicate;
+(BOOL)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1 ;
+(id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
+(id)actionPredictionBlacklist;
+(id)appPredictionBlacklist;
@end

