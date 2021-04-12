/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIBaseMediaItem.h>

@class MPMediaItem, MPMediaLibrary, ML3Track, VUIPlaybackPositionInfo, NSURL;

@interface VUILibraryMediaItem_iOS : VUIBaseMediaItem {

	BOOL _bookmarkDisabled;
	long long _persistentID;
	MPMediaItem* _mpMediaItem;
	MPMediaLibrary* _mpMediaLibrary;
	ML3Track* _ml3Track;
	VUIPlaybackPositionInfo* _playbackPositionInfo;
	NSURL* _mediaItemURLInternal;

}

@property (assign,nonatomic) long long persistentID;                                      //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) ML3Track * ml3Track;                                         //@synthesize ml3Track=_ml3Track - In the implementation block
@property (nonatomic,retain) MPMediaItem * mpMediaItem;                                   //@synthesize mpMediaItem=_mpMediaItem - In the implementation block
@property (nonatomic,retain) VUIPlaybackPositionInfo * playbackPositionInfo;              //@synthesize playbackPositionInfo=_playbackPositionInfo - In the implementation block
@property (nonatomic,retain) NSURL * mediaItemURLInternal;                                //@synthesize mediaItemURLInternal=_mediaItemURLInternal - In the implementation block
@property (nonatomic,readonly) MPMediaLibrary * mpMediaLibrary;                           //@synthesize mpMediaLibrary=_mpMediaLibrary - In the implementation block
@property (nonatomic,readonly) id<TVImageLoader> imageLoader; 
@property (assign,nonatomic) BOOL bookmarkDisabled;                                       //@synthesize bookmarkDisabled=_bookmarkDisabled - In the implementation block
+(void)initialize;
-(void)setPersistentID:(long long)arg1 ;
-(id<TVImageLoader>)imageLoader;
-(long long)persistentID;
-(ML3Track *)ml3Track;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(id)initWithMPMediaItem:(id)arg1 ;
-(void)setBookmarkDisabled:(BOOL)arg1 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(MPMediaLibrary *)mpMediaLibrary;
-(NSURL *)mediaItemURLInternal;
-(void)setMediaItemURLInternal:(NSURL *)arg1 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpMediaItem;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(id)_localPlaybackFilePathURL;
-(MPMediaItem *)mpMediaItem;
-(BOOL)_supportsBookmarks;
-(VUIPlaybackPositionInfo *)playbackPositionInfo;
-(void)_schedulePlaybackPositionInfoPersistence;
-(void)setPlaybackPositionInfo:(VUIPlaybackPositionInfo *)arg1 ;
-(BOOL)bookmarkDisabled;
-(void)setMpMediaItem:(MPMediaItem *)arg1 ;
-(void)setMl3Track:(ML3Track *)arg1 ;
@end

