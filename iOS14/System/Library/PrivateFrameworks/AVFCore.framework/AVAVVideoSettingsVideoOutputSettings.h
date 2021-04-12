/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVVideoOutputSettings.h>
#import <AVFCore/AVReencodedVideoSettingsForFig.h>

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {

	NSDictionary* _adaptedVideoCompressionProperties;
	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) unsigned videoCodecType; 
@property (nonatomic,readonly) NSDictionary * videoEncoderSpecification; 
@property (nonatomic,readonly) NSDictionary * videoCompressionProperties; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id*)arg4 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(id)cleanApertureDictionary;
-(int)width;
-(unsigned)videoCodecType;
-(NSDictionary *)videoEncoderSpecification;
-(NSDictionary *)videoCompressionProperties;
-(int)height;
-(id)initWithTrustedAVVideoSettingsDictionary:(id)arg1 ;
-(id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(id)pixelAspectRatioDictionary;
-(BOOL)willYieldCompressedSamples;
-(void)dealloc;
@end

