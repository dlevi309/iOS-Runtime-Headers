/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineProviding.h>
#import <libobjc.A.dylib/FCFeedElement.h>

@protocol FCChannelProviding, FCNativeAdProviding, FCHeadlineStocksFields;
@class NSString, FCHeadlineThumbnail, FCHeadlineExperimentalTitleMetadata, NSArray, NSDate, NSURL, NSSet, FCFeedPersonalizedItemScoreProfile, FCTopStoriesStyleConfiguration, FCCoverArt, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSData, FCIssue;

@interface FCHeadline : NSObject <FCHeadlineProviding, FCFeedElement> {

	BOOL _hasThumbnail;
	BOOL _featureCandidate;
	BOOL _sponsored;
	BOOL _deleted;
	BOOL _isDraft;
	BOOL _isLocalDraft;
	BOOL _usesImageOnTopLayout;
	BOOL _needsRapidUpdates;
	BOOL _showMinimalChrome;
	BOOL _boundToContext;
	BOOL _hiddenFromFeeds;
	BOOL _pressRelease;
	BOOL _hiddenFromAutoFavorites;
	BOOL _paid;
	BOOL _showSubscriptionRequiredText;
	BOOL _canBePurchased;
	BOOL _webEmbedsEnabled;
	BOOL _displayAsNativeAd;
	BOOL _issueOnly;
	BOOL _showBundleSoftPaywall;
	BOOL _useTransparentNavigationBar;
	BOOL _bundlePaid;
	FCHeadlineThumbnail* _thumbnailLQ;
	FCHeadlineThumbnail* _thumbnail;
	FCHeadlineThumbnail* _thumbnailMedium;
	FCHeadlineThumbnail* _thumbnailHQ;
	FCHeadlineThumbnail* _thumbnailUltraHQ;
	FCHeadlineThumbnail* _thumbnailWidgetLQ;
	FCHeadlineThumbnail* _thumbnailWidget;
	FCHeadlineThumbnail* _thumbnailWidgetHQ;
	NSString* _title;
	FCHeadlineExperimentalTitleMetadata* _experimentalTitleMetadata;
	NSString* _articleID;
	NSString* _referencedArticleID;
	NSString* _clusterID;
	NSString* _primaryAudience;
	NSString* _shortExcerpt;
	NSArray* _topics;
	NSArray* _topicIDs;
	NSDate* _publishDate;
	long long _publisherArticleVersion;
	long long _backendArticleVersion;
	id<FCChannelProviding> _sourceChannel;
	NSString* _sourceName;
	NSURL* _contentURL;
	NSDate* _lastModifiedDate;
	NSDate* _lastFetchedDate;
	unsigned long long _contentType;
	NSURL* _videoURL;
	double _videoDuration;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _iAdSectionIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	NSString* _surfacedBySectionID;
	NSString* _surfacedByChannelID;
	NSString* _surfacedByTopicID;
	NSString* _surfacedByBinID;
	NSSet* _surfacedByTagIDs;
	NSString* _accessoryText;
	NSString* _callToActionText;
	NSString* _localDraftPath;
	FCFeedPersonalizedItemScoreProfile* _scoreProfile;
	double _personalizedScore;
	unsigned long long _topStoryType;
	NSArray* _relatedArticleIDs;
	NSArray* _moreFromPublisherArticleIDs;
	unsigned long long _storyType;
	FCTopStoriesStyleConfiguration* _storyStyle;
	long long _minimumNewsVersion;
	FCCoverArt* _coverArt;
	NSString* _videoCallToActionTitle;
	NSURL* _videoCallToActionURL;
	unsigned long long _feedOrder;
	double _globalUserFeedback;
	unsigned long long _halfLife;
	NSDate* _displayDate;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _publisherCohorts;
	NSString* _articleRecirculationConfigJSON;
	NSArray* _publisherSpecifiedArticleIDs;
	NSString* _language;
	NSString* _sponsoredBy;
	id<FCNativeAdProviding> _associatedAd;
	unsigned long long _role;
	id<FCHeadlineStocksFields> _stocksFields;
	NSData* _backingArticleRecordData;
	FCIssue* _masterIssue;
	long long _bodyTextLength;
	NSString* _identifier;
	NSURL* _headlineURL;
	NSString* _titleCompact;
	NSString* _excerpt;
	CGRect _thumbnailFocalFrame;

}

@property (nonatomic,copy) NSString * articleID;                                                                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                                                                  //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * headlineURL;                                                                   //@synthesize headlineURL=_headlineURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleCompact;                                                               //@synthesize titleCompact=_titleCompact - In the implementation block
@property (nonatomic,copy) id<FCChannelProviding> sourceChannel;                                                  //@synthesize sourceChannel=_sourceChannel - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                                 //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSDate * publishDate;                                                                  //@synthesize publishDate=_publishDate - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;                                                      //@synthesize contentType=_contentType - In the implementation block
@property (assign,getter=isSponsored,nonatomic) BOOL sponsored;                                                   //@synthesize sponsored=_sponsored - In the implementation block
@property (assign,getter=isDisplayingAsNativeAd,nonatomic) BOOL displayAsNativeAd;                                //@synthesize displayAsNativeAd=_displayAsNativeAd - In the implementation block
@property (nonatomic,copy) NSString * sponsoredBy;                                                                //@synthesize sponsoredBy=_sponsoredBy - In the implementation block
@property (assign,getter=isPaid,nonatomic) BOOL paid;                                                             //@synthesize paid=_paid - In the implementation block
@property (assign,getter=isBundlePaid,nonatomic) BOOL bundlePaid;                                                 //@synthesize bundlePaid=_bundlePaid - In the implementation block
@property (nonatomic,copy) NSString * accessoryText;                                                              //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,copy) NSString * callToActionText;                                                           //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,retain) id<FCNativeAdProviding> associatedAd;                                                //@synthesize associatedAd=_associatedAd - In the implementation block
@property (assign,nonatomic) CGRect thumbnailFocalFrame;                                                          //@synthesize thumbnailFocalFrame=_thumbnailFocalFrame - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnail;                                                                   //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailLQ;                                                   //@synthesize thumbnailLQ=_thumbnailLQ - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnail;                                                     //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailMedium;                                               //@synthesize thumbnailMedium=_thumbnailMedium - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailHQ;                                                   //@synthesize thumbnailHQ=_thumbnailHQ - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailUltraHQ;                                              //@synthesize thumbnailUltraHQ=_thumbnailUltraHQ - In the implementation block
@property (nonatomic,copy) NSString * excerpt;                                                                    //@synthesize excerpt=_excerpt - In the implementation block
@property (nonatomic,copy) NSString * shortExcerpt;                                                               //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,copy) NSArray * topicIDs;                                                                    //@synthesize topicIDs=_topicIDs - In the implementation block
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                                                       //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSString * surfacedBySectionID;                                                        //@synthesize surfacedBySectionID=_surfacedBySectionID - In the implementation block
@property (nonatomic,copy) NSString * surfacedByChannelID;                                                        //@synthesize surfacedByChannelID=_surfacedByChannelID - In the implementation block
@property (nonatomic,copy) NSString * surfacedByTopicID;                                                          //@synthesize surfacedByTopicID=_surfacedByTopicID - In the implementation block
@property (nonatomic,copy) NSString * surfacedByBinID;                                                            //@synthesize surfacedByBinID=_surfacedByBinID - In the implementation block
@property (nonatomic,copy) NSSet * surfacedByTagIDs;                                                              //@synthesize surfacedByTagIDs=_surfacedByTagIDs - In the implementation block
@property (assign,nonatomic) unsigned long long feedOrder;                                                        //@synthesize feedOrder=_feedOrder - In the implementation block
@property (assign,nonatomic) double globalUserFeedback;                                                           //@synthesize globalUserFeedback=_globalUserFeedback - In the implementation block
@property (assign,nonatomic) unsigned long long halfLife;                                                         //@synthesize halfLife=_halfLife - In the implementation block
@property (nonatomic,retain) FCFeedPersonalizedItemScoreProfile * scoreProfile;                                   //@synthesize scoreProfile=_scoreProfile - In the implementation block
@property (assign,nonatomic) double tileProminenceScore;                                                          //@synthesize personalizedScore=_personalizedScore - In the implementation block
@property (assign,nonatomic) BOOL usesImageOnTopLayout;                                                           //@synthesize usesImageOnTopLayout=_usesImageOnTopLayout - In the implementation block
@property (assign,nonatomic) unsigned long long topStoryType;                                                     //@synthesize topStoryType=_topStoryType - In the implementation block
@property (assign,nonatomic) unsigned long long role;                                                             //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL showSubscriptionRequiredText;                                                   //@synthesize showSubscriptionRequiredText=_showSubscriptionRequiredText - In the implementation block
@property (nonatomic,copy) NSDate * displayDate;                                                                  //@synthesize displayDate=_displayDate - In the implementation block
@property (assign,nonatomic) unsigned long long storyType;                                                        //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,retain) FCTopStoriesStyleConfiguration * storyStyle;                                         //@synthesize storyStyle=_storyStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                       //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts;                    //@synthesize publisherCohorts=_publisherCohorts - In the implementation block
@property (nonatomic,readonly) long long bodyTextLength;                                                          //@synthesize bodyTextLength=_bodyTextLength - In the implementation block
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) long long publisherArticleVersion;                                                 //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL canBePurchased;                                                               //@synthesize canBePurchased=_canBePurchased - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * referencedArticleID;                                               //@synthesize referencedArticleID=_referencedArticleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAudience;                                                   //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) long long backendArticleVersion;                                                   //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ;                                           //@synthesize thumbnailWidgetLQ=_thumbnailWidgetLQ - In the implementation block
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget;                                             //@synthesize thumbnailWidget=_thumbnailWidget - In the implementation block
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ;                                           //@synthesize thumbnailWidgetHQ=_thumbnailWidgetHQ - In the implementation block
@property (nonatomic,copy,readonly) NSURL * contentURL;                                                           //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                                                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate;                                                     //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topics;                                                             //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                                                  //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) double videoDuration;                                                              //@synthesize videoDuration=_videoDuration - In the implementation block
@property (getter=isFeatureCandidate,nonatomic,readonly) BOOL featureCandidate;                                   //@synthesize featureCandidate=_featureCandidate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iAdCategories;                                                      //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iAdKeywords;                                                        //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs;                                                      //@synthesize iAdSectionIDs=_iAdSectionIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs;                                               //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs;                                               //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) BOOL isDraft;                                                                      //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,copy,readonly) NSString * localDraftPath;                                                    //@synthesize localDraftPath=_localDraftPath - In the implementation block
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs;                                                  //@synthesize relatedArticleIDs=_relatedArticleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs;                                        //@synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs - In the implementation block
@property (nonatomic,readonly) FCCoverArt * coverArt;                                                             //@synthesize coverArt=_coverArt - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle;                                            //@synthesize videoCallToActionTitle=_videoCallToActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL;                                                 //@synthesize videoCallToActionURL=_videoCallToActionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                                                          //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL needsRapidUpdates;                                                            //@synthesize needsRapidUpdates=_needsRapidUpdates - In the implementation block
@property (nonatomic,readonly) BOOL showMinimalChrome;                                                            //@synthesize showMinimalChrome=_showMinimalChrome - In the implementation block
@property (getter=isPressRelease,nonatomic,readonly) BOOL pressRelease;                                           //@synthesize pressRelease=_pressRelease - In the implementation block
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext;                                       //@synthesize boundToContext=_boundToContext - In the implementation block
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds;                                     //@synthesize hiddenFromFeeds=_hiddenFromFeeds - In the implementation block
@property (nonatomic,readonly) BOOL isTopStory; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) BOOL showPublisherLogo; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON;                                         //@synthesize articleRecirculationConfigJSON=_articleRecirculationConfigJSON - In the implementation block
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs;                                            //@synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs - In the implementation block
@property (nonatomic,readonly) id<FCHeadlineStocksFields> stocksFields;                                           //@synthesize stocksFields=_stocksFields - In the implementation block
@property (nonatomic,readonly) NSData * backingArticleRecordData;                                                 //@synthesize backingArticleRecordData=_backingArticleRecordData - In the implementation block
@property (nonatomic,copy,readonly) FCHeadlineExperimentalTitleMetadata * experimentalTitleMetadata;              //@synthesize experimentalTitleMetadata=_experimentalTitleMetadata - In the implementation block
@property (nonatomic,readonly) BOOL webEmbedsEnabled;                                                             //@synthesize webEmbedsEnabled=_webEmbedsEnabled - In the implementation block
@property (nonatomic,copy,readonly) FCIssue * masterIssue;                                                        //@synthesize masterIssue=_masterIssue - In the implementation block
@property (getter=isIssueOnly,nonatomic,readonly) BOOL issueOnly;                                                 //@synthesize issueOnly=_issueOnly - In the implementation block
@property (nonatomic,readonly) BOOL showBundleSoftPaywall;                                                        //@synthesize showBundleSoftPaywall=_showBundleSoftPaywall - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * linkedIssueIDs; 
@property (nonatomic,readonly) BOOL isLocalDraft;                                                                 //@synthesize isLocalDraft=_isLocalDraft - In the implementation block
@property (nonatomic,readonly) BOOL useTransparentNavigationBar;                                                  //@synthesize useTransparentNavigationBar=_useTransparentNavigationBar - In the implementation block
+(id)emptyHeadlineWithIdentifier:(id)arg1 ;
+(id)emptyHeadline;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)role;
-(NSString *)identifier;
-(NSString *)publisherID;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)order;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(BOOL)hasThumbnail;
-(NSString *)itemID;
-(NSURL *)contentURL;
-(NSString *)language;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(NSString *)versionIdentifier;
-(BOOL)isDeleted;
-(void)setRole:(unsigned long long)arg1 ;
-(FCHeadlineThumbnail *)thumbnail;
-(void)setThumbnail:(FCHeadlineThumbnail *)arg1 ;
-(NSDate *)lastModifiedDate;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(NSArray *)topics;
-(NSString *)excerpt;
-(void)setExcerpt:(NSString *)arg1 ;
-(BOOL)hasVideo;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSURL *)videoURL;
-(double)videoDuration;
-(BOOL)isExplicitContent;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(NSDate *)displayDate;
-(BOOL)isDraft;
-(BOOL)isPaid;
-(NSString *)accessoryText;
-(void)setClusterID:(NSString *)arg1 ;
-(NSString *)clusterID;
-(NSDate *)lastFetchedDate;
-(id<FCChannelProviding>)sourceChannel;
-(BOOL)isBundlePaid;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSString *)feedID;
-(NSString *)localDraftPath;
-(id)contentManifestWithContext:(id)arg1 ;
-(NSString *)primaryAudience;
-(NSString *)shortExcerpt;
-(NSArray *)topicIDs;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSArray *)iAdSectionIDs;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isLocalDraft;
-(NSString *)surfacedByBinID;
-(BOOL)useTransparentNavigationBar;
-(BOOL)webEmbedsEnabled;
-(NSString *)surfacedBySectionID;
-(void)setSurfacedBySectionID:(NSString *)arg1 ;
-(NSString *)surfacedByChannelID;
-(void)setSurfacedByChannelID:(NSString *)arg1 ;
-(NSString *)surfacedByTopicID;
-(void)setSurfacedByTopicID:(NSString *)arg1 ;
-(void)setSurfacedByBinID:(NSString *)arg1 ;
-(NSSet *)surfacedByTagIDs;
-(void)setSurfacedByTagIDs:(NSSet *)arg1 ;
-(unsigned long long)topStoryType;
-(void)setTopStoryType:(unsigned long long)arg1 ;
-(double)tileProminenceScore;
-(void)setTileProminenceScore:(double)arg1 ;
-(NSString *)callToActionText;
-(void)setCallToActionText:(NSString *)arg1 ;
-(BOOL)usesImageOnTopLayout;
-(void)setUsesImageOnTopLayout:(BOOL)arg1 ;
-(void)overrideDisplayDate:(id)arg1 ;
-(unsigned long long)storyType;
-(void)assignStoryType:(unsigned long long)arg1 withConfiguration:(id)arg2 ;
-(BOOL)isHiddenFromFeeds;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(NSString *)sourceFeedID;
-(unsigned long long)halfLife;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)isANF;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(long long)bodyTextLength;
-(unsigned long long)publishDateMilliseconds;
-(NSString *)articleRecirculationConfigJSON;
-(NSString *)referencedArticleID;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(void)setSourceChannel:(id<FCChannelProviding>)arg1 ;
-(CGRect)thumbnailFocalFrame;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(FCHeadlineThumbnail *)thumbnailLQ;
-(void)setThumbnailLQ:(FCHeadlineThumbnail *)arg1 ;
-(FCHeadlineThumbnail *)thumbnailMedium;
-(void)setThumbnailMedium:(FCHeadlineThumbnail *)arg1 ;
-(FCHeadlineThumbnail *)thumbnailHQ;
-(void)setThumbnailHQ:(FCHeadlineThumbnail *)arg1 ;
-(FCHeadlineThumbnail *)thumbnailUltraHQ;
-(void)setThumbnailUltraHQ:(FCHeadlineThumbnail *)arg1 ;
-(void)setShortExcerpt:(NSString *)arg1 ;
-(void)setAccessoryText:(NSString *)arg1 ;
-(void)setTopicIDs:(NSArray *)arg1 ;
-(void)setSponsored:(BOOL)arg1 ;
-(NSArray *)relatedArticleIDs;
-(NSArray *)moreFromPublisherArticleIDs;
-(void)setStoryType:(unsigned long long)arg1 ;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(void)setStoryStyle:(FCTopStoriesStyleConfiguration *)arg1 ;
-(BOOL)needsRapidUpdates;
-(BOOL)showMinimalChrome;
-(BOOL)isBoundToContext;
-(BOOL)isPressRelease;
-(long long)minimumNewsVersion;
-(void)setPaid:(BOOL)arg1 ;
-(FCCoverArt *)coverArt;
-(void)setBundlePaid:(BOOL)arg1 ;
-(BOOL)isIssueOnly;
-(BOOL)showBundleSoftPaywall;
-(NSString *)sourceChannelID;
-(FCIssue *)masterIssue;
-(long long)feedElementType;
-(FCFeedPersonalizedItemScoreProfile *)scoreProfile;
-(unsigned long long)feedHalfLifeMilliseconds;
-(BOOL)isFromBlockedStorefront;
-(BOOL)canBePurchased;
-(void)setTitleCompact:(NSString *)arg1 ;
-(NSString *)titleCompact;
-(FCHeadlineThumbnail *)thumbnailWidgetLQ;
-(FCHeadlineThumbnail *)thumbnailWidget;
-(FCHeadlineThumbnail *)thumbnailWidgetHQ;
-(BOOL)isDisplayingAsNativeAd;
-(NSString *)sponsoredBy;
-(NSString *)videoCallToActionTitle;
-(NSURL *)videoCallToActionURL;
-(BOOL)isTopStory;
-(unsigned long long)feedOrder;
-(BOOL)showSubscriptionRequiredText;
-(BOOL)isBlockedExplicitContent;
-(BOOL)showPublisherLogo;
-(id<FCNativeAdProviding>)associatedAd;
-(NSArray *)publisherSpecifiedArticleIDs;
-(id<FCHeadlineStocksFields>)stocksFields;
-(NSData *)backingArticleRecordData;
-(FCHeadlineExperimentalTitleMetadata *)experimentalTitleMetadata;
-(BOOL)isGap;
-(unsigned long long)articleContentType;
-(void)setScoreProfile:(FCFeedPersonalizedItemScoreProfile *)arg1 ;
-(void)overrideTitle:(id)arg1 ;
-(void)overrideShortExcerpt:(id)arg1 ;
-(void)applyHeadlineMetadata:(id)arg1 configuration:(id)arg2 ;
-(void)setShowSubscriptionRequiredText:(BOOL)arg1 ;
-(void)setFeedOrder:(unsigned long long)arg1 ;
-(void)setGlobalUserFeedback:(double)arg1 ;
-(void)setHalfLife:(unsigned long long)arg1 ;
-(void)setDisplayAsNativeAd:(BOOL)arg1 ;
-(void)setSponsoredBy:(NSString *)arg1 ;
-(void)setAssociatedAd:(id<FCNativeAdProviding>)arg1 ;
-(NSURL *)headlineURL;
-(void)setHeadlineURL:(NSURL *)arg1 ;
@end

