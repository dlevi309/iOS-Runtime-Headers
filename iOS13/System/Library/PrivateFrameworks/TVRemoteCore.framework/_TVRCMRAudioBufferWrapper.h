/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(void)setGain:(float)arg1 ;
-(float)gain;
-(double)sampleRate;
-(void)setPacketCount:(unsigned long long)arg1 ;
-(unsigned long long)packetCount;
-(void*)audioBuffer;
-(void)writeAudioData:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)writePacketDescriptions:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3 ;
@end

