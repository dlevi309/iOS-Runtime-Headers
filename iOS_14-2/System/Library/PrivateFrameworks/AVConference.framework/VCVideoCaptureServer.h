/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoCaptureServer.h>

@protocol VCVideoCaptureServer <VCVideoSink>
@required
-(void)onCaptureVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 switching:(BOOL)arg3 camera:(int)arg4 videoMirrored:(BOOL)arg5;
-(void)setCaptureFrameRate:(int)arg1;
-(void)setCameraZoomAvailable:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
-(int)getCaptureFrameRate;
-(void)handleCaptureEvent:(id)arg1;
-(void)onCaptureScreenFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 orientation:(int)arg3;
-(void)handleCaptureEvent:(id)arg1 subType:(id)arg2;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, VCVideoSource, AVConferencePreviewDelegate;
@class NSObject, VCVideoSourceTokenManager, NSMutableArray, NSMutableDictionary, BKSApplicationStateMonitor, VideoAttributes, VCImageQueue, VCImageRotationConverter, NSString;

@interface VCVideoCaptureServer : NSObject <VCVideoCaptureServer> {

	int currentWidth;
	int currentHeight;
	int currentFrameRate;
	int _maxFrameRate;
	int _encodingWidth;
	int _encodingHeight;
	int previewFrameCount;
	int captureFrameCount;
	NSObject*<OS_dispatch_source> cameraHealthMonitor;
	int pendingWidth;
	int pendingHeight;
	int pendingFrameRate;
	VCVideoSourceTokenManager* _tokenManager;
	BOOL _firstPreviewFrameReceived;
	int snapshotRequestCount;
	NSMutableArray* cameraVideoSinks;
	NSMutableArray* screenCaptureClients;
	NSMutableDictionary* _cameraPreviewClients;
	BKSApplicationStateMonitor* _cameraPreviewClientMonitor;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	CGSize localExpectedPortraitAspectRatio;
	CGSize localExpectedLandscapeAspectRatio;
	CGSize _defaultPortraitAspectRatio;
	CGSize _defaultLandscapeAspectRatio;
	NSObject*<OS_dispatch_queue> captureServerQueue;
	NSObject*<OS_dispatch_queue> captureClientQueue;
	NSObject*<OS_dispatch_queue> captureCameraQueue;
	NSObject*<OS_dispatch_queue> _cameraPreviewClientMonitorQueue;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	NSObject*<OS_dispatch_queue> variablesQueue;
	NSObject*<OS_dispatch_queue> snapshotQueue;
	NSObject*<VCVideoSource> avCapture;
	NSObject*<VCVideoSource> screenCapture;
	OpaqueVTPixelTransferSessionRef transferSession;
	CVPixelBufferPoolRef bufferPool;
	BOOL resize;
	NSObject*<AVConferencePreviewDelegate> appDelegate;
	double falteredRenderingtimeStamp;
	VCImageQueue* frontQueue;
	VCImageQueue* backQueue;
	int _thermalNotificationToken;
	int _thermalLevel;
	int _newThermalLevel;
	int _peakPowerNotificationToken;
	int _peakPowerLevel;
	int _newPeakPowerLevel;
	BOOL _isPreviewRunning;
	BOOL _forceDisableThermal;
	BOOL _isCapturing;
	VCImageRotationConverter* _imageRotationConverter;
	opaque_pthread_mutex_t _enqueueLock;
	VCVideoSourceToken _currentVideoSourceToken;

}

@property (nonatomic,readonly) VCVideoSourceToken currentVideoSourceToken;                    //@synthesize currentVideoSourceToken=_currentVideoSourceToken - In the implementation block
@property (nonatomic,retain) NSObject*<AVConferencePreviewDelegate> appDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)VCVideoCaptureServerSingleton;
-(void)setPauseCapture:(BOOL)arg1 ;
-(void)endPreviewToPIPAnimation;
-(void)onCaptureVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 switching:(BOOL)arg3 camera:(int)arg4 videoMirrored:(BOOL)arg5 ;
-(CGSize)localScreenRatioForScreenOrientation:(int)arg1 ;
-(void)didReceiveFirstPreviewFrame;
-(void)setCameraZoomFactor:(double)arg1 ;
-(BOOL)registerForVideoFramesFromSource:(int)arg1 sourceConfig:(id)arg2 ;
-(void)setCaptureFrameRate:(int)arg1 ;
-(oneway void)release;
-(void)sendSnapshotFromFrame:(CVBufferRef)arg1 ;
-(BOOL)cameraSupportsWidth:(int)arg1 height:(int)arg2 ;
-(void)handleCameraPreviewClientStateChange:(id)arg1 ;
-(BOOL)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(id)init;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(BOOL)setupScreenCaptureForSource:(int)arg1 config:(id)arg2 ;
-(CVBufferRef)createResizedFrame:(CVBufferRef)arg1 ;
-(BOOL)onVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 attribute:(SCD_Struct_Vi133)arg3 ;
-(id)retain;
-(BOOL)enqueueFrameToQueueFront:(BOOL)arg1 frame:(CVBufferRef)arg2 frameTime:(SCD_Struct_VC84)arg3 ;
-(void)beginPIPToPreviewAnimation;
-(void)stopPreview;
-(id)copyLocalVideoAttributes;
-(NSObject*<AVConferencePreviewDelegate>)appDelegate;
-(void)setCurrentFrameRate:(int)arg1 ;
-(void)setCameraZoomAvailable:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3 ;
-(id)autorelease;
-(int)getFrameRateForThermalLevel:(int)arg1 peakPowerPressure:(int)arg2 ;
-(int)getCaptureFrameRate;
-(void)applyPressureLevelChanges;
-(void)setAppDelegate:(NSObject*<AVConferencePreviewDelegate>)arg1 ;
-(void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)pausePreview;
-(BOOL)setCaptureCameraWithToken:(VCVideoSourceToken)arg1 ;
-(void)registerBlocksForServer;
-(id)copyLocalScreenAttributesForVideoAttributes:(id)arg1 ;
-(BOOL)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2 ;
-(void)handleAVCaptureError:(int)arg1 domain:(id)arg2 ;
-(int)getFrameRateForPeakPowerLevel:(int)arg1 ;
-(CGSize)localExpectedRatioForScreenOrientation:(int)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(BOOL)arg4 ;
-(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)setLocalVideoAttributes:(id)arg1 ;
-(void)beginPreviewToPIPAnimation;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(BOOL)setLocalScreenAttributes:(id)arg1 ;
-(int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(BOOL)arg4 ;
-(CFDictionaryRef)copyStatsDictionary;
-(void)handleCaptureEvent:(id)arg1 ;
-(CFDictionaryRef)copyCameraColorInfo;
-(void)reconnectClientLayerFront:(BOOL)arg1 ;
-(int)getFrameRateForThermalLevel:(int)arg1 ;
-(BOOL)registerForFrames:(id)arg1 ;
-(void)updateImageQueueFrameRate:(int)arg1 ;
-(void)resetCameraToPreviewSettingsForced:(BOOL)arg1 ;
-(unsigned long long)retainCount;
-(void)processFrameSizeChange:(CVBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 ;
-(void)processPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 camera:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)updateLocalAspectRatios:(int)arg1 localScreenAspectRatio:(CGSize)arg2 ;
-(void)startPreview;
-(VCVideoSourceToken)currentVideoSourceToken;
-(void)processCaptureSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 camera:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)notifyCameraDidChangeAvailability:(id)arg1 available:(BOOL)arg2 ;
-(void)updatePreviewState;
-(void)changeCameraToPendingSettingsWithReset:(BOOL)arg1 ;
-(void)notifyThermalChangeForClients:(id)arg1 ;
-(BOOL)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 ;
-(void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2 ;
-(void)onCaptureScreenFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 orientation:(int)arg3 ;
-(void)handleAVCaptureError:(int)arg1 error:(id)arg2 ;
-(void)endPIPToPreviewAnimation;
-(id)localVideoAttributes;
-(BOOL)canStopPreview;
-(void)stopCapture;
-(void)handleCaptureEvent:(id)arg1 subType:(id)arg2 ;
-(void)updateViewPointThermalLevel:(int)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 ;
-(void)notifyFrameRateBeingThrottledForClients:(id)arg1 newFrameRate:(int)arg2 thermalLevelDidChange:(BOOL)arg3 powerLevelDidChange:(BOOL)arg4 ;
-(void)dealloc;
-(unsigned)setLocalVideoDestination:(id)arg1 facing:(BOOL)arg2 ;
@end

