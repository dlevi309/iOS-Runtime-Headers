/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)setCurrentAudioDevice:(AVCaptureDevice *)arg1 ;
-(id<AVCapturePhotoCaptureDelegate>)currentStillImageDelegate;
-(AVCaptureSession *)currentCaptureSession;
-(void)setCurrentVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(AVCaptureMetadataOutput *)currentMetadataOutput;
-(AVCaptureVideoPreviewLayer *)currentVideoPreviewLayer;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(CAMPanoramaConfiguration *)currentPanoramaConfiguration;
-(id<AVMomentCaptureMovieRecordingDelegate>)currentMomentCaptureMovieRecordingDelegate;
-(void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(id)outputsForMode:(long long)arg1 shouldUseThumbnailOutputForFilters:(BOOL)arg2 ;
-(CAMCaptureEngine *)_captureEngine;
-(void)setCurrentPanoramaOutput:(CAMPanoramaOutput *)arg1 ;
-(AVCaptureDeviceFormat *)currentDepthDataFormat;
-(void)stopPanoramaCaptureInterrupted:(BOOL)arg1 ;
-(void)setCurrentCaptureSession:(AVCaptureSession *)arg1 ;
-(id)cachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(void)setCurrentAudioDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(id)metadataOutputForMode:(long long)arg1 ;
-(AVCaptureDeviceFormat *)currentVideoDeviceFormat;
-(void)setCurrentVideoDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(id<AVCaptureFileOutputRecordingDelegate>)currentRecordingDelegate;
-(void)setCurrentMovieFileOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(AVCaptureDeviceInput *)currentVideoDeviceInput;
-(id)primaryOutputForMode:(long long)arg1 ;
-(id)initWithCaptureEngine:(id)arg1 ;
-(void)setCurrentEffectsPreviewOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(void)setCurrentStillImageOutput:(AVCapturePhotoOutput *)arg1 ;
-(AVCaptureVideoDataOutput *)currentEffectsPreviewOutput;
-(AVCaptureMovieFileOutput *)currentMovieFileOutput;
-(void)setCurrentDepthDataFormat:(AVCaptureDeviceFormat *)arg1 ;
-(AVCaptureVideoThumbnailOutput *)currentVideoThumbnailOutput;
-(void)setCurrentVideoDeviceFormat:(AVCaptureDeviceFormat *)arg1 ;
-(AVCaptureDeviceInput *)currentAudioDeviceInput;
-(void)setCurrentVideoDevicePreset:(NSString *)arg1 ;
-(NSString *)currentVideoDevicePreset;
-(id)_captureEngineDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4 ;
-(void)setCurrentVideoThumbnailOutput:(AVCaptureVideoThumbnailOutput *)arg1 ;
-(void)setCurrentVideoDevice:(AVCaptureDevice *)arg1 ;
-(CAMPanoramaOutput *)currentPanoramaOutput;
-(AVCaptureDevice *)currentVideoDevice;
-(id)videoDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long*)arg4 ;
-(AVCaptureDevice *)currentAudioDevice;
-(id)audioDeviceInput;
-(void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2 ;
-(void)registerVideoEndZoomFactor:(double)arg1 ;
-(void)setCurrentMetadataOutput:(AVCaptureMetadataOutput *)arg1 ;
-(AVCapturePhotoOutput *)currentStillImageOutput;
@end

