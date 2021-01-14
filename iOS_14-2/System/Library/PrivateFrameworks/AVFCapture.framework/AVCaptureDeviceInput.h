/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureInput.h>

@class AVCaptureDeviceInputInternal, AVCaptureDevice;

@interface AVCaptureDeviceInput : AVCaptureInput {

	AVCaptureDeviceInputInternal* _internal;

}

@property (nonatomic,readonly) AVCaptureDevice * device; 
@property (assign,nonatomic) BOOL unifiedAutoExposureDefaultsEnabled; 
@property (assign,nonatomic) SCD_Struct_AV0 videoMinFrameDurationOverride; 
+(void)initialize;
+(id)deviceInputWithDevice:(id)arg1 error:(id*)arg2 ;
-(OpaqueCMClockRef)clock;
-(SCD_Struct_AV0)videoMinFrameDurationOverride;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)notReadyError;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_resetSimulatedAperture;
-(void)setMaxGainOverride:(float)arg1 ;
-(BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)arg1 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isVisionDataDeliveryEnabled;
-(void)_applyVideoMinFrameDurationOverride;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isCameraCalibrationDataDeliveryEnabled;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setUnifiedAutoExposureDefaultsEnabled:(BOOL)arg1 ;
-(float)simulatedAperture;
-(void)_resetPortraitLightingEffectStrength;
-(AVCaptureDevice *)device;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(id)description;
-(float)portraitLightingEffectStrength;
-(void)_resetVideoMinFrameDurationOverride;
-(void)setSession:(id)arg1 ;
-(id)ports;
-(void)setVideoMinFrameDurationOverride:(SCD_Struct_AV0)arg1 ;
-(BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
-(float)maxGainOverride;
-(id)multiCamPorts;
-(BOOL)unifiedAutoExposureDefaultsEnabled;
-(id)portsWithMediaType:(id)arg1 sourceDeviceType:(id)arg2 sourceDevicePosition:(long long)arg3 ;
-(id)videoDevice;
-(id)initWithDevice:(id)arg1 error:(id*)arg2 ;
-(void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(void)setVisionDataDeliveryEnabled:(BOOL)arg1 ;
-(void)_sourceFormatDidChange:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
-(BOOL)isMaxGainOverrideSupported;
-(void)setSimulatedAperture:(float)arg1 ;
-(void)dealloc;
@end

