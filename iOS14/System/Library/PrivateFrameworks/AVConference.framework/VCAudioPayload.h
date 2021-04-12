/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class VCAudioPayloadConfig;

@interface VCAudioPayload : NSObject {

	SoundDec_t* _encoder;
	VCAudioPayloadConfig* _config;
	unsigned _bitrate;
	BOOL _shouldReset;

}

@property (nonatomic,readonly) VCAudioPayloadConfig * config;              //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) unsigned bitrate;                           //@synthesize bitrate=_bitrate - In the implementation block
-(VCAudioPayloadConfig *)config;
-(unsigned)bitrate;
-(id)description;
-(id)initWithConfig:(id)arg1 ;
-(void)dealloc;
-(BOOL)setBitrate:(unsigned)arg1 ;
-(void)setCurrentDTXEnable:(BOOL)arg1 ;
-(BOOL)getMagicCookie:(char*)arg1 withLength:(unsigned*)arg2 ;
-(BOOL)createEncoderWithInputFormat:(AudioStreamBasicDescription*)arg1 ;
-(int)encodeAudio:(opaqueVCAudioBufferListRef)arg1 numInputSamples:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 ;
-(BOOL)isDTXEmptyPacket:(unsigned)arg1 ;
-(void)resetEncoder;
-(void)resetEncoderWithSampleBuffer:(char*)arg1 numBytes:(int)arg2 ;
@end

