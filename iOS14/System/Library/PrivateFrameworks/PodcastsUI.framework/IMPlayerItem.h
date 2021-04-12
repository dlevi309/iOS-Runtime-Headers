/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@protocol OS_dispatch_queue;
#import <PodcastsUI/PodcastsUI-Structs.h>
@class AVURLAsset, NSString, NSURL, IMPlayerManifest, NSUUID, NSArray, NSObject, MPNowPlayingContentItem;

@interface IMPlayerItem : NSObject {

	BOOL _video;
	BOOL _areChaptersLoaded;
	BOOL _areChaptersLoading;
	AVURLAsset* _asset;
	NSString* _title;
	NSString* _album;
	NSString* _author;
	NSURL* _url;
	double _duration;
	double _playhead;
	IMPlayerManifest* _manifest;
	unsigned long long _manifestIndex;
	NSUUID* _instanceIdentifier;
	NSArray* _chapters;
	NSObject*<OS_dispatch_queue> _chapterLoadingQueue;
	MPNowPlayingContentItem* _contentItem;

}

@property (nonatomic,retain) NSArray * chapters;                                            //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) BOOL areChaptersLoading;                                       //@synthesize areChaptersLoading=_areChaptersLoading - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> chapterLoadingQueue;              //@synthesize chapterLoadingQueue=_chapterLoadingQueue - In the implementation block
@property (nonatomic,retain) MPNowPlayingContentItem * contentItem;                         //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,retain) NSUUID * instanceIdentifier;                                   //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                   //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL areChaptersLoaded;                                        //@synthesize areChaptersLoaded=_areChaptersLoaded - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * album;                                                //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * author;                                               //@synthesize author=_author - In the implementation block
@property (assign,setter=setIsVideo:,getter=isVideo,nonatomic) BOOL video;                  //@synthesize video=_video - In the implementation block
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) AVURLAsset * asset;                                          //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double playhead;                                               //@synthesize playhead=_playhead - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * timeChapters; 
@property (nonatomic,__weak,readonly) NSArray * metadataChapters; 
@property (assign,nonatomic,__weak) IMPlayerManifest * manifest;                            //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic) unsigned long long manifestIndex;                              //@synthesize manifestIndex=_manifestIndex - In the implementation block
+(id)createAssetForUrl:(id)arg1 ;
-(BOOL)isLocal;
-(BOOL)isPlayable;
-(id)artworkIdentifier;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(NSArray *)chapters;
-(id)externalMetadata;
-(AVURLAsset *)asset;
-(id)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContentItem:(MPNowPlayingContentItem *)arg1 ;
-(NSURL *)url;
-(NSUUID *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSUUID *)arg1 ;
-(MPNowPlayingContentItem *)contentItem;
-(BOOL)isAssetLoaded;
-(IMPlayerManifest *)manifest;
-(id)initWithAsset:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isVideo;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setIsVideo:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)reset;
-(void)setChapters:(NSArray *)arg1 ;
-(void)updateActivity:(id)arg1 ;
-(id)contentItemIdentifier;
-(void)setManifest:(IMPlayerManifest *)arg1 ;
-(double)duration;
-(double)playhead;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)invalidateAsset;
-(BOOL)notifyUserIsNotPlayable;
-(NSArray *)timeChapters;
-(void)cleanupAfterError;
-(void)setPlayhead:(double)arg1 ;
-(void)setAreChaptersLoaded:(BOOL)arg1 ;
-(void)recreateContentItem;
-(void)updateContentItem;
-(BOOL)areChaptersLoaded;
-(NSArray *)metadataChapters;
-(void)retrieveArtwork:(/*^block*/id)arg1 withSize:(CGSize)arg2 ;
-(void)loadChapters;
-(BOOL)areChaptersLoading;
-(void)setAreChaptersLoading:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)chapterLoadingQueue;
-(id)initWithUrl:(id)arg1 ;
-(void)beginLoadingArtworkForAVPlayerItem:(id)arg1 ;
-(BOOL)_isContentItemLoaded;
-(void)retrieveArtwork:(/*^block*/id)arg1 withSize:(CGSize)arg2 atTime:(double)arg3 ;
-(unsigned long long)manifestIndex;
-(void)setManifestIndex:(unsigned long long)arg1 ;
-(void)setChapterLoadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

