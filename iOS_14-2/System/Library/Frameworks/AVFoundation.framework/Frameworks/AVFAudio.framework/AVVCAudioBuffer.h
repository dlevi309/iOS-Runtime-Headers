/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) BOOL upsamplingSourceAudio; 
@property (readonly) BOOL remoteVoiceActivityAvailable; 
@property (readonly) unsigned char remoteVoiceActivityRMS; 
@property (readonly) unsigned char remoteVoiceActivityVAD; 
-(id)remoteVoiceActivityVADBuffer;
-(id)remoteVoiceActivityVADBuffer;
-(int)bytesCapacity;
-(void)setBytesDataSize:(int)arg1 ;
-(int)packetDescriptionCapacity;
-(void)setPacketDescriptions:(const AudioStreamPacketDescription*)arg1 count:(int)arg2 ;
-(unsigned char)remoteVoiceActivityRMS;
-(unsigned char)remoteVoiceActivityVAD;
-(BOOL)remoteVoiceActivityAvailable;
-(void)finalize;
-(BOOL)upsamplingSourceAudio;
-(id)initWithAudioQueueBuffer:(MyAudioQueueBuffer*)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3 ;
-(AudioStreamBasicDescription*)streamDescription;
-(unsigned long long)timeStamp;
-(int)bytesDataSize;
-(int)packetDescriptionCount;
-(AudioStreamPacketDescription*)packetDescriptions;
-(void*)data;
-(int)channels;
-(void)dealloc;
@end

