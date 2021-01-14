/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDisplayAssetUIView.h>
#import <libobjc.A.dylib/PXActivityCoordinatorItem.h>

@class PXVideoPlayerView, ISWrappedAVPlayer, AVPlayerItem, NSNumber, ISWrappedAVAudioSession, NSString;

@interface PXDisplayAssetLoopingVideoUIView : PXDisplayAssetUIView <PXActivityCoordinatorItem> {

	PXVideoPlayerView* _videoView;
	long long _requestID;
	unsigned long long _loadingIntervalID;
	unsigned long long _playbackIntervalID;
	id _timeObserver;
	BOOL _canLoadVideo;
	ISWrappedAVPlayer* _videoPlayer;
	AVPlayerItem* _videoPlayerItem;
	NSNumber* _queuePosition;
	ISWrappedAVAudioSession* _audioSession;
	double _videoLoadingProgress;

}

@property (nonatomic,retain) ISWrappedAVPlayer * videoPlayer;                                  //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) AVPlayerItem * videoPlayerItem;                                   //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (assign,nonatomic) BOOL canLoadVideo;                                                //@synthesize canLoadVideo=_canLoadVideo - In the implementation block
@property (nonatomic,retain) NSNumber * queuePosition;                                         //@synthesize queuePosition=_queuePosition - In the implementation block
@property (nonatomic,retain) ISWrappedAVAudioSession * audioSession;                           //@synthesize audioSession=_audioSession - In the implementation block
@property (assign,nonatomic) double videoLoadingProgress;                                      //@synthesize videoLoadingProgress=_videoLoadingProgress - In the implementation block
@property (assign,nonatomic) unsigned long long activityCoordinatorQueuePosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateContent;
-(void)imageProgressDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(BOOL)isDisplayingFullQualityContent;
-(void)isDisplayingFullQualityContentDidChange;
-(CGRect)currentContentsRect;
-(void)animatedContentEnabledDidChange;
-(void)contentModeDidChange;
-(void)_unloadVideo;
-(void)setVideoLoadingProgress:(double)arg1 ;
-(void)setCanLoadVideo:(BOOL)arg1 ;
-(void)setVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)arg1 ;
-(void)_loadVideo;
-(void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3 ;
-(void)_updateVideoPlayerPlayerItem;
-(void)_handleVideoPlayerTimeObserverWithTime:(SCD_Struct_PX8)arg1 ;
-(void)_updateVideoViewPlaceholderFilters;
-(void)_endPlaybackInterval;
-(void)_endLoadingInterval:(BOOL)arg1 ;
-(AVPlayerItem *)videoPlayerItem;
-(BOOL)canLoadVideo;
-(NSNumber *)queuePosition;
-(void)setQueuePosition:(NSNumber *)arg1 ;
-(double)videoLoadingProgress;
-(void)imageDidChange;
-(void)setVideoPlayer:(ISWrappedAVPlayer *)arg1 ;
-(double)loadingProgress;
-(ISWrappedAVPlayer *)videoPlayer;
-(long long)playbackStyle;
-(void)didMoveToWindow;
-(unsigned long long)activityCoordinatorQueuePosition;
-(void)setActivityCoordinatorQueuePosition:(unsigned long long)arg1 ;
-(void)setAudioSession:(ISWrappedAVAudioSession *)arg1 ;
-(void)_updateVideoViewContentMode;
-(id)currentImage;
-(id)contentView;
-(ISWrappedAVAudioSession *)audioSession;
-(void)dealloc;
@end

