/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject {

	AVAudioCompressedBuffer* _buffer;
	NSDictionary* _formatSettings;

}

@property (nonatomic,readonly) AVAudioCompressedBuffer * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * formatSettings;                 //@synthesize formatSettings=_formatSettings - In the implementation block
-(NSDictionary *)formatSettings;
-(id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3 ;
-(AVAudioCompressedBuffer *)buffer;
@end

