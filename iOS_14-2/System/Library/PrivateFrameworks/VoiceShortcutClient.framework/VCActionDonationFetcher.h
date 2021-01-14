/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@interface VCActionDonationFetcher : NSObject
+(id)streams;
+(void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)donationFromEvent:(id)arg1 ;
+(id)donationFromEvent:(id)arg1 filteringForTopLevel:(BOOL)arg2 ;
+(BOOL)shouldKeepAction:(id)arg1 forAppWithBundleIdentifier:(id)arg2 filteringForTopLevel:(BOOL)arg3 ;
+(BOOL)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1 ;
+(id)keyPathForStream:(id)arg1 ;
+(id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 directAccess:(BOOL)arg3 ;
+(id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 ;
+(id)whitelistedDonationsWithOptions:(unsigned long long)arg1 ;
+(id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 directAccess:(BOOL)arg4 ;
+(void)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 shortcutAvailability:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(id)donationWithUUID:(id)arg1 ;
+(void)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 filteringForRecent:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(id)predicateForShortcutAvailabilityOptions:(unsigned long long)arg1 ;
+(void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1 ;
+(void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchDonationsWithLimit:(unsigned long long)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)isEligibleForPredictionPredicate;
+(id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
+(id)appPredictionBlacklist;
+(id)actionPredictionBlacklist;
@end

