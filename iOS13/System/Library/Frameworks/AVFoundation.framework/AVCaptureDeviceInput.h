/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureDeviceInputInternal, AVCaptureDevice;

@interface AVCaptureDeviceInput : AVCaptureInput {

	AVCaptureDeviceInputInternal* _internal;

}

@property (nonatomic,readonly) AVCaptureDevice * device; 
@property (assign,nonatomic) BOOL unifiedAutoExposureDefaultsEnabled; 
@property (assign,nonatomic) SCD_Struct_AV7 videoMinFrameDurationOverride; 
+(void)initialize;
+(id)deviceInputWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVCaptureDevice *)device;
-(float)simulatedAperture;
-(void)setSession:(id)arg1 ;
-(id)initWithDevice:(id)arg1 error:(id*)arg2 ;
-(OpaqueCMClockRef)clock;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isCameraCalibrationDataDeliveryEnabled;
-(BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
-(void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(id)ports;
-(void)setSimulatedAperture:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(id)multiCamPorts;
-(BOOL)unifiedAutoExposureDefaultsEnabled;
-(SCD_Struct_AV7)videoMinFrameDurationOverride;
-(float)maxGainOverride;
-(BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)arg1 ;
-(void)_resetSimulatedAperture;
-(void)_resetPortraitLightingEffectStrength;
-(void)_applyVideoMinFrameDurationOverride;
-(void)_resetVideoMinFrameDurationOverride;
-(void)_sourceFormatDidChange:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)isMaxGainOverrideSupported;
-(BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
-(void)setUnifiedAutoExposureDefaultsEnabled:(BOOL)arg1 ;
-(id)notReadyError;
-(id)portsWithMediaType:(id)arg1 sourceDeviceType:(id)arg2 sourceDevicePosition:(long long)arg3 ;
-(void)setVideoMinFrameDurationOverride:(SCD_Struct_AV7)arg1 ;
-(void)setMaxGainOverride:(float)arg1 ;
-(BOOL)isVisionDataDeliveryEnabled;
-(void)setVisionDataDeliveryEnabled:(BOOL)arg1 ;
-(id)videoDevice;
@end

