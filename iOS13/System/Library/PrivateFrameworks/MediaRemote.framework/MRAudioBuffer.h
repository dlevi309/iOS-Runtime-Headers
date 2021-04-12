/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject {

	AVAudioCompressedBuffer* _buffer;
	NSDictionary* _formatSettings;

}

@property (nonatomic,readonly) AVAudioCompressedBuffer * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * formatSettings;                 //@synthesize formatSettings=_formatSettings - In the implementation block
-(AVAudioCompressedBuffer *)buffer;
-(id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3 ;
-(NSDictionary *)formatSettings;
@end

