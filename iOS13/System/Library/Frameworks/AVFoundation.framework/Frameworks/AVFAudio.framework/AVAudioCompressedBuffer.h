/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void*)data;
-(void)setPacketCount:(unsigned)arg1 ;
-(AudioStreamPacketDescription*)packetDescriptions;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 maximumPacketSize:(long long)arg3 ;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 ;
-(unsigned)packetCapacity;
-(unsigned)packetCount;
-(long long)maximumPacketSize;
@end

