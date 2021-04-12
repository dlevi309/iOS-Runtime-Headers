/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface NviConstants : NSObject
+(unsigned)inputRecordingNumberOfChannels;
+(float)inputRecordingSampleRate;
+(unsigned)inputRecordingSampleByteDepth;
+(unsigned)inputRecordingFramesPerPacket;
+(unsigned)inputRecordingBytesPerFrame;
+(unsigned)inputRecordingBytesPerPacket;
+(unsigned)inputRecordingSampleBitDepth;
+(AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
+(unsigned)numChannelsForNviDirectionality;
+(unsigned)nviDirectionalityStartingChannelId;
+(unsigned)nviDirectionalityEndingChannelId;
+(AudioStreamBasicDescription)monoChannelLpcmASBD;
+(AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
+(AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
+(id)nviLogsRootDir;
@end

