/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMAudioEffect.h>

@interface AXMCompressor : AXMAudioEffect {

	double _attackMS;
	double _releaseMS;
	double _compressionRatio;
	double _gain;
	double _threshold;
	double _sampleRate;
	double _ratio;
	double _gainReduction;
	double _engagement;
	unsigned long long _emaSamples;
	double _ema;

}

@property (assign,nonatomic) double ratio;                               //@synthesize ratio=_ratio - In the implementation block
@property (assign,nonatomic) double gainReduction;                       //@synthesize gainReduction=_gainReduction - In the implementation block
@property (assign,nonatomic) double engagement;                          //@synthesize engagement=_engagement - In the implementation block
@property (assign,nonatomic) unsigned long long emaSamples;              //@synthesize emaSamples=_emaSamples - In the implementation block
@property (assign,nonatomic) double ema;                                 //@synthesize ema=_ema - In the implementation block
@property (assign,nonatomic) double attackMS;                            //@synthesize attackMS=_attackMS - In the implementation block
@property (assign,nonatomic) double releaseMS;                           //@synthesize releaseMS=_releaseMS - In the implementation block
@property (assign,nonatomic) double compressionRatio;                    //@synthesize compressionRatio=_compressionRatio - In the implementation block
@property (assign,nonatomic) double gain;                                //@synthesize gain=_gain - In the implementation block
@property (assign,nonatomic) double threshold;                           //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double sampleRate;                          //@synthesize sampleRate=_sampleRate - In the implementation block
+(id)compressor;
+(id)limiter;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(void)setGain:(double)arg1 ;
-(double)gain;
-(double)sampleRate;
-(double)attackMS;
-(double)releaseMS;
-(void)setAttackMS:(double)arg1 ;
-(void)setReleaseMS:(double)arg1 ;
-(id)initWithAttack:(double)arg1 release:(double)arg2 compressionRatio:(double)arg3 threshold:(double)arg4 sampleRate:(double)arg5 ;
-(unsigned long long)emaSamples;
-(double)ema;
-(void)setEma:(double)arg1 ;
-(double)ratio;
-(double)engagement;
-(void)setEngagement:(double)arg1 ;
-(void)processSamples:(unsigned long long)arg1 ;
-(double)compressionRatio;
-(void)setCompressionRatio:(double)arg1 ;
-(void)setRatio:(double)arg1 ;
-(double)gainReduction;
-(void)setGainReduction:(double)arg1 ;
-(void)setEmaSamples:(unsigned long long)arg1 ;
@end

