/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
+(BOOL)validatesSourceVideoMinFrameDuration;
+(id)availableOutputSettingsPresets;
+(id)outputSettingsAssistantWithPreset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)audioSettings;
-(NSDictionary *)videoSettings;
-(NSString *)outputFileType;
-(const opaqueCMFormatDescriptionRef)sourceVideoFormat;
-(const opaqueCMFormatDescriptionRef)sourceAudioFormat;
-(SCD_Struct_AV7)sourceVideoAverageFrameDuration;
-(SCD_Struct_AV7)sourceVideoMinFrameDuration;
-(id)initWithPreset:(id)arg1 ;
-(void)setSourceAudioFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoAverageFrameDuration:(SCD_Struct_AV7)arg1 ;
-(void)setSourceVideoMinFrameDuration:(SCD_Struct_AV7)arg1 ;
@end

