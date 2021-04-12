/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRCAudioBuffer.h>

@class NSString;

@interface _TVRCMRAudioBufferWrapper : NSObject <_TVRCAudioBuffer> {

	void* _buffer;
	float _gain;
	double _sampleRate;
	double _timestamp;

}

@property (assign,nonatomic) unsigned long long packetCount; 
@property (assign,nonatomic) double sampleRate;                           //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float gain;                                  //@synthesize gain=_gain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)gain;
-(unsigned long long)packetCount;
-(void)setPacketCount:(unsigned long long)arg1 ;
-(double)timestamp;
-(void*)audioBuffer;
-(void)setGain:(float)arg1 ;
-(NSString *)description;
-(void)setSampleRate:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(double)sampleRate;
-(void)dealloc;
-(void)writeAudioData:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)writePacketDescriptions:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3 ;
@end

