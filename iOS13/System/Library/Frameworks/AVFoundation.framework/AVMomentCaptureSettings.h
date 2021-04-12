/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVMomentCaptureSettings : NSObject <NSCopying> {

	long long _uniqueID;
	unsigned long long _userInitiatedCaptureTime;
	long long _torchMode;
	long long _flashMode;
	BOOL _autoRedEyeReductionEnabled;
	long long _digitalFlashMode;
	long long _photoQualityPrioritization;
	long long _HDRMode;
	BOOL _autoOriginalPhotoDeliveryEnabled;
	NSString* _bravoCameraSelectionBehaviorForRecording;
	BOOL _autoSpatialOverCaptureEnabled;
	BOOL _autoDeferredProcessingEnabled;

}

@property (nonatomic,readonly) long long uniqueID;                                                                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiatedCaptureTime;                                                //@synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime - In the implementation block
@property (assign,nonatomic) long long torchMode; 
@property (nonatomic,copy) NSString * bravoCameraSelectionBehaviorForRecording; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoRedEyeReductionEnabled,nonatomic) BOOL autoRedEyeReductionEnabled;                          //@synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) long long digitalFlashMode; 
@property (assign,nonatomic) long long photoQualityPrioritization; 
@property (assign,nonatomic) long long HDRMode; 
@property (assign,getter=isAutoOriginalPhotoDeliveryEnabled,nonatomic) BOOL autoOriginalPhotoDeliveryEnabled;              //@synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled - In the implementation block
@property (assign,getter=isAutoSpatialOverCaptureEnabled,nonatomic) BOOL autoSpatialOverCaptureEnabled;                    //@synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled - In the implementation block
@property (assign,getter=isAutoDeferredProcessingEnabled,nonatomic) BOOL autoDeferredProcessingEnabled;                    //@synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled - In the implementation block
+(id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2 ;
+(id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)uniqueID;
-(long long)HDRMode;
-(BOOL)isAutoSpatialOverCaptureEnabled;
-(long long)flashMode;
-(long long)digitalFlashMode;
-(long long)photoQualityPrioritization;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setDigitalFlashMode:(long long)arg1 ;
-(void)setPhotoQualityPrioritization:(long long)arg1 ;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(unsigned long long)userInitiatedCaptureTime;
-(BOOL)isAutoRedEyeReductionEnabled;
-(BOOL)isAutoOriginalPhotoDeliveryEnabled;
-(BOOL)isAutoDeferredProcessingEnabled;
-(void)setAutoDeferredProcessingEnabled:(BOOL)arg1 ;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(NSString *)bravoCameraSelectionBehaviorForRecording;
-(void)setBravoCameraSelectionBehaviorForRecording:(NSString *)arg1 ;
-(id)_initWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2 ;
-(void)setAutoOriginalPhotoDeliveryEnabled:(BOOL)arg1 ;
@end

