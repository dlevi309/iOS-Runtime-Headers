/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXRendererDelegate.h>
#import <libobjc.A.dylib/JTVideoCameraVideoDelegate.h>
#import <libobjc.A.dylib/JTVideoCameraAudioDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CFXLiveCaptureViewControllerDelegate, OS_dispatch_queue;
@class JTImage, CFXEffectComposition, UIView, JTImageView, CFXRenderer, NSObject, JTVideoWriter, NSMutableArray, NSString;

@interface CFXLiveCaptureViewController : UIViewController <CFXRendererDelegate, JTVideoCameraVideoDelegate, JTVideoCameraAudioDelegate, UIGestureRecognizerDelegate> {

	JTImage* _liveCaptureRenderedImage;
	BOOL _useLocalCameraViewfinder;
	BOOL _isCapturing_recordingQ;
	id<CFXLiveCaptureViewControllerDelegate> _delegate;
	CFXEffectComposition* _composition;
	UIView* _containerView;
	long long _captureMode;
	JTImageView* _renderImageView;
	UIView* _debugControlsView;
	UIView* _uncroppedRenderImagePlaceHolderView;
	CFXRenderer* _renderer;
	NSObject*<OS_dispatch_queue> _recordingQ;
	JTVideoWriter* _videoWriter;
	NSObject*<OS_dispatch_queue> _liveCaptureRenderedImageQ;
	NSMutableArray* _renderFrameCompletionBlocks;
	SCD_Struct_JT6 _lastRenderTime;
	SCD_Struct_JT6 _lastRenderPreparedTime;

}

@property (nonatomic,retain) UIView * containerView;                                                //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) JTImageView * renderImageView;                                  //@synthesize renderImageView=_renderImageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * debugControlsView;                                     //@synthesize debugControlsView=_debugControlsView - In the implementation block
@property (nonatomic,retain) UIView * uncroppedRenderImagePlaceHolderView;                          //@synthesize uncroppedRenderImagePlaceHolderView=_uncroppedRenderImagePlaceHolderView - In the implementation block
@property (nonatomic,retain) CFXRenderer * renderer;                                                //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) CFXEffectComposition * composition;                                    //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordingQ;                               //@synthesize recordingQ=_recordingQ - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 lastRenderTime;                                         //@synthesize lastRenderTime=_lastRenderTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 lastRenderPreparedTime;                                 //@synthesize lastRenderPreparedTime=_lastRenderPreparedTime - In the implementation block
@property (assign,nonatomic) BOOL isCapturing_recordingQ;                                           //@synthesize isCapturing_recordingQ=_isCapturing_recordingQ - In the implementation block
@property (nonatomic,retain) JTVideoWriter * videoWriter;                                           //@synthesize videoWriter=_videoWriter - In the implementation block
@property (nonatomic,retain) JTImage * liveCaptureRenderedImage; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> liveCaptureRenderedImageQ;                //@synthesize liveCaptureRenderedImageQ=_liveCaptureRenderedImageQ - In the implementation block
@property (nonatomic,retain) NSMutableArray * renderFrameCompletionBlocks;                          //@synthesize renderFrameCompletionBlocks=_renderFrameCompletionBlocks - In the implementation block
@property (assign,nonatomic,__weak) id<CFXLiveCaptureViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize normalizedMinimumHitTestArea; 
@property (assign,nonatomic) BOOL useLocalCameraViewfinder;                                         //@synthesize useLocalCameraViewfinder=_useLocalCameraViewfinder - In the implementation block
@property (nonatomic,readonly) UIView * localCameraViewfinderView; 
@property (nonatomic,readonly) UIView * uncroppedCameraViewfinderPlaceholderView; 
@property (assign,nonatomic) long long captureMode;                                                 //@synthesize captureMode=_captureMode - In the implementation block
@property (nonatomic,readonly) BOOL isCapturing; 
@property (nonatomic,readonly) BOOL livePlayerIsSaturated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instantiate;
-(id)initWithCoder:(id)arg1 ;
-(id<CFXLiveCaptureViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CFXLiveCaptureViewControllerDelegate>)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)didReceiveMemoryWarning;
-(CFXRenderer *)renderer;
-(void)setRenderer:(CFXRenderer *)arg1 ;
-(CFXEffectComposition *)composition;
-(SCD_Struct_JT6)lastRenderTime;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setComposition:(CFXEffectComposition *)arg1 ;
-(BOOL)isCapturing;
-(long long)captureMode;
-(void)setUseLocalCameraViewfinder:(BOOL)arg1 ;
-(BOOL)livePlayerIsSaturated;
-(void)willDropCameraFrame;
-(void)CFX_installGestures;
-(UIView *)debugControlsView;
-(void)setDebugControlsView:(UIView *)arg1 ;
-(void)stopRenderingCameraFrames;
-(JTImageView *)renderImageView;
-(void)CFX_createUncroppedCameraPlaceholderViewIfNecessary;
-(UIView *)uncroppedRenderImagePlaceHolderView;
-(void)setUncroppedRenderImagePlaceHolderView:(UIView *)arg1 ;
-(NSObject*<OS_dispatch_queue>)liveCaptureRenderedImageQ;
-(void)setLastRenderPreparedTime:(SCD_Struct_JT6)arg1 ;
-(void)setLastRenderTime:(SCD_Struct_JT6)arg1 ;
-(NSMutableArray *)renderFrameCompletionBlocks;
-(BOOL)useLocalCameraViewfinder;
-(void)setLiveCaptureRenderedImage:(JTImage *)arg1 ;
-(JTImage *)liveCaptureRenderedImage;
-(NSObject*<OS_dispatch_queue>)recordingQ;
-(JTVideoWriter *)videoWriter;
-(SCD_Struct_JT6)lastRenderPreparedTime;
-(void)removeAllEffectsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllEffects:(/*^block*/id)arg1 ;
-(BOOL)isCapturing_recordingQ;
-(void)setVideoWriter:(JTVideoWriter *)arg1 ;
-(void)setIsCapturing_recordingQ:(BOOL)arg1 ;
-(void)CFX_setAnimationEnabledForOverlays:(BOOL)arg1 ;
-(void)CFX_livePreviewTapped:(id)arg1 ;
-(void)CFX_livePreviewPanned:(id)arg1 ;
-(void)CFX_livePreviewPinched:(id)arg1 ;
-(void)CFX_livePreviewRotated:(id)arg1 ;
-(void)CFX_livePreviewDoubleTapped:(id)arg1 ;
-(CGPoint)locationInCaptureViewForGestureRecognizer:(id)arg1 ;
-(void)renderer:(id)arg1 didPrepareToRenderFrameAtTime:(SCD_Struct_JT6)arg2 ;
-(void)renderer:(id)arg1 didRenderFrame:(id)arg2 ;
-(void)renderVideoFrame:(id)arg1 ;
-(void)processAudioSample:(opaqueCMSampleBufferRef)arg1 ;
-(void)shutdownLivePlayer;
-(UIView *)localCameraViewfinderView;
-(UIView *)uncroppedCameraViewfinderPlaceholderView;
-(void)startButtonTouchUpInside:(id)arg1 ;
-(void)stopButtonTouchUpInside:(id)arg1 ;
-(void)toggleDebugControlsView:(id)arg1 ;
-(void)setlastRenderPreparedTime:(SCD_Struct_JT6)arg1 ;
-(void)executeAfterNextFrameIsRendered:(/*^block*/id)arg1 ;
-(void)startRenderingCameraFrames;
-(void)pauseRenderingCameraFrames;
-(void)resumeRenderingCameraFrames;
-(void)flushRenderer;
-(void)clearFaceTrackingRenderer;
-(void)startVideoRecordingWithFlashMode:(long long)arg1 ;
-(void)stopVideoRecording:(/*^block*/id)arg1 ;
-(void)cancelVideoRecording;
-(void)takeStillPhotoWithFlashMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)normalizedMinimumHitTestArea;
-(void)setRenderImageView:(JTImageView *)arg1 ;
-(void)setRecordingQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLiveCaptureRenderedImageQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRenderFrameCompletionBlocks:(NSMutableArray *)arg1 ;
@end

