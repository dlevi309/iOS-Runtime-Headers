/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class AVCaptureDeviceInput, AVCaptureDevice, CAMCaptureEngine, CAMMemoizationCache, AVCaptureDeviceFormat;

@interface CAMCaptureEngineDevice : NSObject {

	AVCaptureDeviceInput* _captureDeviceInput;
	AVCaptureDevice* _captureDevice;
	CAMCaptureEngine* __captureEngine;
	CAMMemoizationCache* __videoDeviceFormatForVideoConfiguration;
	CAMMemoizationCache* __videoSessionPresetForVideoConfiguration;
	AVCaptureDeviceFormat* __cachedPanoramaDeviceFormat;
	AVCaptureDeviceFormat* __cachedPortraitDeviceFormat;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                    //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) CAMMemoizationCache * _videoDeviceFormatForVideoConfiguration;               //@synthesize _videoDeviceFormatForVideoConfiguration=__videoDeviceFormatForVideoConfiguration - In the implementation block
@property (nonatomic,readonly) CAMMemoizationCache * _videoSessionPresetForVideoConfiguration;              //@synthesize _videoSessionPresetForVideoConfiguration=__videoSessionPresetForVideoConfiguration - In the implementation block
@property (nonatomic,readonly) AVCaptureDeviceFormat * _cachedPanoramaDeviceFormat;                         //@synthesize _cachedPanoramaDeviceFormat=__cachedPanoramaDeviceFormat - In the implementation block
@property (nonatomic,readonly) AVCaptureDeviceFormat * _cachedPortraitDeviceFormat;                         //@synthesize _cachedPortraitDeviceFormat=__cachedPortraitDeviceFormat - In the implementation block
@property (nonatomic,readonly) AVCaptureDevice * captureDevice;                                             //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) AVCaptureDeviceInput * captureDeviceInput;                                   //@synthesize captureDeviceInput=_captureDeviceInput - In the implementation block
-(AVCaptureDevice *)captureDevice;
-(id)videoDeviceFormatForGraphConfiguration:(id)arg1 ;
-(CAMMemoizationCache *)_videoSessionPresetForVideoConfiguration;
-(AVCaptureDeviceInput *)captureDeviceInput;
-(id)_keyForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 enableHDR10BitVideo:(BOOL)arg3 ;
-(AVCaptureDeviceFormat *)_cachedPanoramaDeviceFormat;
-(id)_highestQualitySessionPresetForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 enableHDR10BitVideo:(BOOL)arg3 ;
-(CAMCaptureEngine *)_captureEngine;
-(CAMMemoizationCache *)_videoDeviceFormatForVideoConfiguration;
-(id)_portraitModeDeviceFormat;
-(id)initWithEngine:(id)arg1 captureDevice:(id)arg2 ;
-(AVCaptureDeviceFormat *)_cachedPortraitDeviceFormat;
-(id)_portraitModeSessionPreset;
-(id)_panoramaDeviceFormatForConfiguration:(id)arg1 ;
-(id)videoDevicePresetForGraphConfiguration:(id)arg1 ;
-(id)_highestQualityDeviceFormatForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 enableHDR10BitVideo:(BOOL)arg3 ;
-(id)_timelapseSessionPreset;
@end

