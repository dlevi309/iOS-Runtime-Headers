/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CAMMemoizationCache *)_videoDeviceFormatForVideoConfiguration;
-(id)_keyForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 ;
-(CAMMemoizationCache *)_videoSessionPresetForVideoConfiguration;
-(id)_portraitModeDeviceFormat;
-(id)_highestQualityDeviceFormatForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 ;
-(id)_panoramaDeviceFormatForConfiguration:(id)arg1 ;
-(id)_highestQualitySessionPresetForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 ;
-(id)_timelapseSessionPreset;
-(id)_portraitModeSessionPreset;
-(id)initWithEngine:(id)arg1 captureDevice:(id)arg2 ;
-(AVCaptureDeviceInput *)captureDeviceInput;
-(id)videoDeviceFormatForGraphConfiguration:(id)arg1 videoEncodingBehavior:(long long)arg2 ;
-(id)videoDevicePresetForGraphConfiguration:(id)arg1 videoEncodingBehavior:(long long)arg2 ;
-(CAMCaptureEngine *)_captureEngine;
-(AVCaptureDeviceFormat *)_cachedPanoramaDeviceFormat;
-(AVCaptureDeviceFormat *)_cachedPortraitDeviceFormat;
@end

