/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCTagStocksFields.h>
#import <libobjc.A.dylib/FCTagProviding.h>
#import <libobjc.A.dylib/FCChannelProviding.h>
#import <libobjc.A.dylib/FCSectionProviding.h>
#import <libobjc.A.dylib/FCTopicProviding.h>
#import <libobjc.A.dylib/FCFeedTheming.h>

@class NSString, NSDate, FCAssetHandle, FCColor, NSArray, NTPBPublisherPaidDescriptionStrings, FCPaywallConfiguration, NSData, FCSectionSupergroupKnobs, FCTagBanner, FCTextInfo, FCContentColorMap, FCHeadlineTemplate, FCInterestToken, NTPBFeedConfiguration, NTPBTagRecord;

@interface FCTag : NSObject <FCTagStocksFields, FCTagProviding, FCChannelProviding, FCSectionProviding, FCTopicProviding, FCFeedTheming> {

	BOOL _isPublic;
	BOOL _isDeprecated;
	BOOL _isExplicitContent;
	BOOL _isNotificationEnabled;
	BOOL _publisherPaidLeakyPaywallOptOut;
	BOOL _publisherPaidWebAccessOptIn;
	BOOL _hideAccessoryText;
	BOOL _isHidden;
	BOOL _isRealTimeTrackingEnabled;
	BOOL _isArticleReadCountReportingEnabled;
	BOOL _isAutoDarkModeEnabled;
	BOOL _isInternal;
	BOOL _isSandbox;
	BOOL _isLocal;
	NSString* _identifier;
	NSString* _versionKey;
	NSString* _name;
	NSString* _nameCompact;
	unsigned long long _tagType;
	long long _contentProvider;
	NSString* _primaryAudience;
	NSString* _replacementID;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	long long _score;
	long long _minimumNewsVersion;
	NSString* _subtitle;
	NSArray* _currentIssueIDs;
	NSString* _backIssuesListID;
	NSString* _language;
	NSString* _magazineGenre;
	FCAssetHandle* _nameImageAssetHandle;
	FCAssetHandle* _nameImageCompactAssetHandle;
	double _bannerImageScale;
	double _bannerImageBaselineOffsetPercentage;
	FCAssetHandle* _nameImageForDarkBackgroundAssetHandle;
	FCAssetHandle* _nameImageMaskAssetHandle;
	FCAssetHandle* _logoImageAssetHandle;
	FCAssetHandle* _coverImageAssetHandle;
	FCAssetHandle* _feedNavImageAssetHandle;
	FCTextInfo* _headlineTitleTextInfo;
	FCTextInfo* _headlineExcerptTextInfo;
	FCTextInfo* _headlineBylineTextInfo;
	NSString* _parentID;
	NSArray* _sectionIDs;
	NSString* _defaultSectionID;
	FCHeadlineTemplate* _defaultHeadlineTemplate;
	FCTagBanner* _bannerImageForWhiteBackground;
	FCTagBanner* _bannerImageForThemeBackground;
	FCTagBanner* _bannerImageForMask;
	FCTagBanner* _compactBannerImage;
	NSString* _publisherPaidAuthorizationURL;
	NSString* _publisherPaidVerificationURL;
	NSString* _publisherPaidWebAccessURL;
	NSArray* _publisherPaidFeldsparablePurchaseIDs;
	NSArray* _publisherPaidBundlePurchaseIDs;
	NSArray* _publisherPaidOfferableConfigurations;
	NTPBPublisherPaidDescriptionStrings* _publisherPaidDescriptionStrings;
	FCAssetHandle* _nameImageMaskWidgetLQAssetHandle;
	FCAssetHandle* _nameImageMaskWidgetHQAssetHandle;
	unsigned long long _groupingEligibility;
	NSArray* _publisherSpecifiedArticleIDs;
	NSDate* _publisherSpecifiedArticleIDsModifiedDate;
	FCPaywallConfiguration* _paidBundlePaywallConfiguration;
	NSString* _supergroupConfigJson;
	NSString* _supergroupKnobsJson;
	FCSectionSupergroupKnobs* _supergroupKnobs;
	NSString* _groupTitleColorHexString;
	NSString* _groupDarkStyleTitleColorHexString;
	FCContentColorMap* _contentColorMap;
	NSString* _pptFeedIDOverride;
	FCInterestToken* _tagInterestToken;
	unsigned long long _userFacingTagTypeOverride;
	NTPBFeedConfiguration* _feedConfiguration;
	NSArray* _sectionFeedConfigurations;
	NSString* _backgroundColorHexString;
	NSString* _darkStyleBackgroundColorHexString;
	NSString* _foregroundColorHexString;
	NSString* _darkStyleForegroundColorHexString;
	NSDate* _loadDate;
	NTPBTagRecord* _tagRecord;
	FCInterestToken* _tagRecordInterestToken;
	CGSize _nameImageSize;
	CGSize _nameImageForDarkBackgroundSize;
	CGSize _nameImageMaskSize;
	FCEdgeInsets _nameImageInsets;
	FCEdgeInsets _nameImageForDarkBackgroundInsets;
	FCEdgeInsets _nameImageMaskInsets;

}

@property (nonatomic,retain) FCInterestToken * tagInterestToken;                                                   //@synthesize tagInterestToken=_tagInterestToken - In the implementation block
@property (assign,nonatomic) unsigned long long userFacingTagTypeOverride;                                         //@synthesize userFacingTagTypeOverride=_userFacingTagTypeOverride - In the implementation block
@property (nonatomic,copy) NTPBFeedConfiguration * feedConfiguration;                                              //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * sectionFeedConfigurations;                                                    //@synthesize sectionFeedConfigurations=_sectionFeedConfigurations - In the implementation block
@property (nonatomic,copy) NSString * backgroundColorHexString;                                                    //@synthesize backgroundColorHexString=_backgroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * darkStyleBackgroundColorHexString;                                           //@synthesize darkStyleBackgroundColorHexString=_darkStyleBackgroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * foregroundColorHexString;                                                    //@synthesize foregroundColorHexString=_foregroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * darkStyleForegroundColorHexString;                                           //@synthesize darkStyleForegroundColorHexString=_darkStyleForegroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * groupTitleColorHexString;                                                    //@synthesize groupTitleColorHexString=_groupTitleColorHexString - In the implementation block
@property (nonatomic,copy) NSString * groupDarkStyleTitleColorHexString;                                           //@synthesize groupDarkStyleTitleColorHexString=_groupDarkStyleTitleColorHexString - In the implementation block
@property (nonatomic,retain) NSDate * loadDate;                                                                    //@synthesize loadDate=_loadDate - In the implementation block
@property (nonatomic,readonly) NTPBTagRecord * tagRecord;                                                          //@synthesize tagRecord=_tagRecord - In the implementation block
@property (nonatomic,readonly) FCInterestToken * tagRecordInterestToken;                                           //@synthesize tagRecordInterestToken=_tagRecordInterestToken - In the implementation block
@property (nonatomic,retain) FCAssetHandle * nameImageAssetHandle;                                                 //@synthesize nameImageAssetHandle=_nameImageAssetHandle - In the implementation block
@property (assign,nonatomic) CGSize nameImageSize;                                                                 //@synthesize nameImageSize=_nameImageSize - In the implementation block
@property (assign,nonatomic) double bannerImageScale;                                                              //@synthesize bannerImageScale=_bannerImageScale - In the implementation block
@property (assign,nonatomic) double bannerImageBaselineOffsetPercentage;                                           //@synthesize bannerImageBaselineOffsetPercentage=_bannerImageBaselineOffsetPercentage - In the implementation block
@property (nonatomic,copy) NSString * pptFeedIDOverride;                                                           //@synthesize pptFeedIDOverride=_pptFeedIDOverride - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * stocksFeedConfigJSON; 
@property (nonatomic,readonly) unsigned long long tagType;                                                         //@synthesize tagType=_tagType - In the implementation block
@property (nonatomic,readonly) unsigned long long userFacingTagType; 
@property (nonatomic,readonly) BOOL hideAccessoryText;                                                             //@synthesize hideAccessoryText=_hideAccessoryText - In the implementation block
@property (nonatomic,readonly) id<FCChannelProviding> asChannel; 
@property (nonatomic,readonly) id<FCSectionProviding> asSection; 
@property (nonatomic,readonly) id<FCTopicProviding> asTopic; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameCompact;                                                        //@synthesize nameCompact=_nameCompact - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionKey;                                                         //@synthesize versionKey=_versionKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                                                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) long long contentProvider;                                                          //@synthesize contentProvider=_contentProvider - In the implementation block
@property (nonatomic,readonly) BOOL isPublic;                                                                      //@synthesize isPublic=_isPublic - In the implementation block
@property (nonatomic,readonly) BOOL isDeprecated;                                                                  //@synthesize isDeprecated=_isDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL isExplicitContent;                                                             //@synthesize isExplicitContent=_isExplicitContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacementID;                                                      //@synthesize replacementID=_replacementID - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAudience;                                                    //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle;                                              //@synthesize coverImageAssetHandle=_coverImageAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * feedNavImageAssetHandle;                                            //@synthesize feedNavImageAssetHandle=_feedNavImageAssetHandle - In the implementation block
@property (nonatomic,copy,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,copy,readonly) FCColor * groupTitleColor; 
@property (nonatomic,copy,readonly) FCColor * groupDarkStyleTitleColor; 
@property (nonatomic,readonly) NSArray * iAdCategories;                                                            //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,readonly) NSArray * iAdKeywords;                                                              //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,readonly) NSArray * blockedStorefrontIDs;                                                     //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) NSArray * allowedStorefrontIDs;                                                     //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) long long score;                                                                    //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) long long minimumNewsVersion;                                                       //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,readonly) BOOL isNotificationEnabled;                                                         //@synthesize isNotificationEnabled=_isNotificationEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * magazineGenre;                                                      //@synthesize magazineGenre=_magazineGenre - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherPaidAuthorizationURL;                                      //@synthesize publisherPaidAuthorizationURL=_publisherPaidAuthorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherPaidVerificationURL;                                       //@synthesize publisherPaidVerificationURL=_publisherPaidVerificationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherPaidWebAccessURL;                                          //@synthesize publisherPaidWebAccessURL=_publisherPaidWebAccessURL - In the implementation block
@property (nonatomic,readonly) NSArray * publisherPaidFeldsparablePurchaseIDs;                                     //@synthesize publisherPaidFeldsparablePurchaseIDs=_publisherPaidFeldsparablePurchaseIDs - In the implementation block
@property (nonatomic,readonly) NSArray * publisherPaidBundlePurchaseIDs;                                           //@synthesize publisherPaidBundlePurchaseIDs=_publisherPaidBundlePurchaseIDs - In the implementation block
@property (nonatomic,readonly) NSArray * publisherPaidOfferableConfigurations;                                     //@synthesize publisherPaidOfferableConfigurations=_publisherPaidOfferableConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL publisherPaidLeakyPaywallOptOut;                                               //@synthesize publisherPaidLeakyPaywallOptOut=_publisherPaidLeakyPaywallOptOut - In the implementation block
@property (nonatomic,readonly) BOOL publisherPaidWebAccessOptIn;                                                   //@synthesize publisherPaidWebAccessOptIn=_publisherPaidWebAccessOptIn - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetLQAssetHandle;                                   //@synthesize nameImageMaskWidgetLQAssetHandle=_nameImageMaskWidgetLQAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetHQAssetHandle;                                   //@synthesize nameImageMaskWidgetHQAssetHandle=_nameImageMaskWidgetHQAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle;                                        //@synthesize nameImageCompactAssetHandle=_nameImageCompactAssetHandle - In the implementation block
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) NTPBPublisherPaidDescriptionStrings * publisherPaidDescriptionStrings;              //@synthesize publisherPaidDescriptionStrings=_publisherPaidDescriptionStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long groupingEligibility;                                             //@synthesize groupingEligibility=_groupingEligibility - In the implementation block
@property (nonatomic,readonly) BOOL isHidden;                                                                      //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,readonly) BOOL isRealTimeTrackingEnabled;                                                     //@synthesize isRealTimeTrackingEnabled=_isRealTimeTrackingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isArticleReadCountReportingEnabled;                                            //@synthesize isArticleReadCountReportingEnabled=_isArticleReadCountReportingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isAutoDarkModeEnabled;                                                         //@synthesize isAutoDarkModeEnabled=_isAutoDarkModeEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isInternal;                                                                    //@synthesize isInternal=_isInternal - In the implementation block
@property (nonatomic,readonly) BOOL isSandbox;                                                                     //@synthesize isSandbox=_isSandbox - In the implementation block
@property (nonatomic,readonly) BOOL isLocal;                                                                       //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs;                                             //@synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs - In the implementation block
@property (nonatomic,readonly) NSDate * publisherSpecifiedArticleIDsModifiedDate;                                  //@synthesize publisherSpecifiedArticleIDsModifiedDate=_publisherSpecifiedArticleIDsModifiedDate - In the implementation block
@property (nonatomic,readonly) id<FCTagStocksFields> stocksFields; 
@property (nonatomic,copy,readonly) FCPaywallConfiguration * paidBundlePaywallConfiguration;                       //@synthesize paidBundlePaywallConfiguration=_paidBundlePaywallConfiguration - In the implementation block
@property (nonatomic,readonly) NSData * backingTagRecordData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * sectionIDs;                                                          //@synthesize sectionIDs=_sectionIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultSectionID;                                                   //@synthesize defaultSectionID=_defaultSectionID - In the implementation block
@property (nonatomic,readonly) BOOL supportsNotifications; 
@property (nonatomic,readonly) BOOL isWhitelisted; 
@property (nonatomic,copy,readonly) NSArray * currentIssueIDs;                                                     //@synthesize currentIssueIDs=_currentIssueIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * backIssuesListID;                                                   //@synthesize backIssuesListID=_backIssuesListID - In the implementation block
@property (nonatomic,readonly) NSString * supergroupKnobsJson;                                                     //@synthesize supergroupKnobsJson=_supergroupKnobsJson - In the implementation block
@property (nonatomic,readonly) NSString * supergroupConfigJson;                                                    //@synthesize supergroupConfigJson=_supergroupConfigJson - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentID;                                                           //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) FCSectionSupergroupKnobs * supergroupKnobs;                                         //@synthesize supergroupKnobs=_supergroupKnobs - In the implementation block
@property (nonatomic,readonly) long long feedType; 
@property (nonatomic,readonly) BOOL isWhite; 
@property (nonatomic,readonly) BOOL isDark; 
@property (nonatomic,readonly) FCTagBanner * defaultBannerImage; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForWhiteBackground;                                        //@synthesize bannerImageForWhiteBackground=_bannerImageForWhiteBackground - In the implementation block
@property (nonatomic,readonly) FCTagBanner * bannerImageForThemeBackground;                                        //@synthesize bannerImageForThemeBackground=_bannerImageForThemeBackground - In the implementation block
@property (nonatomic,readonly) FCTagBanner * bannerImageForMask;                                                   //@synthesize bannerImageForMask=_bannerImageForMask - In the implementation block
@property (nonatomic,readonly) FCTagBanner * compactBannerImage;                                                   //@synthesize compactBannerImage=_compactBannerImage - In the implementation block
@property (nonatomic,copy,readonly) FCTextInfo * headlineTitleTextInfo;                                            //@synthesize headlineTitleTextInfo=_headlineTitleTextInfo - In the implementation block
@property (nonatomic,copy,readonly) FCTextInfo * headlineExcerptTextInfo;                                          //@synthesize headlineExcerptTextInfo=_headlineExcerptTextInfo - In the implementation block
@property (nonatomic,copy,readonly) FCTextInfo * headlineBylineTextInfo;                                           //@synthesize headlineBylineTextInfo=_headlineBylineTextInfo - In the implementation block
@property (nonatomic,readonly) FCColor * backgroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleBackgroundColor; 
@property (nonatomic,readonly) FCColor * foregroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleForegroundColor; 
@property (nonatomic,readonly) FCContentColorMap * contentColorMap;                                                //@synthesize contentColorMap=_contentColorMap - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * logoImageAssetHandle;                                               //@synthesize logoImageAssetHandle=_logoImageAssetHandle - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets nameImageInsets;                                                       //@synthesize nameImageInsets=_nameImageInsets - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageForDarkBackgroundAssetHandle;                              //@synthesize nameImageForDarkBackgroundAssetHandle=_nameImageForDarkBackgroundAssetHandle - In the implementation block
@property (nonatomic,readonly) CGSize nameImageForDarkBackgroundSize;                                              //@synthesize nameImageForDarkBackgroundSize=_nameImageForDarkBackgroundSize - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets nameImageForDarkBackgroundInsets;                                      //@synthesize nameImageForDarkBackgroundInsets=_nameImageForDarkBackgroundInsets - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskAssetHandle;                                           //@synthesize nameImageMaskAssetHandle=_nameImageMaskAssetHandle - In the implementation block
@property (nonatomic,readonly) CGSize nameImageMaskSize;                                                           //@synthesize nameImageMaskSize=_nameImageMaskSize - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets nameImageMaskInsets;                                                   //@synthesize nameImageMaskInsets=_nameImageMaskInsets - In the implementation block
@property (nonatomic,readonly) NSArray * loadableFonts; 
@property (nonatomic,readonly) FCHeadlineTemplate * defaultHeadlineTemplate;                                       //@synthesize defaultHeadlineTemplate=_defaultHeadlineTemplate - In the implementation block
@property (nonatomic,readonly) BOOL allowCustomBottomStyle; 
-(FCEdgeInsets)nameImageInsets;
-(FCColor *)darkStyleBackgroundColor;
-(id<FCTopicProviding>)asTopic;
-(FCAssetHandle *)nameImageMaskAssetHandle;
-(NTPBTagRecord *)tagRecord;
-(BOOL)isLocal;
-(BOOL)isInternal;
-(void)setDarkStyleBackgroundColorHexString:(NSString *)arg1 ;
-(NSString *)publisherPaidWebAccessURL;
-(id<FCFeedTheming>)theme;
-(BOOL)isArticleReadCountReportingEnabled;
-(long long)feedType;
-(id)purchaseOfferableConfigurationsFromProtobufList:(id)arg1 ;
-(FCTagBanner *)bannerImageForMask;
-(NSArray *)sectionIDs;
-(NSString *)groupTitleColorHexString;
-(void)ppt_overrideFeedID:(id)arg1 ;
-(NSArray *)currentIssueIDs;
-(NSArray *)sectionFeedConfigurations;
-(BOOL)isRealTimeTrackingEnabled;
-(FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
-(NSString *)backIssuesListID;
-(BOOL)isNotificationEnabled;
-(BOOL)isHidden;
-(CGSize)nameImageForDarkBackgroundSize;
-(void)setGroupDarkStyleTitleColorHexString:(NSString *)arg1 ;
-(void)setGroupTitleColorHexString:(NSString *)arg1 ;
-(FCAssetHandle *)coverImageAssetHandle;
-(NSDate *)loadDate;
-(void)setUserFacingTagTypeOverride:(unsigned long long)arg1 ;
-(FCColor *)foregroundColor;
-(id)prefetchPurchaseOffer;
-(NSString *)magazineGenre;
-(FCSectionSupergroupKnobs *)supergroupKnobs;
-(void)setNameImageAssetHandle:(FCAssetHandle *)arg1 ;
-(long long)score;
-(NSString *)foregroundColorHexString;
-(FCTextInfo *)headlineExcerptTextInfo;
-(NSString *)darkStyleBackgroundColorHexString;
-(FCColor *)groupTitleColor;
-(double)bannerImageBaselineOffsetPercentage;
-(NSString *)articleRecirculationConfigJSON;
-(FCInterestToken *)tagRecordInterestToken;
-(NSArray *)publisherSpecifiedArticleIDs;
-(CGSize)nameImageMaskSize;
-(NSString *)subtitle;
-(FCTagBanner *)compactBannerImage;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5 ;
-(void)setTagInterestToken:(FCInterestToken *)arg1 ;
-(void)setBackgroundColorHexString:(NSString *)arg1 ;
-(id)paidFeedIDForBin:(long long)arg1 ;
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3 ;
-(void)setFeedConfiguration:(NTPBFeedConfiguration *)arg1 ;
-(id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3 nameImageMaskAssetHandle:(id)arg4 ;
-(NSArray *)iAdCategories;
-(NSDate *)publisherSpecifiedArticleIDsModifiedDate;
-(BOOL)isNoLongerAvailable;
-(BOOL)publisherPaidLeakyPaywallOptOut;
-(void)setSectionFeedConfigurations:(NSArray *)arg1 ;
-(FCColor *)backgroundColor;
-(id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id<FCTagStocksFields>)stocksFields;
-(NSString *)defaultSectionID;
-(NSString *)name;
-(NSArray *)loadableFonts;
-(void)_inflateFromJSONDictionary:(id)arg1 ;
-(id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(NSArray *)publisherPaidOfferableConfigurations;
-(NSString *)publisherPaidAuthorizationURL;
-(long long)contentProvider;
-(NSString *)description;
-(id<FCChannelProviding>)asChannel;
-(FCTagBanner *)bannerImageForThemeBackground;
-(void)_inflateFromJSONDictionary:(id)arg1 withVersion:(long long)arg2 ;
-(void)setBannerImageScale:(double)arg1 ;
-(FCTagBanner *)bannerImageForWhiteBackground;
-(BOOL)isSubscribable;
-(BOOL)isExplicitContent;
-(id<FCSectionProviding>)asSection;
-(BOOL)isEqualToTag:(id)arg1 ;
-(FCColor *)groupDarkStyleTitleColor;
-(FCTextInfo *)headlineBylineTextInfo;
-(FCColor *)darkStyleForegroundColor;
-(BOOL)isWhite;
-(NSData *)data;
-(BOOL)_isValidScheme:(id)arg1 ;
-(id)initWithData:(id)arg1 context:(id)arg2 ;
-(NSString *)stocksFeedConfigJSON;
-(NSString *)replacementID;
-(NSString *)supergroupKnobsJson;
-(unsigned long long)userFacingTagTypeOverride;
-(id)authorizationURL;
-(FCContentColorMap *)contentColorMap;
-(id)feedIDForBin:(long long)arg1 ;
-(BOOL)isAuthenticationSetup;
-(BOOL)supportsNotifications;
-(FCAssetHandle *)nameImageAssetHandle;
-(FCEdgeInsets)nameImageMaskInsets;
-(NSString *)primaryAudience;
-(NSString *)parentID;
-(NSString *)pptFeedIDOverride;
-(BOOL)isAutoDarkModeEnabled;
-(void)_inflateFromVersionlessJSONDictionary:(id)arg1 ;
-(FCTextInfo *)headlineTitleTextInfo;
-(FCInterestToken *)tagInterestToken;
-(NSString *)groupDarkStyleTitleColorHexString;
-(unsigned long long)hash;
-(FCAssetHandle *)feedNavImageAssetHandle;
-(NSArray *)iAdKeywords;
-(BOOL)hideAccessoryText;
-(NSString *)versionKey;
-(void)setLoadDate:(NSDate *)arg1 ;
-(unsigned long long)groupingEligibility;
-(id)_feedConfigurationForSection:(id)arg1 ;
-(NTPBFeedConfiguration *)feedConfiguration;
-(void)setNameImageSize:(CGSize)arg1 ;
-(BOOL)isWhitelisted;
-(id)freeFeedIDForBin:(long long)arg1 ;
-(BOOL)isDeprecated;
-(NSString *)identifier;
-(NSArray *)allowedStorefrontIDs;
-(NSArray *)publisherPaidFeldsparablePurchaseIDs;
-(BOOL)isSandbox;
-(unsigned long long)userFacingTagType;
-(FCPaywallConfiguration *)paidBundlePaywallConfiguration;
-(NSString *)nameCompact;
-(CGSize)nameImageSize;
-(BOOL)isDark;
-(FCAssetHandle *)logoImageAssetHandle;
-(double)bannerImageScale;
-(unsigned long long)tagType;
-(NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
-(id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 ;
-(FCEdgeInsets)nameImageForDarkBackgroundInsets;
-(NSArray *)blockedStorefrontIDs;
-(BOOL)isPublic;
-(void)setDarkStyleForegroundColorHexString:(NSString *)arg1 ;
-(id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2 ;
-(NSString *)supergroupConfigJson;
-(FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
-(NSArray *)publisherPaidBundlePurchaseIDs;
-(NSData *)backingTagRecordData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2 ;
-(void)setForegroundColorHexString:(NSString *)arg1 ;
-(FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
-(BOOL)isPurchaseSetup;
-(void)setBannerImageBaselineOffsetPercentage:(double)arg1 ;
-(FCHeadlineTemplate *)defaultHeadlineTemplate;
-(BOOL)publisherPaidWebAccessOptIn;
-(FCTagBanner *)defaultBannerImage;
-(void)setPptFeedIDOverride:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isBlockedExplicitContent;
-(NSString *)backgroundColorHexString;
-(long long)minimumNewsVersion;
-(BOOL)allowCustomBottomStyle;
-(NSString *)darkStyleForegroundColorHexString;
-(NSString *)publisherPaidVerificationURL;
@end

