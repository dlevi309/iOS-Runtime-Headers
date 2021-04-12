/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (assign,nonatomic) double delayTime; 
@property (assign,nonatomic) float feedback; 
@property (assign,nonatomic) float lowPassCutoff; 
@property (assign,nonatomic) float wetDryMix; 
-(id)init;
-(float)feedback;
-(void)setFeedback:(float)arg1 ;
-(void)setWetDryMix:(float)arg1 ;
-(void)setDelayTime:(double)arg1 ;
-(void)setLowPassCutoff:(float)arg1 ;
-(float)wetDryMix;
-(double)delayTime;
-(float)lowPassCutoff;
@end

