/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@interface _PSAppUsageUtilities : NSObject
+(id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 knowledgeStore:(id)arg3 ;
+(id)sharingAppUsageDurations;
+(id)mostUsedAppBundleIdsUsingPredicate:(id)arg1 knowledgeStore:(id)arg2 ;
+(id)shareExtensionsUsedAndInstalledDaysAgo:(long long)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2 knowledgeStore:(id)arg3 ;
+(id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg1 ;
+(void)cacheSharingAppUsageDurations:(id)arg1 ;
@end

