/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class AXMADSREnvelope;

@interface AXMTone : NSObject {

	unsigned long long _sampleRate;
	double _frequency;
	AXMADSREnvelope* _envelope;
	unsigned long long _waveform;
	double _gain;
	double _aWeighting;

}

@property (assign,nonatomic) unsigned long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) double frequency;                         //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) AXMADSREnvelope * envelope;               //@synthesize envelope=_envelope - In the implementation block
@property (assign,nonatomic) unsigned long long waveform;                //@synthesize waveform=_waveform - In the implementation block
@property (assign,nonatomic) double gain;                                //@synthesize gain=_gain - In the implementation block
@property (nonatomic,readonly) double aWeighting;                        //@synthesize aWeighting=_aWeighting - In the implementation block
-(double)gain;
-(double)frequency;
-(void)setWaveform:(unsigned long long)arg1 ;
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(double)_rawValueForTonePhase:(double)arg1 ;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >Ref)arg1 atFrame:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)waveform;
-(double)aWeighting;
-(void)setGain:(double)arg1 ;
-(void)setSampleRate:(unsigned long long)arg1 ;
-(AXMADSREnvelope *)envelope;
-(unsigned long long)sampleRate;
-(void)_setFrequency:(double)arg1 ;
@end

