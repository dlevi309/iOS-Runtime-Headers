/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSArray;

@interface FCPaidBundleConfiguration : NSObject <NSCopying> {

	NSDictionary* _configDict;
	NSString* _storefrontID;
	NSString* _localizedStorefrontID;
	NSArray* _defaultSupportedStoreFronts;
	NSDictionary* _paywallConfigurationsByType;
	NSDictionary* _magazineGenresByGenre;
	NSDictionary* _subscriptionButtonConfigurationsByType;

}

@property (getter=isFreeBadgeEnabled,nonatomic,readonly) BOOL freeBadgeEnabled; 
@property (getter=isPaidBadgeEnabled,nonatomic,readonly) BOOL paidBadgeEnabled; 
@property (nonatomic,retain) NSDictionary * configDict;                                                                        //@synthesize configDict=_configDict - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                                                                   //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedStorefrontID;                                                          //@synthesize localizedStorefrontID=_localizedStorefrontID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSupportedStoreFronts;                                                     //@synthesize defaultSupportedStoreFronts=_defaultSupportedStoreFronts - In the implementation block
@property (nonatomic,retain) NSDictionary * paywallConfigurationsByType;                                                       //@synthesize paywallConfigurationsByType=_paywallConfigurationsByType - In the implementation block
@property (nonatomic,retain) NSDictionary * magazineGenresByGenre;                                                             //@synthesize magazineGenresByGenre=_magazineGenresByGenre - In the implementation block
@property (nonatomic,retain) NSDictionary * subscriptionButtonConfigurationsByType;                                            //@synthesize subscriptionButtonConfigurationsByType=_subscriptionButtonConfigurationsByType - In the implementation block
@property (getter=isPaidBundleVisible,nonatomic,readonly) BOOL paidBundleVisible; 
@property (getter=isTemporaryAccessEnabled,nonatomic,readonly) BOOL temporaryAccessEnabled; 
@property (getter=isSharingIssuesEnabled,nonatomic,readonly) BOOL sharingIssuesEnabled; 
@property (getter=areMagazinesEnabled,nonatomic,readonly) BOOL magazinesEnabled; 
@property (getter=isFamilySharingSetupEnabled,nonatomic,readonly) BOOL familySharingSetupEnabled; 
@property (nonatomic,readonly) NSString * defaultLandingPageArticleID; 
@property (nonatomic,readonly) NSString * renewalLandingPageArticleID; 
@property (nonatomic,readonly) NSString * familySharingLandingPageArticleID; 
@property (nonatomic,readonly) NSString * endOfPurchaseFamilySharingSetupArticleID; 
@property (nonatomic,readonly) NSString * endOfPurchaseNoFamilySharingSetupArticleID; 
@property (nonatomic,readonly) NSArray * restorableBundlePurchaseIDs; 
@property (nonatomic,readonly) NSArray * offeredBundlePurchaseIDs; 
@property (nonatomic,readonly) long long newIssuesCheckLocalTime; 
@property (nonatomic,readonly) long long newIssuesNotificationDeliveryLocalTime; 
@property (nonatomic,readonly) NSString * featuredArticlesTagList; 
@property (nonatomic,readonly) long long featuredArticlesFetchLimit; 
@property (nonatomic,readonly) NSString * recommendableIssuesTagList; 
@property (nonatomic,readonly) NSString * vanityURLMappingResourceID; 
@property (nonatomic,readonly) long long vanityURLMappingRefreshRate; 
@property (nonatomic,readonly) NSString * paidFeedID; 
@property (nonatomic,readonly) long long forYouMaxDailyPaidArticlesForFreeUsers; 
@property (nonatomic,readonly) long long forYouMaxMagazineGroupsForFreeUsers; 
@property (nonatomic,readonly) long long forYouMaxMagazineGroupsForTrialUsers; 
@property (nonatomic,readonly) long long forYouMaxMagazineGroupsForPaidUsers; 
@property (nonatomic,readonly) long long bundleSubscriptionsGlobalMeteredCount; 
@property (nonatomic,readonly) unsigned long long articleHardPaywallType; 
@property (nonatomic,readonly) unsigned long long magazineFeedPaywallType; 
@property (nonatomic,readonly) long long deferredHardPaywallMinimumBodyTextLength; 
@property (getter=isFreeBadgeEnabledForNonSubscribers,nonatomic,readonly) BOOL freeBadgeEnabledForNonSubscribers; 
@property (getter=isPaidBadgeEnabledForNonSubscribers,nonatomic,readonly) BOOL paidBadgeEnabledForNonSubscribers; 
@property (getter=isFreeBadgeEnabledForSubscribers,nonatomic,readonly) BOOL freeBadgeEnabledForSubscribers; 
@property (getter=isPaidBadgeEnabledForSubscribers,nonatomic,readonly) BOOL paidBadgeEnabledForSubscribers; 
@property (nonatomic,readonly) NSString * freeBadgeTitle; 
@property (nonatomic,readonly) NSString * paidBadgeTitle; 
@property (nonatomic,readonly) NSString * expirationAlertDescription; 
@property (nonatomic,readonly) long long feedAutoRefreshMinimumInterval; 
@property (nonatomic,readonly) long long normalStorageManualIssueDownloadTTL; 
@property (nonatomic,readonly) long long lowStorageManualIssueDownloadTTL; 
@property (nonatomic,readonly) long long criticalStorageManualIssueDownloadTTL; 
@property (nonatomic,readonly) long long normalStorageAutomaticIssueDownloadTTL; 
@property (nonatomic,readonly) long long lowStorageAutomaticIssueDownloadTTL; 
@property (nonatomic,readonly) long long criticalStorageAutomaticIssueDownloadTTL; 
@property (nonatomic,readonly) NSArray * groupWhitelistedTagIds; 
@property (nonatomic,readonly) long long entitlementsGracePeriodInSeconds; 
@property (getter=isCategoriesDownloadButtonEnabled,nonatomic,readonly) BOOL categoriesDownloadButtonEnabled; 
@property (nonatomic,readonly) long long recentIssuesMaxAge; 
@property (nonatomic,readonly) long long minimumReadIssuesInMyMagazines; 
@property (nonatomic,readonly) long long minimumArticlesInANFIssueBeforeRead; 
@property (nonatomic,readonly) long long minimumPagesInPDFIssueBeforeRead; 
@property (nonatomic,readonly) long long minimumArticlesBeforeArticleSoftPaywall; 
@property (nonatomic,readonly) long long entitlementsCacheExpiredGracePeriodInSeconds; 
@property (nonatomic,readonly) long long minFollowedMagazinesToHideSuggestionsCompact; 
@property (nonatomic,readonly) long long minFollowedMagazinesToHideSuggestionsRegular; 
@property (nonatomic,readonly) unsigned long long appLaunchUpsellPaidVisibility; 
@property (nonatomic,readonly) NSString * appLaunchUpsellInstanceID; 
@property (nonatomic,readonly) NSString * appLaunchUpsellArticleID; 
@property (nonatomic,readonly) long long appLaunchUpsellRequiredAppLaunchCount; 
@property (nonatomic,readonly) long long appLaunchUpsellNewSessionBackgroundTimeInterval; 
+(id)defaultLandingPageByLocalizedStorefrontID;
+(id)defaultFamilySharingLandingPageByLocalizedStorefrontID;
+(id)defaultEndOfPurchaseFamilySharingSetupArticleIDByLocalizedStorefrontID;
+(id)defaultEndOfPurchaseNoFamilySharingSetupArticleIDByLocalizedStorefrontID;
+(id)renewalLandingPageByLocalizedStorefrontID;
+(id)defaultTagListIDByLocalizedStorefrontID;
+(id)defaultVanityURLMappingResourceIDByLocalizedStorefrontID;
+(id)defaultPaidFeedIDByLocalizedStorefrontID;
+(id)defaultConfigurationForStorefrontID:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storefrontID;
-(long long)recentIssuesMaxAge;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSArray *)restorableBundlePurchaseIDs;
-(NSString *)paidFeedID;
-(BOOL)areMagazinesEnabled;
-(NSString *)localizedStorefrontID;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 localizedStorefrontID:(id)arg3 defaultSupportedStoreFronts:(id)arg4 ;
-(long long)entitlementsCacheExpiredGracePeriodInSeconds;
-(long long)entitlementsGracePeriodInSeconds;
-(NSString *)recommendableIssuesTagList;
-(long long)forYouMaxDailyPaidArticlesForFreeUsers;
-(NSString *)featuredArticlesTagList;
-(NSArray *)offeredBundlePurchaseIDs;
-(NSDictionary *)configDict;
-(id)defaultPaywallConfigs;
-(id)defaultSubscriptionButtonConfigs;
-(NSDictionary *)paywallConfigurationsByType;
-(id)defaultMagazineGenres;
-(NSArray *)defaultSupportedStoreFronts;
-(NSString *)defaultLandingPageArticleID;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 ;
-(NSDictionary *)subscriptionButtonConfigurationsByType;
-(unsigned long long)articleHardPaywallType;
-(unsigned long long)magazineFeedPaywallType;
-(NSDictionary *)magazineGenresByGenre;
-(long long)deferredHardPaywallMinimumBodyTextLength;
-(BOOL)isPaidBundleVisible;
-(BOOL)isTemporaryAccessEnabled;
-(BOOL)isSharingIssuesEnabled;
-(BOOL)isFamilySharingSetupEnabled;
-(NSString *)familySharingLandingPageArticleID;
-(NSString *)endOfPurchaseFamilySharingSetupArticleID;
-(NSString *)endOfPurchaseNoFamilySharingSetupArticleID;
-(NSString *)renewalLandingPageArticleID;
-(long long)newIssuesCheckLocalTime;
-(long long)newIssuesNotificationDeliveryLocalTime;
-(long long)featuredArticlesFetchLimit;
-(NSString *)vanityURLMappingResourceID;
-(long long)vanityURLMappingRefreshRate;
-(NSString *)expirationAlertDescription;
-(long long)forYouMaxMagazineGroupsForFreeUsers;
-(long long)forYouMaxMagazineGroupsForTrialUsers;
-(long long)forYouMaxMagazineGroupsForPaidUsers;
-(long long)bundleSubscriptionsGlobalMeteredCount;
-(BOOL)isFreeBadgeEnabledForNonSubscribers;
-(BOOL)isPaidBadgeEnabledForNonSubscribers;
-(BOOL)isFreeBadgeEnabledForSubscribers;
-(BOOL)isPaidBadgeEnabledForSubscribers;
-(NSString *)freeBadgeTitle;
-(NSString *)paidBadgeTitle;
-(long long)feedAutoRefreshMinimumInterval;
-(long long)normalStorageManualIssueDownloadTTL;
-(long long)normalStorageAutomaticIssueDownloadTTL;
-(long long)lowStorageManualIssueDownloadTTL;
-(long long)lowStorageAutomaticIssueDownloadTTL;
-(long long)criticalStorageManualIssueDownloadTTL;
-(long long)criticalStorageAutomaticIssueDownloadTTL;
-(NSArray *)groupWhitelistedTagIds;
-(BOOL)isCategoriesDownloadButtonEnabled;
-(long long)minimumReadIssuesInMyMagazines;
-(long long)minimumArticlesInANFIssueBeforeRead;
-(long long)minimumPagesInPDFIssueBeforeRead;
-(long long)minimumArticlesBeforeArticleSoftPaywall;
-(long long)minFollowedMagazinesToHideSuggestionsCompact;
-(long long)minFollowedMagazinesToHideSuggestionsRegular;
-(unsigned long long)appLaunchUpsellPaidVisibility;
-(NSString *)appLaunchUpsellInstanceID;
-(NSString *)appLaunchUpsellArticleID;
-(long long)appLaunchUpsellRequiredAppLaunchCount;
-(long long)appLaunchUpsellNewSessionBackgroundTimeInterval;
-(void)setConfigDict:(NSDictionary *)arg1 ;
-(void)setPaywallConfigurationsByType:(NSDictionary *)arg1 ;
-(void)setMagazineGenresByGenre:(NSDictionary *)arg1 ;
-(void)setSubscriptionButtonConfigurationsByType:(NSDictionary *)arg1 ;
-(BOOL)isFreeBadgeEnabled;
-(BOOL)isPaidBadgeEnabled;
@end

