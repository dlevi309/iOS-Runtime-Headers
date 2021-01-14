/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>
#import <libobjc.A.dylib/FCHeadlineStocksFields.h>
#import <libobjc.A.dylib/FCArticleAccessCheckable.h>

@protocol FCChannelProviding;
@class NSString, FCHeadlineExperimentalTitleMetadata, NSDate, FCHeadlineThumbnail, NSURL, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, FCIssue, FCTopStoriesStyleConfiguration, FCCoverArt, FCArticleAudioTrack, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, NTPBArticleRecord, FCInterestToken;

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
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _globalConversionStats;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _publisherConversionStats;
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
	FCArticleAudioTrack* _narrativeTrack;
	FCArticleAudioTrack* _narrativeTrackSample;
	NSString* _narrativeTrackTextRanges;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVector;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVectorAlt;
	NSString* _layeredThumbnailJSON;
	double _layeredThumbnailAspectRatio;
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
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs;                    //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs;                    //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
+(BOOL)_simulateTopStoriesBadges;
+(id)_tempOverrideMIMETypeForURL:(id)arg1 ;
+(BOOL)_forceArticlesToBeShownAsSponsored;
+(BOOL)_fakeArticlesTimestamp;
-(id)moreFromPublisherArticleIDs;
-(id)contentURL;
-(unsigned long long)storyType;
-(id)narrativeTrackTextRanges;
-(NSString *)stocksMetadataJSON;
-(void)setStoryStyle:(id)arg1 ;
-(BOOL)isBoundToContext;
-(BOOL)isPressRelease;
-(void)setShortExcerpt:(id)arg1 ;
-(id)init;
-(void)setSponsored:(BOOL)arg1 ;
-(id)thumbnail;
-(unsigned long long)halfLife;
-(id)narrativeTrack;
-(id)videoCallToActionURL;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(id)globalCohorts;
-(BOOL)canBePurchased;
-(long long)bodyTextLength;
-(void)setThumbnailUltraHQ:(id)arg1 ;
-(id)publisherConversionStats;
-(id)lastModifiedDate;
-(id)articleRecirculationConfigJSON;
-(id)experimentalTitleMetadata;
-(unsigned long long)contentType;
-(BOOL)isHiddenFromFeeds;
-(id)publisherSpecifiedArticleIDs;
-(id)publisherCohorts;
-(void)setTitle:(NSString *)arg1 ;
-(void)setRole:(unsigned long long)arg1 ;
-(id)topicIDs;
-(void)_adoptNarrativeTrackFromArticleRecord:(id)arg1 assetManager:(id)arg2 ;
-(id)shortExcerpt;
-(id)referencedArticleID;
-(double)videoDuration;
-(BOOL)isDraft;
-(BOOL)isFeatureCandidate;
-(id)articleID;
-(long long)publisherArticleVersion;
-(id)iAdCategories;
-(BOOL)hasThumbnail;
-(id)contentManifestWithContext:(id)arg1 ;
-(id)masterIssue;
-(BOOL)isIssueOnly;
-(long long)behaviorFlags;
-(id)topics;
-(BOOL)isPaid;
-(id)stocksFields;
-(id)relatedArticleIDs;
-(BOOL)webEmbedsEnabled;
-(void)setSourceName:(id)arg1 ;
-(BOOL)isDeleted;
-(id)thumbnailMedium;
-(id)personalizationVectorAlt;
-(void)setClusterID:(id)arg1 ;
-(id)publisherID;
-(void)setHalfLife:(unsigned long long)arg1 ;
-(id)accessoryText;
-(long long)backendArticleVersion;
-(id)thumbnailLQ;
-(id)coverArt;
-(BOOL)useTransparentNavigationBar;
-(void)setThumbnailLQ:(id)arg1 ;
-(BOOL)isLocalDraft;
-(id)storyStyle;
-(id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 masterIssue:(id)arg4 storyStyleConfigs:(id)arg5 storyTypeTimeout:(long long)arg6 rapidUpdatesTimeout:(long long)arg7 assetManager:(id)arg8 experimentalTitleProvider:(id)arg9 ;
-(void)setTitleCompact:(id)arg1 ;
-(id)thumbnailHQ;
-(id)thumbnailUltraHQ;
-(id)primaryAudience;
-(void)setArticleInterestToken:(FCInterestToken *)arg1 ;
-(void)setArticleID:(id)arg1 ;
-(id)narrativeTrackSample;
-(BOOL)showBundleSoftPaywall;
-(id)backingArticleRecordData;
-(id)thumbnailWidgetLQ;
-(void)setTopicIDs:(id)arg1 ;
-(id)iAdKeywords;
-(id)videoURL;
-(void)setThumbnailMedium:(id)arg1 ;
-(void)setBehaviorFlags:(long long)arg1 ;
-(BOOL)isBundlePaid;
-(void)setArticleRecord:(NTPBArticleRecord *)arg1 ;
-(void)setContentType:(unsigned long long)arg1 ;
-(void)setThumbnailHQ:(id)arg1 ;
-(NSString *)stocksScoresJSON;
-(id)lastFetchedDate;
-(NTPBArticleRecord *)articleRecord;
-(id)publishDate;
-(BOOL)showMinimalChrome;
-(BOOL)needsRapidUpdates;
-(NSString *)identifier;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isSponsored;
-(FCInterestToken *)articleInterestToken;
-(BOOL)isHiddenFromAutoFavorites;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setAccessoryText:(id)arg1 ;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(id)videoCallToActionTitle;
-(NSArray *)blockedStorefrontIDs;
-(id)globalConversionStats;
-(unsigned long long)role;
-(id)personalizationVector;
-(id)iAdSectionIDs;
-(NSString *)stocksClusterID;
-(double)layeredThumbnailAspectRatio;
-(void)setStoryType:(unsigned long long)arg1 ;
-(id)titleCompact;
-(id)clusterID;
-(id)thumbnailWidgetHQ;
-(id)linkedArticleIDs;
-(void)setThumbnail:(id)arg1 ;
-(id<FCChannelProviding>)sourceChannel;
-(id)language;
-(id)sourceName;
-(id)layeredThumbnailJSON;
-(id)linkedIssueIDs;
-(id)thumbnailWidget;
-(id)versionIdentifier;
-(void)setPublishDate:(id)arg1 ;
-(NSString *)title;
-(id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 masterIssue:(id)arg3 assetManager:(id)arg4 ;
-(CGRect)thumbnailFocalFrame;
-(long long)minimumNewsVersion;
-(BOOL)hasAudioTrack;
@end

