/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNAudioDataSourceUtilities : NSObject
+(void)enableAlwaysOnAudioRouting:(OpaqueAudioQueueRef)arg1 ;
+(void)setChannelAssignment:(unsigned)arg1 onQueue:(OpaqueAudioQueueRef)arg2 ;
+(id)createSiriAudioQueueConfigurationUsingChannelNumber:(unsigned)arg1 ;
+(id)createDefaultAudioQueueConfigurationUsingChannelNumber:(unsigned)arg1 ;
+(id)builtInMicrophoneDeviceUID;
+(id)audioQueueConfiguration;
@end

