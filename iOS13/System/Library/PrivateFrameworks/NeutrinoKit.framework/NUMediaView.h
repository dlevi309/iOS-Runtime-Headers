/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUAVPlayerControllerDelegate.h>
#import <libobjc.A.dylib/NUAVPlayerViewDelegate.h>

@protocol NUMediaViewDelegate;
@class NURenderView, NUScrollView, NUMediaViewRenderer, NUAVPlayerController, NUAVPlayerView, UIView, NUCoalescer, NSArray, NUComposition, NSString;

@interface NUMediaView : UIView <NUAVPlayerControllerDelegate, NUAVPlayerViewDelegate> {

	NURenderView* _renderView;
	NUScrollView* _scrollView;
	NUMediaViewRenderer* _renderer;
	UIEdgeInsets _edgeInsets;
	NUAVPlayerController* _nuAVPlayerController;
	NUAVPlayerView* _playerView;
	UIView* _livePhotoView;
	struct {
		BOOL hasDidFinishRendering;
		BOOL hasDidUpdateLivePhoto;
		BOOL hasDidFinishRenderingWithStatistics;
		BOOL hasDidZoom;
		BOOL hasWillBeginZooming;
		BOOL hasDidEndZooming;
		BOOL hasIsReadyForVideoPlayback;
		BOOL hasDidStartPreparingVideo;
		BOOL hasDidFinishPreparingVideo;
		BOOL hasWillBeginLivePhotoPlayback;
		BOOL hasDidEndLivePhotoPlayback;
	}  _delegateFlags;
	NUCoalescer* _renderCoalescer;
	BOOL _loopsVideo;
	long long _transitionCount;
	CGSize _transitionTargetSize;
	BOOL _centerContent;
	BOOL _videoPlayerVisible;
	BOOL _debugEnabled;
	BOOL _scrollUpdatesSuppressed;
	id<NUMediaViewDelegate> _delegate;
	double _angle;
	CGSize __masterSizeWithoutGeometry;
	CGRect _cropRect;

}

@property (assign,nonatomic) CGSize _masterSizeWithoutGeometry;                                //@synthesize _masterSizeWithoutGeometry=__masterSizeWithoutGeometry - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                  //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) double angle;                                                     //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) NSArray * pipelineFilters; 
@property (assign,nonatomic) BOOL centerContent;                                               //@synthesize centerContent=_centerContent - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled; 
@property (assign,nonatomic) BOOL loopsVideoPlayback; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isVideoPlayerVisible,nonatomic) BOOL videoPlayerVisible;              //@synthesize videoPlayerVisible=_videoPlayerVisible - In the implementation block
@property (assign,getter=isDebugEnabled,nonatomic) BOOL debugEnabled;                          //@synthesize debugEnabled=_debugEnabled - In the implementation block
@property (assign,nonatomic) BOOL scrollUpdatesSuppressed;                                     //@synthesize scrollUpdatesSuppressed=_scrollUpdatesSuppressed - In the implementation block
@property (assign,nonatomic,__weak) id<NUMediaViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) id<NUMediaPlayer> player; 
@property (nonatomic,copy) NUComposition * composition; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                          //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) double minimumZoomScale; 
@property (assign,nonatomic) double maximumZoomScale; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)_proposedInsetsForInsets:(UIEdgeInsets)arg1 contentSize:(CGSize)arg2 inFrame:(CGRect)arg3 centerContent:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NUMediaViewDelegate>)delegate;
-(void)setDelegate:(id<NUMediaViewDelegate>)arg1 ;
-(BOOL)isReady;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(UIEdgeInsets)edgeInsets;
-(void)didMoveToWindow;
-(id)_scrollView;
-(void)_updateContentInsets;
-(BOOL)isDebugEnabled;
-(void)setDebugEnabled:(BOOL)arg1 ;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)minimumZoomScale;
-(double)maximumZoomScale;
-(id)_geometry;
-(CGSize)_imageSize;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(void)setMuted:(BOOL)arg1 ;
-(CGRect)cropRect;
-(BOOL)isMuted;
-(void)setCropRect:(CGRect)arg1 ;
-(id<NUMediaPlayer>)player;
-(NUComposition *)composition;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(id)_renderer;
-(void)_setupViews;
-(id)_imageLayer;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(id)_livePhotoView;
-(CGRect)imageFrame;
-(id)snapshotImage;
-(id)_renderView;
-(void)_releaseAVObjects;
-(id)_videoPlayerView;
-(void)setLoopsVideoPlayback:(BOOL)arg1 ;
-(BOOL)loopsVideoPlayback;
-(NSArray *)pipelineFilters;
-(id)_videoPlayerController;
-(BOOL)isVideoPlayerVisible;
-(void)_startVideoPlayback;
-(CGPoint)convertPoint:(CGPoint)arg1 fromSpace:(id)arg2 toView:(id)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 toSpace:(id)arg3 ;
-(void)setCenterContent:(BOOL)arg1 ;
-(void)_updateRenderContent;
-(void)_transitionToInsets:(UIEdgeInsets)arg1 ;
-(void)setZoomScaleToFit;
-(void)_setPipelineFilters:(id)arg1 shouldUpdateContent:(BOOL)arg2 ;
-(void)_stopVideoPlayback;
-(void)waitForRender;
-(UIEdgeInsets)_edgeInsetsForContentSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(BOOL)centerContent;
-(void)playerViewReadyForDisplayDidChange:(id)arg1 ;
-(void)playerControllerIsReadyForPlayback:(id)arg1 ;
-(void)playerControllerDidFinishPlaying:(id)arg1 duration:(double)arg2 ;
-(void)playerController:(id)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3 ;
-(CGPoint)convertPointToImage:(CGPoint)arg1 ;
-(CGPoint)convertPointFromImage:(CGPoint)arg1 ;
-(void)_updateRenderContentCoalesced:(BOOL)arg1 ;
-(void)_beginTransition;
-(void)_endTransition;
-(id)_videoPlayerViewWithoutControls;
-(void)_rendererDidCreateAVPlayerController:(id)arg1 ;
-(void)_rendererDidFinishWithStatistics:(id)arg1 ;
-(void)_rendererDidUpdateLivePhoto;
-(void)_rendererDidStartPreparingVideo;
-(void)_rendererDidFinishPreparingVideo;
-(void)_livephotoPlaybackWillBegin;
-(void)_livephotoPlaybackDidEnd;
-(void)setVideoPlayerVisible:(BOOL)arg1 ;
-(void)_setLayerFilters:(id)arg1 ;
-(void)_withComposition:(id)arg1 visitRenderClient:(/*^block*/id)arg2 ;
-(void)_updateVideoPlayerAlpha;
-(id)_layerRecursiveDescription;
-(id)_viewRecursiveDescription;
-(CGSize)_masterSizeWithoutGeometry;
-(void)set_masterSizeWithoutGeometry:(CGSize)arg1 ;
-(BOOL)scrollUpdatesSuppressed;
-(void)setScrollUpdatesSuppressed:(BOOL)arg1 ;
@end

