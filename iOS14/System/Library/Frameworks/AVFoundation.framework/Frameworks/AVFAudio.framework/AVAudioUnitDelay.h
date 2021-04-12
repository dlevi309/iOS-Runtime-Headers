/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (assign,nonatomic) double delayTime; 
@property (assign,nonatomic) float feedback; 
@property (assign,nonatomic) float lowPassCutoff; 
@property (assign,nonatomic) float wetDryMix; 
-(void)setFeedback:(float)arg1 ;
-(float)feedback;
-(id)init;
-(float)wetDryMix;
-(double)delayTime;
-(void)setWetDryMix:(float)arg1 ;
-(void)setDelayTime:(double)arg1 ;
-(void)setLowPassCutoff:(float)arg1 ;
-(float)lowPassCutoff;
@end

