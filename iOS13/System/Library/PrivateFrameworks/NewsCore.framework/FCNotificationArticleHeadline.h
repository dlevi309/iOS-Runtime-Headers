/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>

@protocol FCChannelProviding;
@class NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCTopStoriesStyleConfiguration, FCCoverArt, FCAssetManager, NSDictionary, NSData;

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
	unsigned long long _storyType;
	FCTopStoriesStyleConfiguration* _storyStyle;
	long long _minimumNewsVersion;
	FCCoverArt* _coverArt;
	unsigned long long _role;
	long long _bodyTextLength;
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
-(BOOL)isValid;
-(unsigned long long)role;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(BOOL)hasThumbnail;
-(id)contentURL;
-(FCAssetManager *)assetManager;
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
-(void)setAssetManager:(FCAssetManager *)arg1 ;
-(void)setClusterID:(id)arg1 ;
-(id)clusterID;
-(id)lastFetchedDate;
-(id)sourceChannel;
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
-(id)blockedStorefrontIDs;
-(id)allowedStorefrontIDs;
-(BOOL)isLocalDraft;
-(BOOL)useTransparentNavigationBar;
-(BOOL)webEmbedsEnabled;
-(unsigned long long)storyType;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isHiddenFromAutoFavorites;
-(long long)bodyTextLength;
-(id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2 ;
-(NSString *)flintDocumentUrlString;
-(NSData *)flintDocumentPrefetchedData;
-(id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 prefetchedData:(id)arg2 withAssetManager:(id)arg3 ;
-(NSArray *)flintFontResourceIDs;
-(id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 ;
-(id)referencedArticleID;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(void)setSourceChannel:(id)arg1 ;
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
-(void)setPaid:(BOOL)arg1 ;
-(id)coverArt;
-(void)setBundlePaid:(BOOL)arg1 ;
-(BOOL)isIssueOnly;
-(BOOL)showBundleSoftPaywall;
-(NSDictionary *)articlePayload;
-(void)setArticlePayload:(NSDictionary *)arg1 ;
-(void)setFlintDocumentUrlString:(NSString *)arg1 ;
-(void)setFlintDocumentPrefetchedData:(NSData *)arg1 ;
-(void)setFlintFontResourceIDs:(NSArray *)arg1 ;
-(NSString *)changeEtag;
-(void)setChangeEtag:(NSString *)arg1 ;
@end

