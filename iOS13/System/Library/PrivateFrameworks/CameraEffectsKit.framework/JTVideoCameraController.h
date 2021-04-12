/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/AVCaptureDataOutputSynchronizerDelegate.h>
#import <libobjc.A.dylib/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/AVCapturePhotoCaptureDelegate.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>
#import <libobjc.A.dylib/JTARKitFrameDelegate.h>
#import <libobjc.A.dylib/CFXFaceTrackingRendererDelegate.h>

@protocol OS_dispatch_queue;
@class AVCaptureSession, AVCaptureDeviceInput, JTARKitCameraSessionController, AVCaptureVideoDataOutput, AVCaptureAudioDataOutput, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, AVCapturePhotoOutput, AVCaptureDataOutputSynchronizer, NSObject, NSString, NSMutableSet, VCPCaptureAnalysisSession, NSArray, ARFrame, JTFaceAnchor, NSNumber;

@interface JTVideoCameraController : NSObject <AVCaptureDataOutputSynchronizerDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCapturePhotoCaptureDelegate, AVCaptureMetadataOutputObjectsDelegate, JTARKitFrameDelegate, CFXFaceTrackingRendererDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _cameraDeviceInput;
	AVCaptureDeviceInput* _audioInput;
	JTARKitCameraSessionController* _arCameraSessionController;
	BOOL _runningARKit_dataOutSynchQueue;
	AVCaptureVideoDataOutput* _videoOutput;
	AVCaptureAudioDataOutput* _audioOutput;
	AVCaptureDepthDataOutput* _depthOutput;
	AVCaptureMetadataOutput* _metadataOutput;
	AVCapturePhotoOutput* _photoOutput;
	AVCaptureDataOutputSynchronizer* _dataOutputSynchronizer_dataOutSynchQueue;
	NSObject*<OS_dispatch_queue> _captureSessionQueue;
	NSObject*<OS_dispatch_queue> _audioOutQueue;
	NSObject*<OS_dispatch_queue> _metadataOutQueue;
	NSObject*<OS_dispatch_queue> _dataOutSynchQueue;
	NSObject*<OS_dispatch_queue> _queryDataQueue;
	NSString* _photoOutCodec;
	/*^block*/id _captureStillImageCompletionBlock;
	NSMutableSet* _videoDelegates;
	NSObject*<OS_dispatch_queue> _videoDelegateQueue;
	NSMutableSet* _audioDelegates;
	NSObject*<OS_dispatch_queue> _audioDelegateQueue;
	NSMutableSet* _livePlayerSources;
	NSObject*<OS_dispatch_queue> _livePlayerSourceQueue;
	BOOL _observingAudioRouteChanges;
	BOOL _captureSessionRunning_queryDataQueue;
	BOOL _isRecordingMovie_captureSessionQueue;
	BOOL _hasValidFaceData_queryDataQueue;
	BOOL _sessionRequiresFaceTracking_queryDataQueue;
	BOOL _isFlashScene_queryDataQueue;
	VCPCaptureAnalysisSession* _vcpAnalyzer;
	long long _cameraMode_captureSessionQueue;
	long long _cameraMode_queryDataQueue;
	NSString* _cameraType_queryDataQueue;
	long long _currentCameraPosition_captureSessionQueue;
	long long _currentCameraPosition_dataOutSynchQueue;
	long long _currentCameraPosition_queryDataQueue;
	double _cameraDeviceMaxZoom_captureSessionQueue;
	double _cameraDeviceCurrentZoom_captureSessionQueue;
	double _cameraDeviceCurrentZoom_queryDataQueue;
	long long _cachedMovieRecordingTorchMode;
	NSArray* _pvDetectedFacesArray_dataOutSynchQueue;
	NSArray* _metadataFaceObjectsArray_dataOutSynchQueue;
	NSArray* _metadataTrackedFacesArray_dataOutSynchQueue;
	long long _captureVideoOrientation_dataOutSynchQueue;
	long long _captureVideoOrientation_queryDataQueue;
	long long _captureVideoOrientation_metadataOutQueue;
	ARFrame* _mostRecentFrame_queryDataQueue;
	ARFrame* _stillImageFrame_queryDataQueue;
	JTFaceAnchor* _mostRecentFaceAnchor_queryDataQueue;
	JTFaceAnchor* _stillImageFaceAnchor_queryDataQueue;
	NSNumber* _currentlyTrackedFaceID;
	SCD_Struct_JT9 _cameraDeviceIntrinsics_dataOutSynchQueue;

}

@property (assign,nonatomic) long long cameraMode_captureSessionQueue;                             //@synthesize cameraMode_captureSessionQueue=_cameraMode_captureSessionQueue - In the implementation block
@property (assign,nonatomic) long long cameraMode_queryDataQueue;                                  //@synthesize cameraMode_queryDataQueue=_cameraMode_queryDataQueue - In the implementation block
@property (assign,nonatomic) BOOL captureSessionRunning_queryDataQueue;                            //@synthesize captureSessionRunning_queryDataQueue=_captureSessionRunning_queryDataQueue - In the implementation block
@property (nonatomic,retain) NSString * cameraType_queryDataQueue;                                 //@synthesize cameraType_queryDataQueue=_cameraType_queryDataQueue - In the implementation block
@property (assign,nonatomic) long long currentCameraPosition_captureSessionQueue;                  //@synthesize currentCameraPosition_captureSessionQueue=_currentCameraPosition_captureSessionQueue - In the implementation block
@property (assign,nonatomic) long long currentCameraPosition_dataOutSynchQueue;                    //@synthesize currentCameraPosition_dataOutSynchQueue=_currentCameraPosition_dataOutSynchQueue - In the implementation block
@property (assign,nonatomic) long long currentCameraPosition_queryDataQueue;                       //@synthesize currentCameraPosition_queryDataQueue=_currentCameraPosition_queryDataQueue - In the implementation block
@property (assign,nonatomic) double cameraDeviceMaxZoom_captureSessionQueue;                       //@synthesize cameraDeviceMaxZoom_captureSessionQueue=_cameraDeviceMaxZoom_captureSessionQueue - In the implementation block
@property (assign,nonatomic) double cameraDeviceCurrentZoom_captureSessionQueue;                   //@synthesize cameraDeviceCurrentZoom_captureSessionQueue=_cameraDeviceCurrentZoom_captureSessionQueue - In the implementation block
@property (assign,nonatomic) double cameraDeviceCurrentZoom_queryDataQueue;                        //@synthesize cameraDeviceCurrentZoom_queryDataQueue=_cameraDeviceCurrentZoom_queryDataQueue - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT9 cameraDeviceIntrinsics_dataOutSynchQueue;              //@synthesize cameraDeviceIntrinsics_dataOutSynchQueue=_cameraDeviceIntrinsics_dataOutSynchQueue - In the implementation block
@property (assign,nonatomic) long long cachedMovieRecordingTorchMode;                              //@synthesize cachedMovieRecordingTorchMode=_cachedMovieRecordingTorchMode - In the implementation block
@property (nonatomic,retain) NSArray * pvDetectedFacesArray_dataOutSynchQueue;                     //@synthesize pvDetectedFacesArray_dataOutSynchQueue=_pvDetectedFacesArray_dataOutSynchQueue - In the implementation block
@property (nonatomic,retain) NSArray * metadataFaceObjectsArray_dataOutSynchQueue;                 //@synthesize metadataFaceObjectsArray_dataOutSynchQueue=_metadataFaceObjectsArray_dataOutSynchQueue - In the implementation block
@property (nonatomic,retain) NSArray * metadataTrackedFacesArray_dataOutSynchQueue;                //@synthesize metadataTrackedFacesArray_dataOutSynchQueue=_metadataTrackedFacesArray_dataOutSynchQueue - In the implementation block
@property (assign,nonatomic) long long captureVideoOrientation_dataOutSynchQueue;                  //@synthesize captureVideoOrientation_dataOutSynchQueue=_captureVideoOrientation_dataOutSynchQueue - In the implementation block
@property (assign,nonatomic) long long captureVideoOrientation_queryDataQueue;                     //@synthesize captureVideoOrientation_queryDataQueue=_captureVideoOrientation_queryDataQueue - In the implementation block
@property (assign,nonatomic) long long captureVideoOrientation_metadataOutQueue;                   //@synthesize captureVideoOrientation_metadataOutQueue=_captureVideoOrientation_metadataOutQueue - In the implementation block
@property (nonatomic,retain) ARFrame * mostRecentFrame_queryDataQueue;                             //@synthesize mostRecentFrame_queryDataQueue=_mostRecentFrame_queryDataQueue - In the implementation block
@property (nonatomic,retain) ARFrame * stillImageFrame_queryDataQueue;                             //@synthesize stillImageFrame_queryDataQueue=_stillImageFrame_queryDataQueue - In the implementation block
@property (nonatomic,retain) JTFaceAnchor * mostRecentFaceAnchor_queryDataQueue;                   //@synthesize mostRecentFaceAnchor_queryDataQueue=_mostRecentFaceAnchor_queryDataQueue - In the implementation block
@property (nonatomic,retain) JTFaceAnchor * stillImageFaceAnchor_queryDataQueue;                   //@synthesize stillImageFaceAnchor_queryDataQueue=_stillImageFaceAnchor_queryDataQueue - In the implementation block
@property (assign,nonatomic) BOOL isRecordingMovie_captureSessionQueue;                            //@synthesize isRecordingMovie_captureSessionQueue=_isRecordingMovie_captureSessionQueue - In the implementation block
@property (assign,nonatomic) BOOL hasValidFaceData_queryDataQueue;                                 //@synthesize hasValidFaceData_queryDataQueue=_hasValidFaceData_queryDataQueue - In the implementation block
@property (assign,nonatomic) BOOL sessionRequiresFaceTracking_queryDataQueue;                      //@synthesize sessionRequiresFaceTracking_queryDataQueue=_sessionRequiresFaceTracking_queryDataQueue - In the implementation block
@property (assign,nonatomic) BOOL isFlashScene_queryDataQueue;                                     //@synthesize isFlashScene_queryDataQueue=_isFlashScene_queryDataQueue - In the implementation block
@property (nonatomic,readonly) VCPCaptureAnalysisSession * vcpAnalyzer;                            //@synthesize vcpAnalyzer=_vcpAnalyzer - In the implementation block
@property (nonatomic,retain) NSNumber * currentlyTrackedFaceID;                                    //@synthesize currentlyTrackedFaceID=_currentlyTrackedFaceID - In the implementation block
@property (nonatomic,readonly) long long cameraMode; 
@property (nonatomic,readonly) BOOL cameraSessionRunning; 
@property (nonatomic,readonly) BOOL audioEnabled; 
@property (nonatomic,readonly) BOOL depthEnabled; 
@property (nonatomic,readonly) BOOL ARKitEnabled; 
@property (nonatomic,readonly) BOOL isFlashScene; 
@property (nonatomic,readonly) SCD_Struct_JT10 depthDimensions; 
@property (assign,nonatomic) double zoomFactor; 
@property (nonatomic,retain) JTFaceAnchor * mostRecentFaceAnchor; 
@property (nonatomic,readonly) JTFaceAnchor * stillImageFaceAnchor; 
@property (nonatomic,readonly) BOOL hasValidFaceData; 
@property (assign,nonatomic) BOOL sessionRequiresFaceTracking; 
@property (nonatomic,readonly) ARFrame * stillImageFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)clear;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)cameraType;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2 ;
-(BOOL)isFlashScene;
-(double)zoomFactor;
-(BOOL)faceTrackingEnabled;
-(BOOL)depthEnabled;
-(SCD_Struct_JT10)depthDimensions;
-(void)setZoomFactor:(double)arg1 ;
-(long long)cameraPosition;
-(long long)cameraMode;
-(BOOL)audioEnabled;
-(JTFaceAnchor *)stillImageFaceAnchor;
-(void)setMostRecentFaceAnchor:(JTFaceAnchor *)arg1 ;
-(void)prepareCameraForMode:(long long)arg1 position:(long long)arg2 ;
-(BOOL)sessionRequiresFaceTracking;
-(void)notifyExternalImageData:(id)arg1 orientation:(long long)arg2 effectComposition:(id)arg3 ;
-(BOOL)cameraSessionRunning;
-(void)setCaptureTorchMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)startCameraSession:(/*^block*/id)arg1 ;
-(void)stopCameraSession:(/*^block*/id)arg1 ;
-(void)setSessionRequiresFaceTracking:(BOOL)arg1 ;
-(void)addVideoRenderDelegate:(id)arg1 ;
-(void)addAudioRenderDelegate:(id)arg1 ;
-(void)removeVideoRenderDelegate:(id)arg1 async:(BOOL)arg2 ;
-(void)removeAudioRenderDelegate:(id)arg1 async:(BOOL)arg2 ;
-(void)videoAndAudioOutputSettings:(/*^block*/id)arg1 ;
-(void)enableRecordingMovieMode:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)captureStillImageWithFlash:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)thermalLevelChanged:(id)arg1 ;
-(void)captureSessionDidStartRunningNotification:(id)arg1 ;
-(void)captureSessionDidStopRunningNotification:(id)arg1 ;
-(void)captureSessionRuntimeErrorNotification:(id)arg1 ;
-(void)captureSessionWasInterruptedNotification:(id)arg1 ;
-(void)captureSessionInterruptionEndedNotification:(id)arg1 ;
-(void)setMostRecentFrame_queryDataQueue:(ARFrame *)arg1 ;
-(void)setStillImageFrame_queryDataQueue:(ARFrame *)arg1 ;
-(void)setMostRecentFaceAnchor_queryDataQueue:(JTFaceAnchor *)arg1 ;
-(void)setStillImageFaceAnchor_queryDataQueue:(JTFaceAnchor *)arg1 ;
-(void)setHasValidFaceData_queryDataQueue:(BOOL)arg1 ;
-(void)setCaptureSessionRunning_queryDataQueue:(BOOL)arg1 ;
-(void)JT_setPhotoOrientationFromInterfaceOrientationCaptureSessionQueue:(long long)arg1 ;
-(void)JT_setIsFlashScene:(BOOL)arg1 ;
-(long long)cameraMode_queryDataQueue;
-(BOOL)captureSessionRunning_queryDataQueue;
-(BOOL)JT_isAudioEnabledCaptureSessionQueue;
-(BOOL)JT_isDepthEnabledCaptureSessionQueue;
-(BOOL)JT_isARKitEnabledCaptureSessionQueue;
-(BOOL)isFlashScene_queryDataQueue;
-(double)cameraDeviceCurrentZoom_queryDataQueue;
-(double)cameraDeviceMaxZoom_captureSessionQueue;
-(BOOL)JT_setZoomFactor_captureSessionQueue:(double)arg1 ;
-(void)setCameraDeviceCurrentZoom_captureSessionQueue:(double)arg1 ;
-(void)setCameraDeviceCurrentZoom_queryDataQueue:(double)arg1 ;
-(ARFrame *)stillImageFrame_queryDataQueue;
-(JTFaceAnchor *)mostRecentFaceAnchor_queryDataQueue;
-(void)setSessionRequiresFaceTracking_queryDataQueue:(BOOL)arg1 ;
-(BOOL)sessionRequiresFaceTracking_queryDataQueue;
-(JTFaceAnchor *)stillImageFaceAnchor_queryDataQueue;
-(BOOL)hasValidFaceData_queryDataQueue;
-(void)JT_calculateFrameRateRequiresLockCaptureSessionQueue:(BOOL)arg1 ;
-(void)JT_resetSessionCaptureSessionQueue;
-(BOOL)JT_isUsingInternalMicCaptureSessionQueue;
-(void)JT_configureInternalMicToUseOmnidirectionalPatternCaptureSessionQueue;
-(long long)cameraMode_captureSessionQueue;
-(long long)currentCameraPosition_captureSessionQueue;
-(void)setCameraMode_captureSessionQueue:(long long)arg1 ;
-(void)setCameraMode_queryDataQueue:(long long)arg1 ;
-(BOOL)JT_configureCaptureSessionForPosition:(long long)arg1 errorCaptureSessionQueue:(id*)arg2 ;
-(void)startCameraSessionInPosition:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)JT_cameraIsPearlCaptureSessionQueue;
-(void)JT_setupARCameraSessionController;
-(void)JT_configureCaptureSessionPresetCaptureSessionQueue;
-(void)JT_configureDepthCameraApplyZoomCaptureSessionQueue:(BOOL)arg1 ;
-(void)JT_setIdealResolutionOnVideoDataOutVideoSettingsCaptureSessionQueue;
-(void)JT_configureMicForCameraPositionCaptureSessionQueue:(long long)arg1 ;
-(NSString *)cameraType_queryDataQueue;
-(long long)currentCameraPosition_queryDataQueue;
-(long long)captureVideoOrientation_queryDataQueue;
-(BOOL)JT_switchToCameraPosition:(long long)arg1 errPtrCaptureSessionQueue:(id*)arg2 ;
-(void)switchCameraToPosition:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)JT_rampToZoom:(double)arg1 rate:(double)arg2 durationCaptureSessionQueue:(double)arg3 ;
-(void)JT_setMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 requiresLockCaptureSessionQueue:(BOOL)arg3 ;
-(void)minFrameRate:(int*)arg1 maxFrameRate:(int*)arg2 ;
-(BOOL)isRecordingMovie_captureSessionQueue;
-(void)setIsRecordingMovie_captureSessionQueue:(BOOL)arg1 ;
-(void)setCachedMovieRecordingTorchMode:(long long)arg1 ;
-(long long)cachedMovieRecordingTorchMode;
-(ARFrame *)mostRecentFrame_queryDataQueue;
-(void)setCaptureVideoOrientation_dataOutSynchQueue:(long long)arg1 ;
-(void)setCameraDeviceIntrinsics_dataOutSynchQueue:(SCD_Struct_JT9)arg1 ;
-(void)JT_setCaptureDeviceType:(id)arg1 captureDevicePositionCaptureSessionQueue:(long long)arg2 ;
-(void)preProcessFrameWithPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)JT_currentARHWFaceDetection:(id)arg1 ;
-(id)JT_processPixelBufferForFaceTransform:(CVBufferRef)arg1 forNormalizedFaceRect:(CGRect)arg2 withRollAngle:(float)arg3 withTimestamp:(SCD_Struct_JT6)arg4 andDuration:(SCD_Struct_JT6)arg5 detectionOrientation:(long long)arg6 interfaceOrientation:(long long)arg7 needsMirroring:(BOOL)arg8 ;
-(id)JT_createPVFrameSetFromPixelBuffer:(CVBufferRef)arg1 withMetadata:(id)arg2 timeInterval:(double)arg3 ;
-(void)JT_notifyVideoDelegatesOfFrameSetDataOutSynchQueue:(id)arg1 ;
-(void)setPvDetectedFacesArray_dataOutSynchQueue:(NSArray *)arg1 ;
-(void)setMetadataFaceObjectsArray_dataOutSynchQueue:(NSArray *)arg1 ;
-(void)setMetadataTrackedFacesArray_dataOutSynchQueue:(NSArray *)arg1 ;
-(void)JT_processMetadataObjectsMetadataOutQueue:(id)arg1 ;
-(NSArray *)pvDetectedFacesArray_dataOutSynchQueue;
-(NSArray *)metadataTrackedFacesArray_dataOutSynchQueue;
-(NSArray *)metadataFaceObjectsArray_dataOutSynchQueue;
-(id)JT_currentAVMetadataFaceObject:(id)arg1 ;
-(long long)captureVideoOrientation_dataOutSynchQueue;
-(long long)captureVideoOrientation_metadataOutQueue;
-(void)JT_setSelfieExposurePointOfInterestFromFaceMetadataCaptureSessionQueue:(id)arg1 ;
-(BOOL)JT_setupPhotosCaptureSessionQueue:(id*)arg1 ;
-(BOOL)JT_setupVideoCaptureSessionQueue:(id*)arg1 ;
-(BOOL)JT_setupAudioCaptureSessionQueue:(id*)arg1 ;
-(void)JT_resetVideoDataOutVideoSettingsCaptureSessionQueue;
-(id)JT_biggestDepthFormat:(id)arg1 ofTypeCaptureSessionQueue:(unsigned)arg2 ;
-(void)setCurrentCameraPosition_captureSessionQueue:(long long)arg1 ;
-(void)setCameraType_queryDataQueue:(NSString *)arg1 ;
-(void)setCurrentCameraPosition_queryDataQueue:(long long)arg1 ;
-(void)setCurrentCameraPosition_dataOutSynchQueue:(long long)arg1 ;
-(void)setIsFlashScene_queryDataQueue:(BOOL)arg1 ;
-(id)JT_cameraForPosition:(long long)arg1 ;
-(void)JT_setupDepthCaptureSessionQueue;
-(void)JT_enableCameraIntrinsicMatrixDeliveryCaptureSessionQueue;
-(void)setCameraDeviceMaxZoom_captureSessionQueue:(double)arg1 ;
-(void)setCaptureVideoOrientation_metadataOutQueue:(long long)arg1 ;
-(void)setCaptureVideoOrientation_queryDataQueue:(long long)arg1 ;
-(void)audioSessionRouteChangedNotification:(id)arg1 ;
-(NSNumber *)currentlyTrackedFaceID;
-(void)setCurrentlyTrackedFaceID:(NSNumber *)arg1 ;
-(double)JT_getFocalLengthForSceneCamera;
-(VCPCaptureAnalysisSession *)vcpAnalyzer;
-(void)didUpdateFrame:(id)arg1 ;
-(BOOL)deviceIsUsingBackCamera;
-(BOOL)ARKitEnabled;
-(ARFrame *)stillImageFrame;
-(JTFaceAnchor *)mostRecentFaceAnchor;
-(BOOL)hasValidFaceData;
-(long long)captureVideoOrientation;
-(void)switchCamera:(/*^block*/id)arg1 ;
-(void)scaleCurrentZoomFactor:(double)arg1 ;
-(void)resetZoomFactor;
-(void)setFFCZoom:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)rampToZoom:(double)arg1 rate:(double)arg2 ;
-(void)rampToZoom:(double)arg1 duration:(double)arg2 ;
-(void)stopRampToZoom:(/*^block*/id)arg1 ;
-(void)setMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(id)debugFrameRateLabel;
-(void)supportedFlashModes:(/*^block*/id)arg1 ;
-(void)focusAndExposeCameraOnPoint:(CGPoint)arg1 ;
-(id)createLivePlayerCameraSource;
-(void)removeLivePlayerCameraSource:(id)arg1 ;
-(void)saveToPhotoLibrary:(id)arg1 ;
-(long long)currentCameraPosition_dataOutSynchQueue;
-(double)cameraDeviceCurrentZoom_captureSessionQueue;
-(SCD_Struct_JT9)cameraDeviceIntrinsics_dataOutSynchQueue;
@end

