/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDAudioStreamNumAudioChannels, HMDAudioStreamBitRate, HMDAudioStreamSampleRate, HMDAudioStreamPacketTime;

@interface HMDAudioStreamCodecParameters : NSObject <NSCopying> {

	HMDAudioStreamNumAudioChannels* _numAudioChannels;
	HMDAudioStreamBitRate* _bitRate;
	HMDAudioStreamSampleRate* _sampleRate;
	HMDAudioStreamPacketTime* _packetTime;

}

@property (nonatomic,retain) HMDAudioStreamNumAudioChannels * numAudioChannels;              //@synthesize numAudioChannels=_numAudioChannels - In the implementation block
@property (nonatomic,retain) HMDAudioStreamBitRate * bitRate;                                //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,retain) HMDAudioStreamSampleRate * sampleRate;                          //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,retain) HMDAudioStreamPacketTime * packetTime;                          //@synthesize packetTime=_packetTime - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSampleRate:(HMDAudioStreamSampleRate *)arg1 ;
-(HMDAudioStreamSampleRate *)sampleRate;
-(HMDAudioStreamBitRate *)bitRate;
-(void)setBitRate:(HMDAudioStreamBitRate *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setNumAudioChannels:(HMDAudioStreamNumAudioChannels *)arg1 ;
-(HMDAudioStreamNumAudioChannels *)numAudioChannels;
-(void)setPacketTime:(HMDAudioStreamPacketTime *)arg1 ;
-(HMDAudioStreamPacketTime *)packetTime;
-(id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4 ;
@end

