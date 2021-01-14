/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, HAPAudioCodecBitRateWrapper, HAPAudioCodecSampleRateWrapper, NSString;

@interface HAPAudioStreamCodecParameters : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _numAudioChannels;
	HAPAudioCodecBitRateWrapper* _bitRate;
	HAPAudioCodecSampleRateWrapper* _sampleRate;
	HAPTLVUnsignedNumberValue* _packetTime;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * numAudioChannels;              //@synthesize numAudioChannels=_numAudioChannels - In the implementation block
@property (nonatomic,retain) HAPAudioCodecBitRateWrapper * bitRate;                     //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,retain) HAPAudioCodecSampleRateWrapper * sampleRate;               //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * packetTime;                    //@synthesize packetTime=_packetTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(HAPAudioCodecBitRateWrapper *)bitRate;
-(NSString *)description;
-(void)setSampleRate:(HAPAudioCodecSampleRateWrapper *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBitRate:(HAPAudioCodecBitRateWrapper *)arg1 ;
-(HAPAudioCodecSampleRateWrapper *)sampleRate;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setNumAudioChannels:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setPacketTime:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)numAudioChannels;
-(HAPTLVUnsignedNumberValue *)packetTime;
-(id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4 ;
@end

