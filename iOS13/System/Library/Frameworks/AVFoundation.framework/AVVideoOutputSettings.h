/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) NSDictionary * cleanApertureDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelAspectRatioDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelTransferProperties; 
@property (nonatomic,readonly) NSDictionary * videoScalingProperties; 
@property (nonatomic,readonly) BOOL dimensionsAreBoundingBox; 
@property (nonatomic,readonly) SCD_Struct_AV7 minimumFrameDuration; 
@property (nonatomic,readonly) NSString * frameRateConversionAlgorithm; 
@property (nonatomic,readonly) BOOL allowWideColor; 
@property (nonatomic,readonly) NSDictionary * videoSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultVideoOutputSettings;
+(id)_validValuesForScalingMode;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1 ;
-(int)width;
-(int)height;
-(SCD_Struct_AV7)minimumFrameDuration;
-(NSDictionary *)videoScalingProperties;
-(void)colorPropertiesConsideringFormatDescriptions:(id)arg1 colorPrimaries:(id*)arg2 transferFunction:(id*)arg3 ycbcrMatrix:(id*)arg4 ;
-(id)compatibleMediaTypes;
-(NSString *)frameRateConversionAlgorithm;
-(NSDictionary *)pixelTransferProperties;
-(NSDictionary *)videoSettingsDictionary;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(BOOL)allowWideColor;
-(id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSDictionary *)pixelAspectRatioDictionary;
-(NSDictionary *)cleanApertureDictionary;
-(BOOL)dimensionsAreBoundingBox;
@end

