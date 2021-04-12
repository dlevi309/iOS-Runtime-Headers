/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <libobjc.A.dylib/NUMediaPlayer.h>

@protocol OS_dispatch_group, OS_dispatch_queue, NURenderStatistics;
@class NUSurfaceRenderClient, NULivePhotoRenderClient, NUVideoRenderClient, UIView, NUCoalescer, NUObservatory, NSObject, NUResponse, NUComposition, NUColorSpace, NUPixelFormat, NUMediaView, NSArray, NUAVPlayerController, AVComposition, NSString;

@interface NUMediaViewRenderer : NSObject <NUMediaPlayer> {

	NUSurfaceRenderClient* _zoomClient;
	NUSurfaceRenderClient* _backfillClient;
	NULivePhotoRenderClient* _livePhotoClient;
	NUVideoRenderClient* _videoClient;
	UIView* _livePhotoView;
	NUCoalescer* _livePhotoUpdateCoalescer;
	NUCoalescer* _videoUpdateCoalescer;
	NUObservatory* _observatory;
	BOOL _canRenderLoopingVideoLive;
	long long _playbackMode;
	BOOL _muted;
	BOOL _didReleaseAVObjects;
	Ai _videoRenderInFlightCount;
	NSObject*<OS_dispatch_group> _renderGroup;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NUResponse* _zoomRenderResponse;
	NUResponse* _backfillRenderResponse;
	CGRect _lastZoomRect;
	double _lastZoomScale;
	double _lastZoomRenderTime;
	id<NURenderStatistics> _lastZoomRenderStatistics;
	id<NURenderStatistics> _lastBackfillRenderStatictics;
	BOOL _isPanning;
	BOOL _isZooming;
	BOOL __videoEnabled;
	NUComposition* _composition;
	NUColorSpace* _colorSpace;
	NUPixelFormat* _pixelFormat;
	NUMediaView* _mediaView;
	double _backingScale;
	NSArray* _pipelineFilters;
	double _maximumZoomScale;
	NUAVPlayerController* _nuAVPlayerController;
	unsigned long long _displayType;
	unsigned long long _computedDisplayType;
	AVComposition* _previousVideo;
	NSArray* _previousPipelineFilters;

}

@property (assign,setter=_setVideoEnabled:,getter=_isVideoEnabled,nonatomic) BOOL _videoEnabled;              //@synthesize _videoEnabled=__videoEnabled - In the implementation block
@property (nonatomic,retain) AVComposition * previousVideo;                                                   //@synthesize previousVideo=_previousVideo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * previousPipelineFilters;                                        //@synthesize previousPipelineFilters=_previousPipelineFilters - In the implementation block
@property (nonatomic,copy) NUComposition * composition;                                                       //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                                                       //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,retain) NUPixelFormat * pixelFormat;                                                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,__weak,readonly) NUMediaView * mediaView;                                                //@synthesize mediaView=_mediaView - In the implementation block
@property (assign,nonatomic) double backingScale;                                                             //@synthesize backingScale=_backingScale - In the implementation block
@property (nonatomic,copy) NSArray * pipelineFilters;                                                         //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (getter=isZoomedToFit,nonatomic,readonly) BOOL zoomedToFit; 
@property (assign,nonatomic) double maximumZoomScale;                                                         //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (readonly) BOOL isReady; 
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled; 
@property (nonatomic,readonly) NUAVPlayerController * nuAVPlayerController;                                   //@synthesize nuAVPlayerController=_nuAVPlayerController - In the implementation block
@property (assign,nonatomic) unsigned long long displayType;                                                  //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) unsigned long long computedDisplayType;                                        //@synthesize computedDisplayType=_computedDisplayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) SCD_Struct_NU0 mediaDuration; 
@property (nonatomic,readonly) SCD_Struct_NU0 currentTime; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackMode; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
+(BOOL)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4 isPlaying:(BOOL)arg5 ;
-(id)init;
-(void)pause;
-(void)removeObserver:(id)arg1 ;
-(void)wait;
-(BOOL)isReady;
-(NUColorSpace *)colorSpace;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUPixelFormat *)pixelFormat;
-(void)setPixelFormat:(NUPixelFormat *)arg1 ;
-(unsigned long long)displayType;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(void)play;
-(SCD_Struct_NU0)currentTime;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)maximumZoomScale;
-(NUMediaView *)mediaView;
-(CGSize)targetSize;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)seekToTime:(SCD_Struct_NU0)arg1 ;
-(void)stepByCount:(long long)arg1 ;
-(NUComposition *)composition;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(long long)playbackState;
-(long long)playbackMode;
-(void)setPlaybackMode:(long long)arg1 ;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(SCD_Struct_NU0)mediaDuration;
-(void)endPanning;
-(void)_releaseAVObjects;
-(void)seekToTime:(SCD_Struct_NU0)arg1 exact:(BOOL)arg2 ;
-(NSArray *)pipelineFilters;
-(id)addPlaybackTimeObserver:(/*^block*/id)arg1 ;
-(id)addPlaybackStateObserver:(/*^block*/id)arg1 ;
-(AVComposition *)previousVideo;
-(void)livePhotoViewDidBeginScrubbing:(id)arg1 ;
-(void)livePhotoViewDidEndScrubbing:(id)arg1 ;
-(BOOL)_isVideoEnabled;
-(double)backingScale;
-(void)updateComposition:(id)arg1 ;
-(void)setBackingScale:(double)arg1 ;
-(void)_notifyPlaybackTimeChange:(SCD_Struct_NU0)arg1 ;
-(void)_withComposition:(id)arg1 visitRenderClient:(/*^block*/id)arg2 ;
-(id)initWithMediaView:(id)arg1 ;
-(id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3 ;
-(void)beginPanning;
-(void)beginZooming;
-(void)endZooming;
-(void)_beginAnimating;
-(void)_endAnimating;
-(BOOL)pipelineFilersHaveChanged;
-(BOOL)isZoomedToFit;
-(BOOL)canRenderVideoLive;
-(CGPoint)convertPoint:(CGPoint)arg1 toImageFromView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromImageToView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toImageFromView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromImageToView:(id)arg2 ;
-(CGRect)_scrollBounds;
-(id)_regionPolicyForZoomTargetRect:(CGRect)arg1 ;
-(void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2 ;
-(void)_updateImageRenderForComposition:(id)arg1 ;
-(/*^block*/id)_zoomRenderResponseHandler;
-(/*^block*/id)_backfillRenderResponseHandler;
-(/*^block*/id)_videoFrameImageRenderResponseHandler;
-(void)_updateROILayerWithLatestRenderResponse;
-(void)_updateBackfillLayerWithLatestRenderResponse;
-(void)_updateROILayerWithRenderResponse:(id)arg1 ;
-(void)_updateBackfillLayerWithRenderResponse:(id)arg1 ;
-(id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2 ;
-(id)renderClient;
-(void)_updateDisplayForMediaType:(long long)arg1 ;
-(void)_setDisplayType:(unsigned long long)arg1 ;
-(void)_setupAVPlayerController;
-(void)_playerStatusDidChange:(long long)arg1 ;
-(void)_tearDownAVPlayerController;
-(id)cacheVideoRenderFilter;
-(void)_updateVideoWithResult:(id)arg1 ;
-(void)_updateVideoComposition:(id)arg1 ;
-(void)_updateVideoViewLayoutWithGeometry:(id)arg1 ;
-(void)_coalesceUpdateVideoComposition:(id)arg1 ;
-(void)_coalesceUpdateLivePhotoComposition:(id)arg1 ;
-(void)_updateLivePhotoComposition:(id)arg1 ;
-(id)_livePhotoFromResponse:(id)arg1 ;
-(void)_updateLivePhotoWithResponse:(id)arg1 ;
-(id)_zoomRenderRequestForComposition:(id)arg1 ;
-(double)_targetZoomScale;
-(CGRect)_zoomTargetRect;
-(double)_lastRenderDuration;
-(id)_backfillRenderRequestForComposition:(id)arg1 ;
-(void)_addFullExtentConstraintsForView:(id)arg1 ;
-(long long)_playbackStateFromPlayerStatus:(long long)arg1 rate:(float)arg2 ;
-(void)_notifyPlaybackStateChange:(long long)arg1 ;
-(NUAVPlayerController *)nuAVPlayerController;
-(unsigned long long)computedDisplayType;
-(void)_setVideoEnabled:(BOOL)arg1 ;
-(void)setPreviousVideo:(AVComposition *)arg1 ;
-(NSArray *)previousPipelineFilters;
@end

