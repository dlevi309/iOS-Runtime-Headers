/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (nonatomic,readonly) unsigned packetCapacity; 
@property (assign,nonatomic) unsigned packetCount; 
@property (nonatomic,readonly) long long maximumPacketSize; 
@property (nonatomic,readonly) void* data; 
@property (nonatomic,readonly) unsigned byteCapacity; 
@property (assign,nonatomic) unsigned byteLength; 
@property (nonatomic,readonly) AudioStreamPacketDescription* packetDescriptions; 
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 ;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 maximumPacketSize:(long long)arg3 ;
-(unsigned)packetCapacity;
-(unsigned)packetCount;
-(void)setPacketCount:(unsigned)arg1 ;
-(AudioStreamPacketDescription*)packetDescriptions;
-(void*)data;
-(long long)maximumPacketSize;
@end

