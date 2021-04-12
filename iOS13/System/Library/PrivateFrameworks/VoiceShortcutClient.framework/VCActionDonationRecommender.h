/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@interface VCActionDonationRecommender : NSObject
+(void)initialize;
+(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)fetchRecommendedDonationsForAppPredictionsWithLimit:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 filteringActiveShortcuts:(BOOL)arg5 actionDonationCategory:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)fetchRecommendedDonationsByAppIdentifierWithLimit:(unsigned long long)arg1 query:(id)arg2 filteringForIsEligibleForPrediction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)fetchSuggestedDonationsForAllAppsWithLimit:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchSuggestedDonationsForApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchRecentDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 filteringForTopLevel:(BOOL)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(void)fetchPredictedDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)donationsByRemovingDuplicatesFromDonations:(id)arg1 query:(id)arg2 excludingAppIdentifiers:(id)arg3 includingSingleDonationPerApp:(BOOL)arg4 ;
+(BOOL)actionDonation:(id)arg1 matchesQuery:(id)arg2 ;
+(id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2 ;
+(id)filterDonationsForTitleLength:(id)arg1 ;
+(id)getDonationsFromActionResponse:(id)arg1 ;
+(id)disabledSpotlightApps;
@end

