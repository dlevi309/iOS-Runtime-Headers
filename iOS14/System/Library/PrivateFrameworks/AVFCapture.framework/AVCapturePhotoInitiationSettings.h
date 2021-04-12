/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class AVCapturePhotoInitiationSettingsInternal;

@interface AVCapturePhotoInitiationSettings : NSObject {

	AVCapturePhotoInitiationSettingsInternal* _internal;

}

@property (nonatomic,readonly) unsigned long long timestamp; 
@property (nonatomic,readonly) long long uniqueID; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,nonatomic) long long HDRMode; 
@property (assign,nonatomic) BOOL burstQualityCaptureEnabled; 
+(id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(unsigned long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(void)setHDRMode:(long long)arg1 ;
-(long long)uniqueID;
-(unsigned long long)timestamp;
-(BOOL)burstQualityCaptureEnabled;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(long long)HDRMode;
-(id)_initWithTimestamp:(unsigned long long)arg1 ;
-(void)setBurstQualityCaptureEnabled:(BOOL)arg1 ;
-(void)dealloc;
@end

