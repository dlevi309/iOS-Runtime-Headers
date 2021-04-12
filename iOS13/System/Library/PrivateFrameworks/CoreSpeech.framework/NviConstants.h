/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

