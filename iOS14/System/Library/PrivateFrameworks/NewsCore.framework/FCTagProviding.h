/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSDate, NSString, FCAssetHandle, FCColor, NSArray, NTPBPublisherPaidDescriptionStrings, FCPaywallConfiguration, NSData;


@protocol FCTagProviding <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tagType; 
@property (nonatomic,readonly) unsigned long long userFacingTagType; 
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
@property (nonatomic,readonly) BOOL isAutoDarkModeEnabled; 
@property (nonatomic,readonly) BOOL isInternal; 
@property (nonatomic,readonly) BOOL isSandbox; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) NSDate * publisherSpecifiedArticleIDsModifiedDate; 
@property (nonatomic,readonly) id<FCTagStocksFields> stocksFields; 
@property (nonatomic,copy,readonly) FCPaywallConfiguration * paidBundlePaywallConfiguration; 
@property (nonatomic,readonly) NSData * backingTagRecordData; 
@optional
-(NSData *)backingTagRecordData;

@required
-(id<FCTopicProviding>)asTopic;
-(BOOL)isLocal;
-(BOOL)isInternal;
-(NSString *)publisherPaidWebAccessURL;
-(id<FCFeedTheming>)theme;
-(BOOL)isArticleReadCountReportingEnabled;
-(void)ppt_overrideFeedID:(id)arg1;
-(BOOL)isRealTimeTrackingEnabled;
-(FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
-(BOOL)isNotificationEnabled;
-(BOOL)isHidden;
-(FCAssetHandle *)coverImageAssetHandle;
-(NSDate *)loadDate;
-(id)prefetchPurchaseOffer;
-(NSString *)magazineGenre;
-(long long)score;
-(FCColor *)groupTitleColor;
-(NSString *)articleRecirculationConfigJSON;
-(NSArray *)publisherSpecifiedArticleIDs;
-(NSString *)subtitle;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(id)paidFeedIDForBin:(long long)arg1;
-(NSArray *)iAdCategories;
-(NSDate *)publisherSpecifiedArticleIDsModifiedDate;
-(BOOL)isNoLongerAvailable;
-(BOOL)publisherPaidLeakyPaywallOptOut;
-(id<FCTagStocksFields>)stocksFields;
-(NSString *)name;
-(NSArray *)publisherPaidOfferableConfigurations;
-(NSString *)publisherPaidAuthorizationURL;
-(long long)contentProvider;
-(id<FCChannelProviding>)asChannel;
-(BOOL)isSubscribable;
-(BOOL)isExplicitContent;
-(id<FCSectionProviding>)asSection;
-(BOOL)isEqualToTag:(id)arg1;
-(FCColor *)groupDarkStyleTitleColor;
-(NSString *)replacementID;
-(id)authorizationURL;
-(id)feedIDForBin:(long long)arg1;
-(BOOL)isAuthenticationSetup;
-(NSString *)primaryAudience;
-(BOOL)isAutoDarkModeEnabled;
-(FCAssetHandle *)feedNavImageAssetHandle;
-(NSArray *)iAdKeywords;
-(BOOL)hideAccessoryText;
-(NSString *)versionKey;
-(unsigned long long)groupingEligibility;
-(id)freeFeedIDForBin:(long long)arg1;
-(BOOL)isDeprecated;
-(NSString *)identifier;
-(NSArray *)allowedStorefrontIDs;
-(NSArray *)publisherPaidFeldsparablePurchaseIDs;
-(BOOL)isSandbox;
-(unsigned long long)userFacingTagType;
-(FCPaywallConfiguration *)paidBundlePaywallConfiguration;
-(NSString *)nameCompact;
-(unsigned long long)tagType;
-(NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
-(NSArray *)blockedStorefrontIDs;
-(BOOL)isPublic;
-(FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
-(NSArray *)publisherPaidBundlePurchaseIDs;
-(NSString *)language;
-(BOOL)isPurchaseSetup;
-(BOOL)publisherPaidWebAccessOptIn;
-(BOOL)isBlockedExplicitContent;
-(long long)minimumNewsVersion;
-(NSString *)publisherPaidVerificationURL;

@end

