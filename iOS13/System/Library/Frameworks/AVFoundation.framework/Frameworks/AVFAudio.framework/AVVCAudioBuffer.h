/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVVCAudioBuffer : NSObject {

	void* _impl;

}

@property (readonly) int channels; 
@property (readonly) int bytesCapacity; 
@property (assign) int bytesDataSize; 
@property (readonly) void* data; 
@property (readonly) int packetDescriptionCapacity; 
@property (readonly) int packetDescriptionCount; 
@property (readonly) AudioStreamPacketDescription* packetDescriptions; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) AudioStreamBasicDescription* streamDescription; 
@property (readonly) BOOL remoteVoiceActivityAvailable; 
@property (readonly) unsigned char remoteVoiceActivityRMS; 
@property (readonly) unsigned char remoteVoiceActivityVAD; 
-(void)dealloc;
-(void)finalize;
-(void*)data;
-(int)channels;
-(unsigned long long)timeStamp;
-(AudioStreamBasicDescription*)streamDescription;
-(AudioStreamPacketDescription*)packetDescriptions;
-(int)packetDescriptionCount;
-(int)bytesDataSize;
-(int)bytesCapacity;
-(void)setBytesDataSize:(int)arg1 ;
-(int)packetDescriptionCapacity;
-(void)setPacketDescriptions:(const AudioStreamPacketDescription*)arg1 count:(int)arg2 ;
-(unsigned char)remoteVoiceActivityRMS;
-(unsigned char)remoteVoiceActivityVAD;
-(BOOL)remoteVoiceActivityAvailable;
-(id)initWithAudioQueueBuffer:(MyAudioQueueBuffer*)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3 ;
@end

