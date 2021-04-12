/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setPhotoQualityPrioritization:(long long)arg1 ;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(void)setAutoOriginalPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setLowLightMode:(long long)arg1 ;
-(void)setUserInitiationTime:(unsigned long long)arg1 ;
-(void)setShouldDisableCameraSwitchingDuringVideoRecording:(BOOL)arg1 ;
-(void)setPersistenceUUID:(NSString *)arg1 ;
@end

