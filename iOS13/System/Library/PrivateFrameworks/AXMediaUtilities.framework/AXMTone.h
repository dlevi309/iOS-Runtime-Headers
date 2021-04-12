/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setSampleRate:(unsigned long long)arg1 ;
-(double)frequency;
-(void)_setFrequency:(double)arg1 ;
-(void)setGain:(double)arg1 ;
-(double)gain;
-(unsigned long long)sampleRate;
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(AXMADSREnvelope *)envelope;
-(double)_rawValueForTonePhase:(double)arg1 ;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >Ref)arg1 atFrame:(unsigned long long)arg2 ;
-(void)setWaveform:(unsigned long long)arg1 ;
-(unsigned long long)waveform;
-(double)aWeighting;
@end

