/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSDate, NSString, FCAssetHandle, FCColor, NSArray, NTPBPublisherPaidDescriptionStrings, FCPaywallConfiguration, NSData;


@protocol FCTagProviding <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tagType; 
@property (nonatomic,readonly) BOOL hideAccessoryText; 
@property (nonatomic,readonly) id<FCChannelProviding> asChannel; 
@property (nonatomic,readonly) id<FCSectionProviding> asSection; 
@property (nonatomic,readonly) id<FCTopicProviding> asTopic; 
@property (nonatomic,readonly) NSDate * loadDate; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameCompact; 
@property (nonatomic,copy,readonly) NSString * versionKey; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,readonly) long long contentProvider; 
@property (nonatomic,readonly) BOOL isPublic; 
@property (nonatomic,readonly) BOOL isDeprecated; 
@property (nonatomic,readonly) BOOL isExplicitContent; 
@property (nonatomic,copy,readonly) NSString * replacementID; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * feedNavImageAssetHandle; 
@property (nonatomic,copy,readonly) NSString * coverArticleListID; 
@property (nonatomic,copy,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,copy,readonly) FCColor * groupTitleColor; 
@property (nonatomic,copy,readonly) FCColor * groupDarkStyleTitleColor; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,readonly) NSArray * allowedStorefrontIDs; 
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) BOOL isNotificationEnabled; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * magazineGenre; 
@property (nonatomic,copy,readonly) NSString * publisherPaidAuthorizationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidVerificationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidWebAccessURL; 
@property (nonatomic,readonly) NSArray * publisherPaidFeldsparablePurchaseIDs; 
@property (nonatomic,readonly) NSArray * publisherPaidBundlePurchaseIDs; 
@property (nonatomic,readonly) NSArray * publisherPaidOfferableConfigurations; 
@property (nonatomic,readonly) BOOL publisherPaidLeakyPaywallOptOut; 
@property (nonatomic,readonly) BOOL publisherPaidWebAccessOptIn; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetLQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetHQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) NTPBPublisherPaidDescriptionStrings * publisherPaidDescriptionStrings; 
@property (nonatomic,readonly) unsigned long long groupingEligibility; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) BOOL isRealTimeTrackingEnabled; 
@property (nonatomic,readonly) BOOL isArticleReadCountReportingEnabled; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) NSDate * publisherSpecifiedArticleIDsModifiedDate; 
@property (nonatomic,readonly) id<FCTagStocksFields> stocksFields; 
@property (nonatomic,copy,readonly) FCPaywallConfiguration * paidBundlePaywallConfiguration; 
@property (nonatomic,readonly) NSData * backingTagRecordData; 
@optional
-(NSData *)backingTagRecordData;

@required
-(NSString *)name;
-(NSString *)identifier;
-(long long)score;
-(BOOL)isHidden;
-(NSString *)subtitle;
-(NSString *)language;
-(long long)contentProvider;
-(id<FCFeedTheming>)theme;
-(BOOL)isExplicitContent;
-(BOOL)isEqualToTag:(id)arg1;
-(unsigned long long)tagType;
-(BOOL)isNotificationEnabled;
-(NSDate *)loadDate;
-(NSString *)primaryAudience;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isDeprecated;
-(NSString *)replacementID;
-(id<FCSectionProviding>)asSection;
-(NSString *)publisherPaidVerificationURL;
-(FCColor *)groupTitleColor;
-(FCColor *)groupDarkStyleTitleColor;
-(id<FCChannelProviding>)asChannel;
-(id)freeFeedIDForBin:(long long)arg1;
-(id)feedIDForBin:(long long)arg1;
-(BOOL)isSubscribable;
-(BOOL)hideAccessoryText;
-(NSString *)articleRecirculationConfigJSON;
-(long long)minimumNewsVersion;
-(FCAssetHandle *)feedNavImageAssetHandle;
-(FCAssetHandle *)coverImageAssetHandle;
-(BOOL)isBlockedExplicitContent;
-(NSArray *)publisherSpecifiedArticleIDs;
-(id<FCTagStocksFields>)stocksFields;
-(BOOL)isPurchaseSetup;
-(NSString *)nameCompact;
-(NSString *)magazineGenre;
-(BOOL)isPublic;
-(NSString *)coverArticleListID;
-(NSString *)publisherPaidAuthorizationURL;
-(NSArray *)publisherPaidFeldsparablePurchaseIDs;
-(NSArray *)publisherPaidBundlePurchaseIDs;
-(BOOL)publisherPaidLeakyPaywallOptOut;
-(NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
-(NSString *)versionKey;
-(id)paidFeedIDForBin:(long long)arg1;
-(NSArray *)publisherPaidOfferableConfigurations;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(BOOL)isNoLongerAvailable;
-(BOOL)isAuthenticationSetup;
-(id)prefetchPurchaseOffer;
-(id)authorizationURL;
-(void)ppt_overrideFeedID:(id)arg1;
-(id<FCTopicProviding>)asTopic;
-(NSString *)publisherPaidWebAccessURL;
-(BOOL)publisherPaidWebAccessOptIn;
-(FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
-(FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
-(unsigned long long)groupingEligibility;
-(BOOL)isRealTimeTrackingEnabled;
-(BOOL)isArticleReadCountReportingEnabled;
-(NSDate *)publisherSpecifiedArticleIDsModifiedDate;
-(FCPaywallConfiguration *)paidBundlePaywallConfiguration;

@end

