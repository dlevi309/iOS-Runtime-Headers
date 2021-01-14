/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings

@property (nonatomic,readonly) NSDictionary * audioSettingsDictionary; 
+(id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1 ;
+(id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 ;
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultAudioOutputSettings;
+(id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1 ;
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)compatibleMediaTypes;
-(NSDictionary *)audioSettingsDictionary;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

