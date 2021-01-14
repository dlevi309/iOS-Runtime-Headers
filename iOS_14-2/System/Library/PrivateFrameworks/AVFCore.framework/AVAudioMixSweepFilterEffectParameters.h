/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVAudioMixEffectParameters.h>

@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {

	AVAudioMixSweepFilterEffectParametersInternal* _sweepFilterAudioEffect;

}

@property (nonatomic,readonly) int minimumCutOffFrequency; 
@property (nonatomic,readonly) int maximumCutOffFrequency; 
@property (nonatomic,readonly) float bypassThreshold; 
@property (nonatomic,readonly) float sweepValue; 
+(id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(id)init;
-(id)sweepFilterEffectWithSweepValue:(float)arg1 ;
-(id)initWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(unsigned long long)hash;
-(float)sweepValue;
-(float)bypassThreshold;
-(int)minimumCutOffFrequency;
-(int)maximumCutOffFrequency;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

