/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineProviding.h>

@class NTPBFeedViewportHeadline, FCSharedStringIndex, NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCCoverArt, NSSet, FCFeedPersonalizedItemScoreProfile, FCTopStoriesStyleConfiguration, NSData, FCHeadlineExperimentalTitleMetadata, FCIssue, FCArticleAudioTrack, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector;

@interface FCDeflatedHeadline : NSObject <FCHeadlineProviding> {

	NTPBFeedViewportHeadline* _pbHeadline;
	FCSharedStringIndex* _sharedStrings;

}

@property (nonatomic,readonly) NTPBFeedViewportHeadline * pbHeadline;                                                          //@synthesize pbHeadline=_pbHeadline - In the implementation block
@property (nonatomic,readonly) FCSharedStringIndex * sharedStrings;                                                            //@synthesize sharedStrings=_sharedStrings - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * referencedArticleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleCompact; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) long long backendArticleVersion; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailMedium; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailUltraHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt; 
@property (nonatomic,copy,readonly) NSString * accessoryText; 
@property (nonatomic,copy,readonly) NSURL * contentURL; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate; 
@property (nonatomic,copy,readonly) NSArray * topics; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) double videoDuration; 
@property (getter=isFeatureCandidate,nonatomic,readonly) BOOL featureCandidate; 
@property (getter=isSponsored,nonatomic,readonly) BOOL sponsored; 
@property (getter=isDisplayingAsNativeAd,nonatomic,readonly) BOOL displayAsNativeAd; 
@property (nonatomic,copy,readonly) NSString * sponsoredBy; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,copy,readonly) NSArray * iAdKeywords; 
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL isDraft; 
@property (nonatomic,copy,readonly) NSString * localDraftPath; 
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) FCCoverArt * coverArt; 
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,readonly) BOOL needsRapidUpdates; 
@property (nonatomic,readonly) BOOL showMinimalChrome; 
@property (getter=isPressRelease,nonatomic,readonly) BOOL pressRelease; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (nonatomic,copy,readonly) NSString * surfacedBySectionID; 
@property (nonatomic,copy,readonly) NSString * surfacedByChannelID; 
@property (nonatomic,copy,readonly) NSString * surfacedByTopicID; 
@property (nonatomic,copy,readonly) NSString * surfacedByBinID; 
@property (nonatomic,copy,readonly) NSSet * surfacedByTagIDs; 
@property (nonatomic,readonly) double tileProminenceScore; 
@property (nonatomic,readonly) FCFeedPersonalizedItemScoreProfile * scoreProfile; 
@property (nonatomic,readonly) BOOL isTopStory; 
@property (nonatomic,readonly) unsigned long long topStoryType; 
@property (nonatomic,readonly) BOOL usesImageOnTopLayout; 
@property (nonatomic,readonly) unsigned long long feedOrder; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) unsigned long long storyType; 
@property (nonatomic,readonly) FCTopStoriesStyleConfiguration * storyStyle; 
@property (nonatomic,copy,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) BOOL showSubscriptionRequiredText; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) BOOL showPublisherLogo; 
@property (nonatomic,readonly) id<FCNativeAdProviding> associatedAd; 
@property (nonatomic,copy,readonly) NSString * nativeAdCampaignData; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) BOOL isFullTrackAvailableToAll; 
@property (nonatomic,readonly) unsigned long long role; 
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,readonly) id<FCHeadlineStocksFields> stocksFields; 
@property (nonatomic,readonly) NSData * backingArticleRecordData; 
@property (nonatomic,copy,readonly) FCHeadlineExperimentalTitleMetadata * experimentalTitleMetadata; 
@property (nonatomic,readonly) BOOL webEmbedsEnabled; 
@property (nonatomic,copy,readonly) FCIssue * masterIssue; 
@property (getter=isIssueOnly,nonatomic,readonly) BOOL issueOnly; 
@property (nonatomic,readonly) BOOL showBundleSoftPaywall; 
@property (nonatomic,copy,readonly) NSArray * linkedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * linkedIssueIDs; 
@property (nonatomic,copy,readonly) NSString * callToActionText; 
@property (nonatomic,readonly) BOOL isLocalDraft; 
@property (nonatomic,readonly) BOOL useTransparentNavigationBar; 
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrack; 
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrackSample; 
@property (nonatomic,readonly) NSString * narrativeTrackTextRanges; 
@property (nonatomic,copy,readonly) NSString * surfacedByArticleListID; 
@property (nonatomic,readonly) NSString * layeredThumbnailJSON; 
@property (nonatomic,readonly) double layeredThumbnailAspectRatio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long publisherArticleVersion; 
@property (nonatomic,readonly) BOOL canBePurchased; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * publisherConversionStats; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,readonly) BOOL hasAudioTrack; 
@property (nonatomic,readonly) BOOL isEvergreen; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVector; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVectorAlt; 
-(NSDate *)displayDate;
-(NSArray *)moreFromPublisherArticleIDs;
-(id)initWithPBHeadline:(id)arg1 sharedStrings:(id)arg2 ;
-(NSURL *)contentURL;
-(unsigned long long)storyType;
-(double)globalScore;
-(BOOL)isBoundToContext;
-(id)thumbnailWidgetLQTagged;
-(BOOL)isPressRelease;
-(BOOL)showPublisherLogo;
-(FCHeadlineThumbnail *)thumbnail;
-(unsigned long long)halfLife;
-(NSURL *)videoCallToActionURL;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(BOOL)canBePurchased;
-(BOOL)isDisplayingAsNativeAd;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)publisherConversionStats;
-(NSDate *)lastModifiedDate;
-(NSString *)articleRecirculationConfigJSON;
-(id<FCNativeAdProviding>)associatedAd;
-(FCHeadlineExperimentalTitleMetadata *)experimentalTitleMetadata;
-(unsigned long long)contentType;
-(BOOL)isHiddenFromFeeds;
-(NSArray *)publisherSpecifiedArticleIDs;
-(unsigned long long)feedHalfLifeMilliseconds;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(BOOL)isFromBlockedStorefront;
-(NSArray *)topicIDs;
-(NSString *)shortExcerpt;
-(NSString *)referencedArticleID;
-(double)videoDuration;
-(BOOL)isDraft;
-(BOOL)isFeatureCandidate;
-(NSString *)articleID;
-(long long)publisherArticleVersion;
-(NSArray *)iAdCategories;
-(BOOL)hasThumbnail;
-(FCSharedStringIndex *)sharedStrings;
-(NSString *)surfacedByBinID;
-(NSArray *)topics;
-(NTPBFeedViewportHeadline *)pbHeadline;
-(BOOL)isPaid;
-(NSArray *)relatedArticleIDs;
-(FCFeedPersonalizedItemScoreProfile *)scoreProfile;
-(NSString *)sourceFeedID;
-(BOOL)isDeleted;
-(NSString *)description;
-(NSString *)itemID;
-(FCHeadlineThumbnail *)thumbnailMedium;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVectorAlt;
-(NSString *)surfacedByTopicID;
-(NSString *)publisherID;
-(unsigned long long)publishDateMilliseconds;
-(BOOL)isExplicitContent;
-(NSString *)accessoryText;
-(long long)backendArticleVersion;
-(FCHeadlineThumbnail *)thumbnailLQ;
-(NSString *)surfacedByArticleListID;
-(FCCoverArt *)coverArt;
-(BOOL)useTransparentNavigationBar;
-(BOOL)isTopStory;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(NSString *)nativeAdCampaignData;
-(NSString *)callToActionText;
-(long long)feedElementType;
-(FCHeadlineThumbnail *)thumbnailHQ;
-(FCHeadlineThumbnail *)thumbnailUltraHQ;
-(NSString *)primaryAudience;
-(NSString *)sourceChannelID;
-(NSSet *)surfacedByTagIDs;
-(FCHeadlineThumbnail *)thumbnailWidgetLQ;
-(BOOL)isANF;
-(NSArray *)iAdKeywords;
-(NSURL *)videoURL;
-(id)thumbnailWidgetHQTagged;
-(BOOL)isBundlePaid;
-(BOOL)usesImageOnTopLayout;
-(NSString *)surfacedBySectionID;
-(BOOL)isFullTrackAvailableToAll;
-(double)tileProminenceScore;
-(NSDate *)lastFetchedDate;
-(NSDate *)publishDate;
-(NSString *)surfacedByChannelID;
-(BOOL)showMinimalChrome;
-(unsigned long long)feedOrder;
-(BOOL)needsRapidUpdates;
-(NSString *)identifier;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isSponsored;
-(NSString *)feedID;
-(unsigned long long)topStoryType;
-(BOOL)showSubscriptionRequiredText;
-(BOOL)isHiddenFromAutoFavorites;
-(BOOL)isGap;
-(NSString *)videoCallToActionTitle;
-(NSArray *)blockedStorefrontIDs;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(unsigned long long)role;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVector;
-(NSString *)localDraftPath;
-(double)globalUserFeedback;
-(NSArray *)iAdSectionIDs;
-(NSString *)titleCompact;
-(BOOL)hasGlobalUserFeedback;
-(NSString *)clusterID;
-(FCHeadlineThumbnail *)thumbnailWidgetHQ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FCChannelProviding>)sourceChannel;
-(id)thumbnailWidgetTagged;
-(NSString *)language;
-(NSString *)sourceName;
-(unsigned long long)articleContentType;
-(FCHeadlineThumbnail *)thumbnailWidget;
-(NSString *)versionIdentifier;
-(NSString *)title;
-(unsigned long long)order;
-(BOOL)hasVideo;
-(BOOL)isBlockedExplicitContent;
-(NSString *)sponsoredBy;
-(CGRect)thumbnailFocalFrame;
-(void)enumerateTopicConversionStatsWithBlock:(/*^block*/id)arg1 ;
-(long long)minimumNewsVersion;
@end

