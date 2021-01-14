/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>

@protocol FCChannelProviding;
@class NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCTopStoriesStyleConfiguration, FCCoverArt, FCArticleAudioTrack, FCAssetManager, NSDictionary, NSData;

@interface FCNotificationArticleHeadline : FCHeadline {

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
	BOOL _paid;
	BOOL _webEmbedsEnabled;
	BOOL _bundlePaid;
	BOOL _issueOnly;
	BOOL _showBundleSoftPaywall;
	BOOL _useTransparentNavigationBar;
	NSString* _versionIdentifier;
	NSString* _identifier;
	NSString* _articleID;
	NSString* _referencedArticleID;
	NSString* _clusterID;
	unsigned long long _contentType;
	NSString* _title;
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
	NSString* _shortExcerpt;
	NSString* _accessoryText;
	NSURL* _contentURL;
	NSDate* _lastModifiedDate;
	NSDate* _lastFetchedDate;
	NSArray* _topics;
	NSArray* _topicIDs;
	NSURL* _videoURL;
	double _videoDuration;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _iAdSectionIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	NSArray* _relatedArticleIDs;
	NSArray* _moreFromPublisherArticleIDs;
	NSArray* _publisherSpecifiedArticleIDs;
	NSString* _articleRecirculationConfigJSON;
	unsigned long long _storyType;
	FCTopStoriesStyleConfiguration* _storyStyle;
	long long _minimumNewsVersion;
	FCCoverArt* _coverArt;
	unsigned long long _role;
	long long _bodyTextLength;
	NSArray* _linkedArticleIDs;
	NSArray* _linkedIssueIDs;
	NSString* _callToActionText;
	NSString* _surfacedByArticleListID;
	FCArticleAudioTrack* _narrativeTrack;
	FCArticleAudioTrack* _narrativeTrackSample;
	NSString* _narrativeTrackTextRanges;
	NSString* _layeredThumbnailJSON;
	double _layeredThumbnailAspectRatio;
	FCAssetManager* _assetManager;
	NSDictionary* _articlePayload;
	NSString* _flintDocumentUrlString;
	NSData* _flintDocumentPrefetchedData;
	NSArray* _flintFontResourceIDs;
	NSString* _changeEtag;
	CGRect _thumbnailFocalFrame;

}

@property (nonatomic,retain) FCAssetManager * assetManager;                     //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) NSDictionary * articlePayload;                     //@synthesize articlePayload=_articlePayload - In the implementation block
@property (nonatomic,retain) NSString * flintDocumentUrlString;                 //@synthesize flintDocumentUrlString=_flintDocumentUrlString - In the implementation block
@property (nonatomic,retain) NSData * flintDocumentPrefetchedData;              //@synthesize flintDocumentPrefetchedData=_flintDocumentPrefetchedData - In the implementation block
@property (nonatomic,retain) NSArray * flintFontResourceIDs;                    //@synthesize flintFontResourceIDs=_flintFontResourceIDs - In the implementation block
@property (nonatomic,retain) NSString * changeEtag;                             //@synthesize changeEtag=_changeEtag - In the implementation block
-(void)setBundlePaid:(BOOL)arg1 ;
-(id)moreFromPublisherArticleIDs;
-(id)contentURL;
-(unsigned long long)storyType;
-(id)narrativeTrackTextRanges;
-(void)setStoryStyle:(id)arg1 ;
-(BOOL)isBoundToContext;
-(BOOL)isPressRelease;
-(NSData *)flintDocumentPrefetchedData;
-(void)setShortExcerpt:(id)arg1 ;
-(NSDictionary *)articlePayload;
-(void)setSponsored:(BOOL)arg1 ;
-(id)thumbnail;
-(id)narrativeTrack;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 ;
-(long long)bodyTextLength;
-(void)setThumbnailUltraHQ:(id)arg1 ;
-(id)lastModifiedDate;
-(id)articleRecirculationConfigJSON;
-(unsigned long long)contentType;
-(BOOL)isHiddenFromFeeds;
-(id)publisherSpecifiedArticleIDs;
-(void)setTitle:(id)arg1 ;
-(void)setRole:(unsigned long long)arg1 ;
-(id)topicIDs;
-(id)shortExcerpt;
-(id)referencedArticleID;
-(double)videoDuration;
-(NSString *)flintDocumentUrlString;
-(void)setAssetManager:(FCAssetManager *)arg1 ;
-(BOOL)isDraft;
-(BOOL)isFeatureCandidate;
-(id)articleID;
-(long long)publisherArticleVersion;
-(id)iAdCategories;
-(BOOL)hasThumbnail;
-(NSString *)changeEtag;
-(id)contentManifestWithContext:(id)arg1 ;
-(BOOL)isIssueOnly;
-(id)topics;
-(BOOL)isPaid;
-(void)setChangeEtag:(NSString *)arg1 ;
-(id)relatedArticleIDs;
-(BOOL)webEmbedsEnabled;
-(void)setSourceName:(id)arg1 ;
-(BOOL)isDeleted;
-(void)setFlintDocumentPrefetchedData:(NSData *)arg1 ;
-(id)thumbnailMedium;
-(void)setSourceChannel:(id)arg1 ;
-(void)setClusterID:(id)arg1 ;
-(BOOL)isValid;
-(void)setSurfacedByArticleListID:(id)arg1 ;
-(id)accessoryText;
-(id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2 ;
-(long long)backendArticleVersion;
-(id)thumbnailLQ;
-(id)surfacedByArticleListID;
-(id)coverArt;
-(BOOL)useTransparentNavigationBar;
-(void)setThumbnailLQ:(id)arg1 ;
-(BOOL)isLocalDraft;
-(id)storyStyle;
-(id)callToActionText;
-(NSArray *)flintFontResourceIDs;
-(id)thumbnailHQ;
-(id)thumbnailUltraHQ;
-(void)setFlintFontResourceIDs:(NSArray *)arg1 ;
-(id)primaryAudience;
-(void)setArticleID:(id)arg1 ;
-(FCAssetManager *)assetManager;
-(id)narrativeTrackSample;
-(BOOL)showBundleSoftPaywall;
-(void)setTopicIDs:(id)arg1 ;
-(id)iAdKeywords;
-(id)videoURL;
-(void)setThumbnailMedium:(id)arg1 ;
-(void)setCallToActionText:(id)arg1 ;
-(void)setArticlePayload:(NSDictionary *)arg1 ;
-(BOOL)isBundlePaid;
-(void)setContentType:(unsigned long long)arg1 ;
-(void)setThumbnailHQ:(id)arg1 ;
-(id)lastFetchedDate;
-(id)publishDate;
-(void)setIdentifier:(id)arg1 ;
-(BOOL)showMinimalChrome;
-(BOOL)needsRapidUpdates;
-(id)identifier;
-(id)allowedStorefrontIDs;
-(BOOL)isSponsored;
-(BOOL)isHiddenFromAutoFavorites;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setAccessoryText:(id)arg1 ;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(id)blockedStorefrontIDs;
-(unsigned long long)role;
-(id)iAdSectionIDs;
-(double)layeredThumbnailAspectRatio;
-(void)setStoryType:(unsigned long long)arg1 ;
-(void)setFlintDocumentUrlString:(NSString *)arg1 ;
-(id)clusterID;
-(id)linkedArticleIDs;
-(void)setThumbnail:(id)arg1 ;
-(id)sourceChannel;
-(id)sourceName;
-(id)layeredThumbnailJSON;
-(id)linkedIssueIDs;
-(id)versionIdentifier;
-(void)setPaid:(BOOL)arg1 ;
-(void)setPublishDate:(id)arg1 ;
-(id)title;
-(CGRect)thumbnailFocalFrame;
-(long long)minimumNewsVersion;
-(id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 prefetchedData:(id)arg2 withAssetManager:(id)arg3 ;
@end

