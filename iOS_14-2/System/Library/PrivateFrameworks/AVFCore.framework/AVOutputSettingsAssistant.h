/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject {

	AVOutputSettingsAssistantInternal* _internal;

}

@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSString * outputFileType; 
+(id)_allOutputSettingsPresets;
+(id)baseSettingsProviderForPreset:(id)arg1 ;
+(id)videoSettingsAdjusterForPreset:(id)arg1 ;
+(id)videoEncoderCapabilities;
+(id)availableOutputSettingsPresets;
+(BOOL)validatesSourceVideoMinFrameDuration;
+(id)outputSettingsAssistantWithPreset:(id)arg1 ;
-(id)videoEncoderSpecification;
-(NSDictionary *)audioSettings;
-(NSDictionary *)videoSettings;
-(NSString *)outputFileType;
-(id)init;
-(const opaqueCMFormatDescriptionRef)sourceVideoFormat;
-(const opaqueCMFormatDescriptionRef)sourceAudioFormat;
-(SCD_Struct_AV6)sourceVideoAverageFrameDuration;
-(SCD_Struct_AV6)sourceVideoMinFrameDuration;
-(void)setSourceAudioFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoAverageFrameDuration:(SCD_Struct_AV6)arg1 ;
-(void)setSourceVideoMinFrameDuration:(SCD_Struct_AV6)arg1 ;
-(void)setVideoEncoderSpecification:(id)arg1 ;
-(id)initWithPreset:(id)arg1 ;
-(void)dealloc;
@end

