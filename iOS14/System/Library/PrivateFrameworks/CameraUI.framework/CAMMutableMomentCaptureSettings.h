/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMMomentCaptureSettings.h>

@class NSString;

@interface CAMMutableMomentCaptureSettings : CAMMomentCaptureSettings

@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) long long hdrMode; 
@property (assign,nonatomic) BOOL autoOriginalPhotoDeliveryEnabled; 
@property (assign,nonatomic) long long lowLightMode; 
@property (assign,nonatomic) unsigned long long userInitiationTime; 
@property (assign,nonatomic) long long photoQualityPrioritization; 
@property (assign,nonatomic) BOOL shouldDisableCameraSwitchingDuringVideoRecording; 
@property (assign,nonatomic) BOOL autoSpatialOverCaptureEnabled; 
-(void)setFlashMode:(long long)arg1 ;
-(void)setPhotoQualityPrioritization:(long long)arg1 ;
-(void)setPersistenceUUID:(NSString *)arg1 ;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setAutoOriginalPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setUserInitiationTime:(unsigned long long)arg1 ;
-(void)setLowLightMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(void)setShouldDisableCameraSwitchingDuringVideoRecording:(BOOL)arg1 ;
@end

