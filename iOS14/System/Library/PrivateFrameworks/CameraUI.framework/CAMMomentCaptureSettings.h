/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSString;

@interface CAMMomentCaptureSettings : NSObject {

	NSString* _persistenceUUID;
	long long _flashMode;
	long long _hdrMode;
	BOOL _autoOriginalPhotoDeliveryEnabled;
	long long _lowLightMode;
	unsigned long long _userInitiationTime;
	long long _photoQualityPrioritization;
	BOOL _shouldDisableCameraSwitchingDuringVideoRecording;
	BOOL _autoSpatialOverCaptureEnabled;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                    //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                                //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                                                  //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) BOOL autoOriginalPhotoDeliveryEnabled;                              //@synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled - In the implementation block
@property (nonatomic,readonly) long long lowLightMode;                                             //@synthesize lowLightMode=_lowLightMode - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiationTime;                              //@synthesize userInitiationTime=_userInitiationTime - In the implementation block
@property (nonatomic,readonly) long long photoQualityPrioritization;                               //@synthesize photoQualityPrioritization=_photoQualityPrioritization - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableCameraSwitchingDuringVideoRecording;              //@synthesize shouldDisableCameraSwitchingDuringVideoRecording=_shouldDisableCameraSwitchingDuringVideoRecording - In the implementation block
@property (nonatomic,readonly) BOOL autoSpatialOverCaptureEnabled;                                 //@synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled - In the implementation block
-(long long)flashMode;
-(unsigned long long)userInitiationTime;
-(id)initWithSettings:(id)arg1 ;
-(long long)hdrMode;
-(id)init;
-(BOOL)autoSpatialOverCaptureEnabled;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)photoQualityPrioritization;
-(NSString *)persistenceUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)lowLightMode;
-(BOOL)autoOriginalPhotoDeliveryEnabled;
-(BOOL)shouldDisableCameraSwitchingDuringVideoRecording;
@end

