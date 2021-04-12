/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCNewsAppConfiguration.h>
#import <libobjc.A.dylib/FCCoreConfiguration.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NSArray, FCIAdConfiguration, FCPrefetchConfiguration, NSString, NTPBDiscoverMoreVideosInfo, FCNotificationsConfiguration, NSDictionary, FCTopStoriesConfiguration, FCForYouGroupsConfiguration, FCVideoGroupsConfig, NSNumber, FCPaidBundleConfiguration, NSDate, FCPersonalizationTreatment, FCWidgetConfig;

@interface FCNewsAppConfig : NSObject <FCNewsAppConfiguration, FCCoreConfiguration, FCJSONEncodableObjectProviding> {

	BOOL _privateDataEncryptionAllowed;
	BOOL _privateDataEncryptionMigrationDesired;
	BOOL _privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
	BOOL _privateDataMigrationCleanupEnabled;
	FCVideoGroupsConfig* _forYouVideoGroupsConfig;
	NSDictionary* _endpointConfigsByEnvironment;
	FCNotificationsConfiguration* _notificationsConfig;
	FCTopStoriesConfiguration* _topStoriesConfig;
	FCForYouGroupsConfiguration* _forYouGroupsConfiguration;
	FCIAdConfiguration* _iAdConfig;
	FCPrefetchConfiguration* _prefetchConfig;
	NTPBDiscoverMoreVideosInfo* _shareDiscoverMoreVideosInfo;
	FCPaidBundleConfiguration* _paidBundleConfig;
	NSDictionary* _configDictionary;
	NSString* _storefrontID;
	NSDictionary* _languageConfigDictionary;
	NSDate* _lastModificationDate;
	FCPersonalizationTreatment* _cachedPersonalizationTreatment;
	NSArray* _externalAnalyticsConfigurations;
	NSDictionary* _analyticsContentTypeConfigsByContentTypeByEnvironment;
	FCWidgetConfig* _widgetConfig;

}

@property (nonatomic,readonly) NSDictionary * configDictionary;                                                                        //@synthesize configDictionary=_configDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                                                                           //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,readonly) NSDictionary * languageConfigDictionary;                                                                //@synthesize languageConfigDictionary=_languageConfigDictionary - In the implementation block
@property (nonatomic,readonly) NSDate * lastModificationDate;                                                                          //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,readonly) FCPersonalizationTreatment * cachedPersonalizationTreatment;                                            //@synthesize cachedPersonalizationTreatment=_cachedPersonalizationTreatment - In the implementation block
@property (nonatomic,retain) NSArray * externalAnalyticsConfigurations;                                                                //@synthesize externalAnalyticsConfigurations=_externalAnalyticsConfigurations - In the implementation block
@property (nonatomic,readonly) NSDictionary * analyticsContentTypeConfigsByContentTypeByEnvironment;                                   //@synthesize analyticsContentTypeConfigsByContentTypeByEnvironment=_analyticsContentTypeConfigsByContentTypeByEnvironment - In the implementation block
@property (nonatomic,readonly) FCWidgetConfig * widgetConfig;                                                                          //@synthesize widgetConfig=_widgetConfig - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long appConfigRefreshRate; 
@property (nonatomic,readonly) long long trendingTopicsRefreshRate; 
@property (getter=isOrderFeedEndpointEnabled,nonatomic,readonly) BOOL orderFeedEndpointEnabled; 
@property (nonatomic,readonly) FCNotificationsConfiguration * notificationsConfig;                                                     //@synthesize notificationsConfig=_notificationsConfig - In the implementation block
@property (nonatomic,readonly) long long notificationEnabledChannelsRefreshFrequency; 
@property (nonatomic,readonly) long long savedArticlesCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesOpenedCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountWiFi; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountCellular; 
@property (nonatomic,readonly) long long subscriptionsGlobalMeteredCount; 
@property (nonatomic,readonly) NSArray * presubscribedFeedIDs; 
@property (nonatomic,readonly) BOOL useSecureConnectionForAssets; 
@property (getter=isPrivateDataEncryptionAllowed,nonatomic,readonly) BOOL privateDataEncryptionAllowed;                                //@synthesize privateDataEncryptionAllowed=_privateDataEncryptionAllowed - In the implementation block
@property (getter=isPrivateDataEncryptionMigrationDesired,nonatomic,readonly) BOOL privateDataEncryptionMigrationDesired;              //@synthesize privateDataEncryptionMigrationDesired=_privateDataEncryptionMigrationDesired - In the implementation block
@property (nonatomic,readonly) BOOL privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;                                     //@synthesize privateDataEncryptionMigrationRequiresAllDevicesRunningTigris=_privateDataEncryptionMigrationRequiresAllDevicesRunningTigris - In the implementation block
@property (getter=isPrivateDataMigrationCleanupEnabled,nonatomic,readonly) BOOL privateDataMigrationCleanupEnabled;                    //@synthesize privateDataMigrationCleanupEnabled=_privateDataMigrationCleanupEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * endpointConfigsByEnvironment;                                                            //@synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment - In the implementation block
@property (nonatomic,readonly) FCTopStoriesConfiguration * topStoriesConfig;                                                           //@synthesize topStoriesConfig=_topStoriesConfig - In the implementation block
@property (nonatomic,readonly) NSString * breakingNewsChannelID; 
@property (nonatomic,readonly) NSString * topVideosChannelID; 
@property (nonatomic,readonly) NSString * moreVideosChannelID; 
@property (nonatomic,readonly) NSString * briefingsTagID; 
@property (nonatomic,readonly) NSString * trendingTagID; 
@property (nonatomic,readonly) NSString * featuredStoriesTagID; 
@property (nonatomic,readonly) NSString * savedStoriesTagID; 
@property (nonatomic,readonly) NSString * editorialChannelID; 
@property (nonatomic,readonly) NSString * editorialGemsSectionID; 
@property (nonatomic,readonly) long long articleRapidUpdatesTimeout; 
@property (nonatomic,readonly) NSArray * hiddenFeedIDs; 
@property (nonatomic,readonly) FCForYouGroupsConfiguration * forYouGroupsConfiguration;                                                //@synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration - In the implementation block
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekend; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekend; 
@property (nonatomic,readonly) long long expiredPaidSubscriptionGroupCutoffTime; 
@property (nonatomic,readonly) long long maximumNumberOfExpiredPaidSubscriptionGroups; 
@property (nonatomic,readonly) long long maximumTimesHeadlineInPaidSubscriptionGroup; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPad; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPhone; 
@property (nonatomic,readonly) BOOL diversifyOptionalTopStories; 
@property (nonatomic,readonly) long long optionalTopStoriesRefreshRate; 
@property (nonatomic,readonly) double minimumTrendingUnseenRatio; 
@property (nonatomic,copy,readonly) FCVideoGroupsConfig * forYouVideoGroupsConfig;                                                     //@synthesize forYouVideoGroupsConfig=_forYouVideoGroupsConfig - In the implementation block
@property (nonatomic,readonly) double endOfArticleMinPaidHeadlineRatio; 
@property (nonatomic,readonly) long long endOfArticleMaxInaccessiblePaidArticleCount; 
@property (nonatomic,readonly) long long minimumDistanceBetweenImageOnTopTiles; 
@property (nonatomic,readonly) NSString * forYouRecordConfigID; 
@property (nonatomic,readonly) NSString * experimentalizableFieldPostfix; 
@property (nonatomic,readonly) NSNumber * currentTreatment; 
@property (nonatomic,readonly) long long expirePinnedArticlesAfter; 
@property (nonatomic,readonly) BOOL shouldShowAlternateHeadlines; 
@property (nonatomic,readonly) long long singleTopicFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) long long singleChannelFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) BOOL isSpecialEventsMicaAnimationDisabled; 
@property (nonatomic,readonly) long long maxRetriesForDroppedFeeds; 
@property (nonatomic,readonly) double delayBeforeRetryingDroppedFeeds; 
@property (nonatomic,readonly) FCPaidBundleConfiguration * paidBundleConfig;                                                           //@synthesize paidBundleConfig=_paidBundleConfig - In the implementation block
@property (nonatomic,readonly) NSString * magazinesConfigRecordID; 
@property (nonatomic,readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds; 
@property (nonatomic,readonly) long long subscriptionsPlacardGlobalMaximumPerDay; 
@property (nonatomic,readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds; 
@property (nonatomic,readonly) long long entitlementsCacheRecoveryAttemptDurationInSeconds; 
@property (nonatomic,readonly) NSString * spotlightChannelID; 
@property (nonatomic,readonly) double feedLineHeightMultiplier; 
@property (nonatomic,readonly) NSArray * aLaCartePaidSubscriptionGroupWhitelistedChannelIDs; 
@property (nonatomic,readonly) NSString * todayFeedKnobs; 
@property (nonatomic,readonly) NSArray * onboardingFeedIDs; 
@property (nonatomic,readonly) long long autoScrollToTopFeedTimeout; 
@property (nonatomic,readonly) double interstitialAdLoadDelay; 
@property (nonatomic,readonly) double prerollLoadingTimeout; 
@property (nonatomic,readonly) double tileProminenceScoreBalanceValue; 
@property (nonatomic,readonly) FCIAdConfiguration * iAdConfig;                                                                         //@synthesize iAdConfig=_iAdConfig - In the implementation block
@property (nonatomic,readonly) FCPrefetchConfiguration * prefetchConfig;                                                               //@synthesize prefetchConfig=_prefetchConfig - In the implementation block
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
@property (nonatomic,readonly) NSArray * mediaSharingBlacklistedChannelIDs; 
@property (nonatomic,readonly) long long stateRestorationAllowedTimeWindow; 
@property (nonatomic,readonly) long long autoRefreshMinimumInterval; 
@property (nonatomic,readonly) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; 
@property (nonatomic,copy,readonly) NSArray * topStoriesPublishDates; 
@property (nonatomic,readonly) unsigned long long trendingStyle; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NTPBDiscoverMoreVideosInfo * shareDiscoverMoreVideosInfo;                                               //@synthesize shareDiscoverMoreVideosInfo=_shareDiscoverMoreVideosInfo - In the implementation block
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
+(id)languageConfigDictionaryForConfig:(id)arg1 preferredLanguageTags:(id)arg2 ;
+(id)overrideForYouConfigID;
+(id)defaultForYouRecordConfigIDByLocalizedStorefrontID;
+(id)overrideWidgetSectionConfigID;
+(id)defaultWidgetRecordConfigIDByLocalizedStorefrontID;
+(id)defaultMagazinesConfigRecordIDByLocalizedStorefrontID;
+(id)defaultConfigurationForStoreFrontID:(id)arg1 ;
+(id)configurationWithData:(id)arg1 storefrontID:(id)arg2 preferredLanguageTags:(id)arg3 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExpired;
-(NSDate *)lastModificationDate;
-(BOOL)isDefaultConfiguration;
-(NSString *)storefrontID;
-(long long)appConfigRefreshRate;
-(FCPaidBundleConfiguration *)paidBundleConfig;
-(unsigned long long)likeDislikeBehavior;
-(NSString *)briefingsTagID;
-(NSString *)trendingTagID;
-(NSString *)featuredStoriesTagID;
-(NSString *)savedStoriesTagID;
-(NSString *)topVideosChannelID;
-(NSString *)moreVideosChannelID;
-(NSString *)spotlightChannelID;
-(id)jsonEncodableObject;
-(NSArray *)presubscribedFeedIDs;
-(FCTopStoriesConfiguration *)topStoriesConfig;
-(NSString *)editorialChannelID;
-(NSString *)editorialGemsSectionID;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 languageConfigDictionary:(id)arg3 lastModificationDate:(id)arg4 ;
-(NSDictionary *)configDictionary;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 languageConfigDictionary:(id)arg3 ;
-(void)_loadPrivateDataEncryptionConfiguration;
-(void)_loadEndpointConfiguration;
-(void)_loadNotificationsConfiguration;
-(void)_loadTopStoriesConfiguration;
-(void)_loadForYouGroupsConfiguration;
-(void)_loadiAdConfiguration;
-(void)_loadPrefetchConfiguration;
-(void)_loadDiscoverMoreVideosConfiguration;
-(void)_loadWidgetConfiguration;
-(void)_loadPaidBundleConfigurationForStorefrontID:(id)arg1 ;
-(NSDictionary *)languageConfigDictionary;
-(id)localizedStorefrontID;
-(id)personalizationTreatment;
-(FCWidgetConfig *)widgetConfig;
-(NSDictionary *)analyticsContentTypeConfigsByContentTypeByEnvironment;
-(NSDictionary *)endpointConfigsByEnvironment;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(id)personalizationTreatmentForFeldsparID:(id)arg1 ;
-(id)todayConfigWithQueueConfigs:(id)arg1 maxSlotCount:(unsigned long long)arg2 ;
-(id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1 ;
-(long long)trendingTopicsRefreshRate;
-(BOOL)isOrderFeedEndpointEnabled;
-(FCNotificationsConfiguration *)notificationsConfig;
-(long long)notificationEnabledChannelsRefreshFrequency;
-(long long)savedArticlesCutoffTime;
-(long long)savedArticlesOpenedCutoffTime;
-(long long)savedArticlesMaximumCountWiFi;
-(long long)savedArticlesMaximumCountCellular;
-(long long)subscriptionsGlobalMeteredCount;
-(BOOL)useSecureConnectionForAssets;
-(BOOL)isPrivateDataEncryptionAllowed;
-(BOOL)isPrivateDataEncryptionMigrationDesired;
-(BOOL)privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
-(BOOL)isPrivateDataMigrationCleanupEnabled;
-(NSString *)breakingNewsChannelID;
-(long long)articleRapidUpdatesTimeout;
-(NSArray *)hiddenFeedIDs;
-(FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
-(long long)minimumDurationBetweenForYouGroupsWeekday;
-(long long)minimumDurationBetweenForYouGroupsWeekend;
-(long long)minimumDurationBetweenTrendingGroupsWeekday;
-(long long)minimumDurationBetweenTrendingGroupsWeekend;
-(long long)expiredPaidSubscriptionGroupCutoffTime;
-(long long)maximumNumberOfExpiredPaidSubscriptionGroups;
-(long long)maximumTimesHeadlineInPaidSubscriptionGroup;
-(long long)maximumPaidSubscriptionGroupSizeiPad;
-(long long)maximumPaidSubscriptionGroupSizeiPhone;
-(BOOL)diversifyOptionalTopStories;
-(long long)optionalTopStoriesRefreshRate;
-(double)minimumTrendingUnseenRatio;
-(FCVideoGroupsConfig *)forYouVideoGroupsConfig;
-(double)endOfArticleMinPaidHeadlineRatio;
-(long long)endOfArticleMaxInaccessiblePaidArticleCount;
-(long long)minimumDistanceBetweenImageOnTopTiles;
-(NSString *)forYouRecordConfigID;
-(NSString *)experimentalizableFieldPostfix;
-(NSNumber *)currentTreatment;
-(long long)expirePinnedArticlesAfter;
-(id)appAnalyticsEndpointUrlForEnvironment:(unsigned long long)arg1 ;
-(BOOL)shouldShowAlternateHeadlines;
-(long long)singleTopicFeedMinFeedItemsPerRequest;
-(long long)singleChannelFeedMinFeedItemsPerRequest;
-(BOOL)isSpecialEventsMicaAnimationDisabled;
-(long long)maxRetriesForDroppedFeeds;
-(double)delayBeforeRetryingDroppedFeeds;
-(NSString *)magazinesConfigRecordID;
-(long long)subscriptionsPlacardPublisherFrequencyInSeconds;
-(long long)subscriptionsPlacardGlobalMaximumPerDay;
-(long long)subscriptionsGracePeriodForTokenVerificationSeconds;
-(long long)entitlementsCacheRecoveryAttemptDurationInSeconds;
-(double)feedLineHeightMultiplier;
-(NSArray *)aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
-(NSString *)todayFeedKnobs;
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
-(FCPersonalizationTreatment *)cachedPersonalizationTreatment;
-(void)setExternalAnalyticsConfigurations:(NSArray *)arg1 ;
@end

