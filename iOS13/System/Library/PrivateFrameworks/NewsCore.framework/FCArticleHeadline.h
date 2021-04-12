/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>
#import <libobjc.A.dylib/FCHeadlineStocksFields.h>
#import <libobjc.A.dylib/FCArticleAccessCheckable.h>

@protocol FCChannelProviding;
@class NSString, FCHeadlineExperimentalTitleMetadata, NSDate, FCHeadlineThumbnail, NSURL, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCIssue, FCTopStoriesStyleConfiguration, FCCoverArt, NTPBArticleRecord, FCInterestToken;

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields, FCArticleAccessCheckable> {

	BOOL _hasThumbnail;
	BOOL _sponsored;
	BOOL _deleted;
	BOOL _isDraft;
	BOOL _isLocalDraft;
	BOOL _featureCandidate;
	BOOL _needsRapidUpdates;
	BOOL _showMinimalChrome;
	BOOL _boundToContext;
	BOOL _hiddenFromFeeds;
	BOOL _pressRelease;
	BOOL _hiddenFromAutoFavorites;
	BOOL _webEmbedsEnabled;
	BOOL _issueOnly;
	BOOL _paid;
	BOOL _bundlePaid;
	BOOL _canBePurchased;
	BOOL _showBundleSoftPaywall;
	BOOL _useTransparentNavigationBar;
	NSString* _versionIdentifier;
	NSString* _identifier;
	NSString* _articleID;
	NSString* _referencedArticleID;
	NSString* _clusterID;
	unsigned long long _contentType;
	NSString* _title;
	NSString* _titleCompact;
	FCHeadlineExperimentalTitleMetadata* _experimentalTitleMetadata;
	NSString* _primaryAudience;
	NSDate* _publishDate;
	long long _publisherArticleVersion;
	long long _backendArticleVersion;
	id<FCChannelProviding> _sourceChannel;
	NSString* _sourceName;
	FCHeadlineThumbnail* _thumbnailLQ;
	FCHeadlineThumbnail* _thumbnail;
	FCHeadlineThumbnail* _thumbnailMedium;
	FCHeadlineThumbnail* _thumbnailHQ;
	FCHeadlineThumbnail* _thumbnailUltraHQ;
	FCHeadlineThumbnail* _thumbnailWidgetLQ;
	FCHeadlineThumbnail* _thumbnailWidget;
	FCHeadlineThumbnail* _thumbnailWidgetHQ;
	NSString* _shortExcerpt;
	NSString* _accessoryText;
	NSURL* _contentURL;
	NSDate* _lastModifiedDate;
	NSDate* _lastFetchedDate;
	NSArray* _topics;
	NSArray* _topicIDs;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _publisherCohorts;
	NSURL* _videoURL;
	double _videoDuration;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _iAdSectionIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	NSArray* _relatedArticleIDs;
	NSArray* _moreFromPublisherArticleIDs;
	FCIssue* _masterIssue;
	unsigned long long _storyType;
	FCTopStoriesStyleConfiguration* _storyStyle;
	long long _minimumNewsVersion;
	FCCoverArt* _coverArt;
	NSString* _videoCallToActionTitle;
	NSURL* _videoCallToActionURL;
	NSString* _language;
	unsigned long long _role;
	unsigned long long _halfLife;
	NSArray* _linkedArticleIDs;
	NSArray* _linkedIssueIDs;
	long long _bodyTextLength;
	NTPBArticleRecord* _articleRecord;
	FCInterestToken* _articleInterestToken;
	long long _behaviorFlags;
	CGRect _thumbnailFocalFrame;

}

@property (nonatomic,retain) NTPBArticleRecord * articleRecord;                        //@synthesize articleRecord=_articleRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * articleInterestToken;                   //@synthesize articleInterestToken=_articleInterestToken - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long behaviorFlags;                                  //@synthesize behaviorFlags=_behaviorFlags - In the implementation block
@property (nonatomic,copy,readonly) NSString * stocksClusterID; 
@property (nonatomic,copy,readonly) NSString * stocksMetadataJSON; 
@property (nonatomic,copy,readonly) NSString * stocksScoresJSON; 
@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel;              //@synthesize sourceChannel=_sourceChannel - In the implementation block
@property (nonatomic,readonly) BOOL isDraft;                                           //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,readonly) BOOL isLocalDraft;                                      //@synthesize isLocalDraft=_isLocalDraft - In the implementation block
@property (nonatomic,readonly) long long minimumNewsVersion;                           //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (getter=isPaid,nonatomic,readonly) BOOL paid;                                //@synthesize paid=_paid - In the implementation block
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid;                    //@synthesize bundlePaid=_bundlePaid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs;                    //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs;                    //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
+(BOOL)_fakeArticlesTimestamp;
+(BOOL)_forceArticlesToBeShownAsSponsored;
+(BOOL)_simulateTopStoriesBadges;
-(id)init;
-(unsigned long long)role;
-(NSString *)identifier;
-(id)publisherID;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(BOOL)hasThumbnail;
-(id)contentURL;
-(id)language;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(id)versionIdentifier;
-(BOOL)isDeleted;
-(void)setRole:(unsigned long long)arg1 ;
-(id)thumbnail;
-(void)setThumbnail:(id)arg1 ;
-(id)lastModifiedDate;
-(id)sourceName;
-(void)setSourceName:(id)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(id)topics;
-(id)publishDate;
-(void)setPublishDate:(id)arg1 ;
-(id)videoURL;
-(double)videoDuration;
-(BOOL)isDraft;
-(BOOL)isPaid;
-(id)accessoryText;
-(void)setClusterID:(id)arg1 ;
-(id)clusterID;
-(id)lastFetchedDate;
-(id<FCChannelProviding>)sourceChannel;
-(BOOL)isBundlePaid;
-(id)articleID;
-(void)setArticleID:(id)arg1 ;
-(id)contentManifestWithContext:(id)arg1 ;
-(id)primaryAudience;
-(id)shortExcerpt;
-(id)topicIDs;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(id)iAdCategories;
-(id)iAdKeywords;
-(id)iAdSectionIDs;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isLocalDraft;
-(BOOL)useTransparentNavigationBar;
-(BOOL)webEmbedsEnabled;
-(unsigned long long)storyType;
-(BOOL)isHiddenFromFeeds;
-(id)globalCohorts;
-(unsigned long long)halfLife;
-(BOOL)isHiddenFromAutoFavorites;
-(id)publisherCohorts;
-(long long)bodyTextLength;
-(id)articleRecirculationConfigJSON;
-(id)referencedArticleID;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(CGRect)thumbnailFocalFrame;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(id)thumbnailLQ;
-(void)setThumbnailLQ:(id)arg1 ;
-(id)thumbnailMedium;
-(void)setThumbnailMedium:(id)arg1 ;
-(id)thumbnailHQ;
-(void)setThumbnailHQ:(id)arg1 ;
-(id)thumbnailUltraHQ;
-(void)setThumbnailUltraHQ:(id)arg1 ;
-(void)setShortExcerpt:(id)arg1 ;
-(void)setAccessoryText:(id)arg1 ;
-(void)setTopicIDs:(id)arg1 ;
-(void)setSponsored:(BOOL)arg1 ;
-(id)relatedArticleIDs;
-(id)moreFromPublisherArticleIDs;
-(void)setStoryType:(unsigned long long)arg1 ;
-(id)storyStyle;
-(void)setStoryStyle:(id)arg1 ;
-(BOOL)needsRapidUpdates;
-(BOOL)showMinimalChrome;
-(BOOL)isBoundToContext;
-(BOOL)isPressRelease;
-(long long)minimumNewsVersion;
-(id)coverArt;
-(BOOL)isIssueOnly;
-(BOOL)showBundleSoftPaywall;
-(id)masterIssue;
-(NTPBArticleRecord *)articleRecord;
-(BOOL)canBePurchased;
-(void)setTitleCompact:(id)arg1 ;
-(void)setBehaviorFlags:(long long)arg1 ;
-(id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 masterIssue:(id)arg4 storyStyleConfigs:(id)arg5 storyTypeTimeout:(long long)arg6 rapidUpdatesTimeout:(long long)arg7 assetManager:(id)arg8 experimentalTitleProvider:(id)arg9 ;
-(void)setArticleRecord:(NTPBArticleRecord *)arg1 ;
-(id)titleCompact;
-(id)thumbnailWidgetLQ;
-(id)thumbnailWidget;
-(id)thumbnailWidgetHQ;
-(id)videoCallToActionTitle;
-(id)videoCallToActionURL;
-(id)publisherSpecifiedArticleIDs;
-(id)stocksFields;
-(id)backingArticleRecordData;
-(id)experimentalTitleMetadata;
-(id)linkedArticleIDs;
-(id)linkedIssueIDs;
-(void)setHalfLife:(unsigned long long)arg1 ;
-(long long)behaviorFlags;
-(NSString *)stocksClusterID;
-(NSString *)stocksMetadataJSON;
-(NSString *)stocksScoresJSON;
-(id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 masterIssue:(id)arg3 assetManager:(id)arg4 ;
-(FCInterestToken *)articleInterestToken;
-(void)setArticleInterestToken:(FCInterestToken *)arg1 ;
@end

