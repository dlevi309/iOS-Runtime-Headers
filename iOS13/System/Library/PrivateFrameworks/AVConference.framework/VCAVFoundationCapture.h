/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoCapture.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>
#import <AVConference/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/VCEffectsManagerDelegate.h>
#import <AVConference/AVCaptureDataOutputSynchronizerDelegate.h>

@protocol OS_dispatch_queue;
@class AVCaptureDeviceInput, AVCaptureVideoDataOutput, NSObject, AVCaptureSession, AVCaptureDataOutputSynchronizer, NSMutableArray, AVCaptureMetadataOutput, AVCaptureDepthDataOutput, AVCaptureDevice, NSString;

@interface VCAVFoundationCapture : VCVideoCapture <VideoCaptureProtocol, AVCaptureVideoDataOutputSampleBufferDelegate, VCEffectsManagerDelegate, AVCaptureDataOutputSynchronizerDelegate> {

	AVCaptureDeviceInput* _videoDeviceInput;
	AVCaptureVideoDataOutput* _videoCaptureOutput;
	NSObject*<OS_dispatch_queue> _captureSessionQueue;
	NSObject*<OS_dispatch_queue> _viewPointCorrectionQueue;
	AVCaptureSession* _captureSession;
	AVCaptureDataOutputSynchronizer* _outputSynchronizer;
	NSMutableArray* _outputSynchronizerOutputs;
	AVCaptureMetadataOutput* _metadataOutput;
	AVCaptureDepthDataOutput* _depthDataOutput;
	AVCaptureDevice* _captureDevice;
	BOOL _faceMeshTrackingEnabled;
	BOOL _viewPointCorrectionThermalEnabled;
	BOOL _effectsApplied;
	SCD_Struct_AV77 _lastPrintTimestamp;
	SCD_Struct_AV77 _lastReceivedTimestamp;
	SCD_Struct_AV77 _lastSentTimestamp;
	int _lastRequestedWidth;
	int _lastRequestedHeight;
	int _lastRequestedFrameRate;
	int _lastClientRequestedFrameRate;
	int _sentFrameCount;
	int _receivedFrameCount;
	CGSize _requestSize;
	CGSize _captureSize;
	BOOL _resize;
	BOOL _isPreviewing;
	BOOL _isCapturing;
	BOOL _forceMirrorCapture;
	BOOL _forceDynamicEffectsFramerate;
	BOOL _forcePearlCamera;
	int _previewFrameCount;
	int _captureFrameCount;
	float _processTimeSum;
	float _depthFrameRateMultplier;
	float _viewpointProcessTime;
	NSMutableArray* _renderFrameTimes;
	CVPixelBufferPoolRef _bufferPool;
	OpaqueVTPixelTransferSessionRef _transferSession;
	CVPixelBufferPoolRef _resizeBufferPool;
	OpaqueVTPixelTransferSessionRef _resizeTransferSession;
	CVPixelBufferPoolRef _rotateBufferPool;
	OpaqueVTImageRotationSessionRef _rotationSession;
	CVPixelBufferPoolRef _mirrorBufferPool;
	OpaqueVTImageRotationSessionRef _mirrorSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL faceMeshTrackingEnabled;                    //@synthesize faceMeshTrackingEnabled=_faceMeshTrackingEnabled - In the implementation block
@property (assign) BOOL effectsApplied;                             //@synthesize effectsApplied=_effectsApplied - In the implementation block
-(void)dealloc;
-(int)startPreview;
-(int)stop:(BOOL)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2 ;
-(BOOL)isPreviewRunning;
-(void)setCameraZoomFactor:(double)arg1 ;
-(void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2 ;
-(int)setFrameRate:(int)arg1 ;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(int)setCameraWithUID:(id)arg1 ;
-(id)getCameraUID;
-(BOOL)isFrontCamera;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3 ;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2 ;
-(void)setViewPointCorrectionEnabaled:(BOOL)arg1 ;
-(CGSize)getBestCaptureSizeForEncodingSize:(CGSize)arg1 ;
-(void)captureSessionNotification:(id)arg1 ;
-(int)setCamera:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 ;
-(void)initializeOutputs;
-(void)setFaceMeshTrackingEnabled:(BOOL)arg1 ;
-(void)setEffectsApplied:(BOOL)arg1 ;
-(void)setupRotationBufferPoolWithWidth:(int)arg1 height:(int)arg2 ;
-(void)setupMirrorBufferPoolWithWidth:(int)arg1 height:(int)arg2 ;
-(void)resetViewPointLogging;
-(void)initializeVideoCaptureOutput;
-(void)initializeMetadataOutput;
-(void)initializeDepthDataOutput;
-(void)initializeSynchronizedOutputs;
-(BOOL)shouldAddDepthData;
-(void)configureCaptureDeviceDepthFormat;
-(BOOL)shouldAddTrackedFacesData;
-(void)configureMetadataTypesForOutput:(id)arg1 ;
-(void)prepareSynchronizedOutputs:(id)arg1 ;
-(void)updateDepthFrameRate;
-(void)updateRenderProcessFrameRate:(id)arg1 ;
-(void)updateVideoCaptureServerWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV77)arg2 frontCamera:(BOOL)arg3 shouldMirrorFrontPreview:(BOOL)arg4 isFromEffects:(BOOL)arg5 ;
-(int)setFrameRateInternal:(int)arg1 ;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4 ;
-(opaqueCMSampleBufferRef)newResizedFrame:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV77)arg2 ;
-(opaqueCMSampleBufferRef)copySampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)attachMetadata:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 ;
-(void)processViewPointCorrection:(opaqueCMSampleBufferRef)arg1 metaData:(id)arg2 shouldProcess:(BOOL)arg3 ;
-(void)sendImageDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4 originalSize:(CGSize)arg5 ;
-(void)ensureRotationBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)ensureMirroredBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)newMirroredVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV77)arg2 ;
-(opaqueCMSampleBufferRef)newRotatedVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV77)arg2 shouldMirror:(BOOL)arg3 ;
-(CVBufferRef)copyPixelBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)shouldResizeWithCaptureSize:(CGSize)arg1 requestSize:(CGSize)arg2 ;
-(int)setVideoDeviceToWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(BOOL)cameraSupportsNoQueueFormatWidth:(int)arg1 height:(int)arg2 ;
-(SCD_Struct_AV77)frameDurationForVideoDeviceFormat:(id)arg1 frameRate:(int)arg2 ;
-(int)getMaxAllowedFrameRate:(int)arg1 ;
-(id)cameraFormatForWidth:(int)arg1 height:(int)arg2 ;
-(BOOL)isBackCamera;
-(int)setVideoDeviceToSelectedDevice:(id)arg1 ;
-(BOOL)shouldUseRearCameraVideoStabilization;
-(void)setVideoStabilizationTo:(BOOL)arg1 ;
-(void)checkCameraZoomCapability;
-(void)setVideoOrientationAndMirroredForDevice:(id)arg1 ;
-(id)cameraFormatForWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(BOOL)isFormatMaxFrameRateSupported:(id)arg1 frameRate:(int)arg2 ;
-(void)encodeProcessedPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_AV77)arg2 imageData:(id)arg3 processTime:(id)arg4 ;
-(BOOL)faceMeshTrackingEnabled;
-(BOOL)effectsApplied;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5 ;
-(BOOL)shouldUseViewpointCorrection;
-(BOOL)supportsViewpointCorrection;
@end

