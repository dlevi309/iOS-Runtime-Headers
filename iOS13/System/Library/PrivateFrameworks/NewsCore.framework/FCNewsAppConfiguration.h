/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSArray, FCIAdConfiguration, FCPrefetchConfiguration, NSString, NTPBDiscoverMoreVideosInfo;


@protocol FCNewsAppConfiguration <FCCoreConfiguration,NFCopying>
@property (nonatomic,readonly) NSArray * onboardingFeedIDs; 
@property (nonatomic,readonly) long long autoScrollToTopFeedTimeout; 
@property (nonatomic,readonly) double interstitialAdLoadDelay; 
@property (nonatomic,readonly) double prerollLoadingTimeout; 
@property (nonatomic,readonly) double tileProminenceScoreBalanceValue; 
@property (nonatomic,readonly) FCIAdConfiguration * iAdConfig; 
@property (nonatomic,readonly) FCPrefetchConfiguration * prefetchConfig; 
@property (nonatomic,readonly) long long newFavoriteNotificationAlertsFrequency; 
@property (nonatomic,readonly) long long notificationArticleCacheTimeout; 
@property (nonatomic,readonly) long long notificationArticleWithRapidUpdatesCacheTimeout; 
@property (nonatomic,readonly) NSString * embedConfigurationAssetID; 
@property (nonatomic,readonly) BOOL universalLinksEnabled; 
@property (nonatomic,readonly) double parsecPopulationFloor; 
@property (nonatomic,readonly) double parsecPopulationCeiling; 
@property (nonatomic,readonly) NSString * widgetConfigID; 
@property (nonatomic,readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds; 
@property (nonatomic,readonly) unsigned widgetMinimumNumberOfTimesPreseenToBeSeen; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationStart; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationEnd; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationSlope; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationYIntercept; 
@property (nonatomic,readonly) long long analyticsEndpointMaxPayloadSize; 
@property (nonatomic,readonly) NSString * personalizationBundleIdMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationUrlMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationWhitelistResourceId; 
@property (nonatomic,readonly) NSString * personalizationFavorabilityResourceId; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForArticleList; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForSingleArticle; 
@property (nonatomic,readonly) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; 
@property (nonatomic,readonly) NSString * exploreArticleID; 
@property (nonatomic,readonly) NSArray * externalAnalyticsConfigurations; 
@property (nonatomic,readonly) NSArray * mediaSharingBlacklistedChannelIDs; 
@property (nonatomic,readonly) long long stateRestorationAllowedTimeWindow; 
@property (nonatomic,readonly) long long autoRefreshMinimumInterval; 
@property (nonatomic,readonly) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; 
@property (nonatomic,copy,readonly) NSArray * topStoriesPublishDates; 
@property (nonatomic,readonly) unsigned long long trendingStyle; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NTPBDiscoverMoreVideosInfo * shareDiscoverMoreVideosInfo; 
@property (nonatomic,readonly) NSString * articleRecirculationComponentPlacementConfigJSON; 
@property (nonatomic,readonly) BOOL isExpired; 
@property (nonatomic,readonly) long long articleRecirculationPopularFeedQueryTimeRange; 
@property (nonatomic,readonly) BOOL disableThumbnailsForArticleRecirculation; 
@property (nonatomic,readonly) NSString * feedNavigationConfigJSON; 
@property (nonatomic,readonly) NSString * webEmbedContentBlockers; 
@property (nonatomic,readonly) NSString * webEmbedContentBlockerOverrides; 
@property (nonatomic,readonly) NSString * anfRenderingConfiguration; 
@property (nonatomic,readonly) BOOL enableBadgeInSpotlightTabBar; 
@property (nonatomic,readonly) NSString * translationMapResourceID; 
@property (nonatomic,readonly) NSString * issueArticleRecirculationConfigJSON; 
@property (getter=isArticleToolbarCompressionEnabled,nonatomic,readonly) BOOL articleToolbarCompressionEnabled; 
@property (nonatomic,readonly) long long lowStorageThreshold; 
@property (nonatomic,readonly) long long criticalStorageThreshold; 
@property (nonatomic,readonly) long long feedContentExposureTestMaximumInterval; 
@property (nonatomic,readonly) long long maximumTrendingGroupSizeiPad; 
@property (nonatomic,readonly) long long maximumTrendingGroupSizeiPhone; 
@property (nonatomic,readonly) unsigned long long likeDislikeBehavior; 
@property (nonatomic,readonly) unsigned long long bestOfBundleFeedGroupKind; 
@property (nonatomic,readonly) long long emailSignupRequiredAppLaunchCount; 
@property (nonatomic,readonly) BOOL enableLocationBasedAutofavorites; 
@property (nonatomic,readonly) NSString * localAreasMappingResourceId; 
@optional
-(BOOL)isExpired;
-(unsigned long long)likeDislikeBehavior;
-(long long)articleRecirculationPopularFeedQueryTimeRange;
-(BOOL)disableThumbnailsForArticleRecirculation;
-(NSString *)feedNavigationConfigJSON;
-(NSString *)webEmbedContentBlockers;
-(NSString *)webEmbedContentBlockerOverrides;
-(NSString *)anfRenderingConfiguration;
-(BOOL)enableBadgeInSpotlightTabBar;
-(NSString *)translationMapResourceID;
-(NSString *)issueArticleRecirculationConfigJSON;
-(BOOL)isArticleToolbarCompressionEnabled;
-(long long)lowStorageThreshold;
-(long long)criticalStorageThreshold;
-(long long)feedContentExposureTestMaximumInterval;
-(long long)maximumTrendingGroupSizeiPad;
-(long long)maximumTrendingGroupSizeiPhone;
-(unsigned long long)bestOfBundleFeedGroupKind;
-(long long)emailSignupRequiredAppLaunchCount;
-(BOOL)enableLocationBasedAutofavorites;
-(NSString *)localAreasMappingResourceId;

@required
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(NSArray *)onboardingFeedIDs;
-(long long)autoScrollToTopFeedTimeout;
-(double)interstitialAdLoadDelay;
-(double)prerollLoadingTimeout;
-(double)tileProminenceScoreBalanceValue;
-(FCIAdConfiguration *)iAdConfig;
-(FCPrefetchConfiguration *)prefetchConfig;
-(long long)newFavoriteNotificationAlertsFrequency;
-(long long)notificationArticleCacheTimeout;
-(long long)notificationArticleWithRapidUpdatesCacheTimeout;
-(NSString *)embedConfigurationAssetID;
-(BOOL)universalLinksEnabled;
-(NSString *)widgetConfigID;
-(long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
-(unsigned)widgetMinimumNumberOfTimesPreseenToBeSeen;
-(double)articleDiversificationSimilarityExpectationStart;
-(double)articleDiversificationSimilarityExpectationEnd;
-(double)articleDiversificationUniquePublisherExpectationSlope;
-(double)articleDiversificationUniquePublisherExpectationYIntercept;
-(long long)analyticsEndpointMaxPayloadSize;
-(NSString *)personalizationBundleIdMappingResourceId;
-(NSString *)personalizationUrlMappingResourceId;
-(NSString *)personalizationWhitelistResourceId;
-(NSString *)personalizationFavorabilityResourceId;
-(long long)corryBarMaxArticleCountForArticleList;
-(long long)corryBarMaxArticleCountForSingleArticle;
-(BOOL)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
-(NSString *)exploreArticleID;
-(NSArray *)externalAnalyticsConfigurations;
-(NSArray *)mediaSharingBlacklistedChannelIDs;
-(long long)stateRestorationAllowedTimeWindow;
-(long long)autoRefreshMinimumInterval;
-(BOOL)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
-(NSArray *)topStoriesPublishDates;
-(unsigned long long)trendingStyle;
-(NSString *)articleRecirculationConfigJSON;
-(NTPBDiscoverMoreVideosInfo *)shareDiscoverMoreVideosInfo;
-(NSString *)articleRecirculationComponentPlacementConfigJSON;

@end

