/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class AVCaptureSession, AVCaptureDevice, AVCaptureDeviceFormat, NSString, AVCaptureDeviceInput, AVCapturePhotoOutput, AVCaptureMovieFileOutput, CAMPanoramaOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, AVCaptureVideoThumbnailOutput, AVCaptureVideoPreviewLayer, CAMCaptureEngine, CAMPanoramaConfiguration;

@interface CAMCaptureCommandContext : NSObject {

	AVCaptureSession* _currentCaptureSession;
	AVCaptureDevice* _currentVideoDevice;
	AVCaptureDeviceFormat* _currentVideoDeviceFormat;
	AVCaptureDeviceFormat* _currentDepthDataFormat;
	NSString* _currentVideoDevicePreset;
	AVCaptureDeviceInput* _currentVideoDeviceInput;
	AVCaptureDevice* _currentAudioDevice;
	AVCaptureDeviceInput* _currentAudioDeviceInput;
	AVCapturePhotoOutput* _currentStillImageOutput;
	AVCaptureMovieFileOutput* _currentMovieFileOutput;
	CAMPanoramaOutput* _currentPanoramaOutput;
	AVCaptureMetadataOutput* _currentMetadataOutput;
	AVCaptureVideoDataOutput* _currentEffectsPreviewOutput;
	AVCaptureVideoThumbnailOutput* _currentVideoThumbnailOutput;
	AVCaptureVideoPreviewLayer* _currentVideoPreviewLayer;
	CAMCaptureEngine* __captureEngine;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                                                 //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,retain) AVCaptureSession * currentCaptureSession;                                                                   //@synthesize currentCaptureSession=_currentCaptureSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentVideoDevice;                                                                       //@synthesize currentVideoDevice=_currentVideoDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceFormat * currentVideoDeviceFormat;                                                           //@synthesize currentVideoDeviceFormat=_currentVideoDeviceFormat - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceFormat * currentDepthDataFormat;                                                             //@synthesize currentDepthDataFormat=_currentDepthDataFormat - In the implementation block
@property (nonatomic,retain) NSString * currentVideoDevicePreset;                                                                        //@synthesize currentVideoDevicePreset=_currentVideoDevicePreset - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * currentVideoDeviceInput;                                                             //@synthesize currentVideoDeviceInput=_currentVideoDeviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentAudioDevice;                                                                       //@synthesize currentAudioDevice=_currentAudioDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * currentAudioDeviceInput;                                                             //@synthesize currentAudioDeviceInput=_currentAudioDeviceInput - In the implementation block
@property (nonatomic,retain) AVCapturePhotoOutput * currentStillImageOutput;                                                             //@synthesize currentStillImageOutput=_currentStillImageOutput - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * currentMovieFileOutput;                                                          //@synthesize currentMovieFileOutput=_currentMovieFileOutput - In the implementation block
@property (nonatomic,retain) CAMPanoramaOutput * currentPanoramaOutput;                                                                  //@synthesize currentPanoramaOutput=_currentPanoramaOutput - In the implementation block
@property (nonatomic,retain) AVCaptureMetadataOutput * currentMetadataOutput;                                                            //@synthesize currentMetadataOutput=_currentMetadataOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoDataOutput * currentEffectsPreviewOutput;                                                     //@synthesize currentEffectsPreviewOutput=_currentEffectsPreviewOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoThumbnailOutput * currentVideoThumbnailOutput;                                                //@synthesize currentVideoThumbnailOutput=_currentVideoThumbnailOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * currentVideoPreviewLayer;                                                      //@synthesize currentVideoPreviewLayer=_currentVideoPreviewLayer - In the implementation block
@property (nonatomic,__weak,readonly) id<AVCaptureFileOutputRecordingDelegate> currentRecordingDelegate; 
@property (nonatomic,readonly) CAMPanoramaConfiguration * currentPanoramaConfiguration; 
@property (nonatomic,__weak,readonly) id<AVCapturePhotoCaptureDelegate> currentStillImageDelegate; 
@property (nonatomic,__weak,readonly) id<AVMomentCaptureMovieRecordingDelegate> currentMomentCaptureMovieRecordingDelegate; 
-(void)clear;
-(AVCaptureDevice *)currentVideoDevice;
-(AVCaptureDeviceFormat *)currentVideoDeviceFormat;
-(AVCapturePhotoOutput *)currentStillImageOutput;
-(AVCaptureMovieFileOutput *)currentMovieFileOutput;
-(AVCaptureVideoPreviewLayer *)currentVideoPreviewLayer;
-(CAMCaptureEngine *)_captureEngine;
-(id)cachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(id<AVCapturePhotoCaptureDelegate>)currentStillImageDelegate;
-(id<AVMomentCaptureMovieRecordingDelegate>)currentMomentCaptureMovieRecordingDelegate;
-(CAMPanoramaOutput *)currentPanoramaOutput;
-(CAMPanoramaConfiguration *)currentPanoramaConfiguration;
-(void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2 ;
-(id)videoDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4 ;
-(AVCaptureSession *)currentCaptureSession;
-(id)audioDeviceInput;
-(AVCaptureDeviceInput *)currentVideoDeviceInput;
-(AVCaptureDeviceInput *)currentAudioDeviceInput;
-(id)outputsForMode:(long long)arg1 shouldUseThumbnailOutputForFilters:(BOOL)arg2 ;
-(id)metadataOutputForMode:(long long)arg1 ;
-(AVCaptureMetadataOutput *)currentMetadataOutput;
-(AVCaptureVideoDataOutput *)currentEffectsPreviewOutput;
-(AVCaptureVideoThumbnailOutput *)currentVideoThumbnailOutput;
-(id)primaryOutputForMode:(long long)arg1 ;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)stopPanoramaCaptureInterrupted:(BOOL)arg1 ;
-(void)setCurrentCaptureSession:(AVCaptureSession *)arg1 ;
-(void)setCurrentVideoDevice:(AVCaptureDevice *)arg1 ;
-(void)setCurrentVideoDeviceFormat:(AVCaptureDeviceFormat *)arg1 ;
-(void)setCurrentDepthDataFormat:(AVCaptureDeviceFormat *)arg1 ;
-(void)setCurrentVideoDevicePreset:(NSString *)arg1 ;
-(void)setCurrentVideoDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCurrentAudioDevice:(AVCaptureDevice *)arg1 ;
-(void)setCurrentAudioDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCurrentMovieFileOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(void)setCurrentPanoramaOutput:(CAMPanoramaOutput *)arg1 ;
-(void)setCurrentMetadataOutput:(AVCaptureMetadataOutput *)arg1 ;
-(void)setCurrentEffectsPreviewOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(void)setCurrentVideoThumbnailOutput:(AVCaptureVideoThumbnailOutput *)arg1 ;
-(void)setCurrentVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(id)_captureEngineDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4 ;
-(id)initWithCaptureEngine:(id)arg1 ;
-(id<AVCaptureFileOutputRecordingDelegate>)currentRecordingDelegate;
-(AVCaptureDeviceFormat *)currentDepthDataFormat;
-(NSString *)currentVideoDevicePreset;
-(AVCaptureDevice *)currentAudioDevice;
-(void)setCurrentStillImageOutput:(AVCapturePhotoOutput *)arg1 ;
@end

