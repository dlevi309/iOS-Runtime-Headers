/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputSettings.h>

@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) NSDictionary * cleanApertureDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelAspectRatioDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelTransferProperties; 
@property (nonatomic,readonly) NSDictionary * videoScalingProperties; 
@property (nonatomic,readonly) BOOL dimensionsAreBoundingBox; 
@property (nonatomic,readonly) SCD_Struct_AV6 minimumFrameDuration; 
@property (nonatomic,readonly) NSString * frameRateConversionAlgorithm; 
@property (nonatomic,readonly) BOOL allowWideColor; 
@property (nonatomic,readonly) NSDictionary * videoSettingsDictionary; 
+(id)defaultVideoOutputSettings;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 ;
+(id)_validValuesForScalingMode;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1 ;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)registeredOutputSettingsClasses;
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
-(NSDictionary *)cleanApertureDictionary;
-(NSDictionary *)videoScalingProperties;
-(int)width;
-(void)colorPropertiesConsideringFormatDescriptions:(id)arg1 colorPrimaries:(id*)arg2 transferFunction:(id*)arg3 ycbcrMatrix:(id*)arg4 ;
-(id)compatibleMediaTypes;
-(NSString *)frameRateConversionAlgorithm;
-(NSDictionary *)pixelTransferProperties;
-(NSDictionary *)videoSettingsDictionary;
-(int)height;
-(SCD_Struct_AV6)minimumFrameDuration;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(BOOL)allowWideColor;
-(BOOL)dimensionsAreBoundingBox;
-(id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSDictionary *)pixelAspectRatioDictionary;
@end

