/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioUnitTimeEffect.h>

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) float overlap; 
-(id)init;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
@end

