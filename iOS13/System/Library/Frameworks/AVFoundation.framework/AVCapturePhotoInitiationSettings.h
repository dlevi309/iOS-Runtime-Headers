/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(void)dealloc;
-(unsigned long long)timestamp;
-(long long)uniqueID;
-(long long)HDRMode;
-(long long)flashMode;
-(BOOL)burstQualityCaptureEnabled;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(void)setHDRMode:(long long)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(id)_initWithTimestamp:(unsigned long long)arg1 ;
-(void)setBurstQualityCaptureEnabled:(BOOL)arg1 ;
@end

