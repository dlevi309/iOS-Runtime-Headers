/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	unsigned long long _userInitiatedCaptureTime;
	int _torchMode;
	int _flashMode;
	BOOL _autoRedEyeReductionEnabled;
	int _digitalFlashMode;
	int _qualityPrioritization;
	int _HDRMode;
	BOOL _autoOriginalPhotoDeliveryEnabled;
	BOOL _autoSpatialOverCaptureEnabled;
	BOOL _autoDeferredProcessingEnabled;

}

@property (nonatomic,readonly) long long settingsID;                                                                       //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiatedCaptureTime;                                                //@synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime - In the implementation block
@property (assign,nonatomic) int torchMode;                                                                                //@synthesize torchMode=_torchMode - In the implementation block
@property (assign,nonatomic) int flashMode;                                                                                //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) BOOL autoRedEyeReductionEnabled;                                                              //@synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) int digitalFlashMode;                                                                         //@synthesize digitalFlashMode=_digitalFlashMode - In the implementation block
@property (assign,nonatomic) int qualityPrioritization;                                                                    //@synthesize qualityPrioritization=_qualityPrioritization - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                                                  //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,getter=isAutoOriginalPhotoDeliveryEnabled,nonatomic) BOOL autoOriginalPhotoDeliveryEnabled;              //@synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled - In the implementation block
@property (assign,getter=isAutoSpatialOverCaptureEnabled,nonatomic) BOOL autoSpatialOverCaptureEnabled;                    //@synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled - In the implementation block
@property (assign,getter=isAutoDeferredProcessingEnabled,nonatomic) BOOL autoDeferredProcessingEnabled;                    //@synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)HDRMode;
-(BOOL)isAutoSpatialOverCaptureEnabled;
-(int)flashMode;
-(BOOL)autoRedEyeReductionEnabled;
-(int)digitalFlashMode;
-(void)setFlashMode:(int)arg1 ;
-(void)setHDRMode:(int)arg1 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setDigitalFlashMode:(int)arg1 ;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(unsigned long long)userInitiatedCaptureTime;
-(BOOL)isAutoOriginalPhotoDeliveryEnabled;
-(BOOL)isAutoDeferredProcessingEnabled;
-(void)setAutoDeferredProcessingEnabled:(BOOL)arg1 ;
-(int)torchMode;
-(void)setTorchMode:(int)arg1 ;
-(long long)settingsID;
-(void)setQualityPrioritization:(int)arg1 ;
-(int)qualityPrioritization;
-(void)setAutoOriginalPhotoDeliveryEnabled:(BOOL)arg1 ;
-(id)initWithSettingsID:(long long)arg1 userInitiatedCaptureTime:(unsigned long long)arg2 ;
@end

