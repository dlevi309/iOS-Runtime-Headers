/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@interface _PSAppUsageUtilities : NSObject
+(id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg1 ;
+(id)mostUsedAppBundleIdsUsingPredicate:(id)arg1 knowledgeStore:(id)arg2 ;
+(id)sharingAppUsageDurations;
+(id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 knowledgeStore:(id)arg3 ;
+(id)shareExtensionsUsedAndInstalledDaysAgo:(long long)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2 knowledgeStore:(id)arg3 ;
+(void)cacheSharingAppUsageDurations:(id)arg1 ;
@end

