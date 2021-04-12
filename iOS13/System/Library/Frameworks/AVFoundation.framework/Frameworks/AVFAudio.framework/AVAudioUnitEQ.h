/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (nonatomic,readonly) NSArray * bands; 
@property (assign,nonatomic) float globalGain; 
-(id)init;
-(id)initWithNumberOfBands:(unsigned long long)arg1 ;
-(NSArray *)bands;
-(float)globalGain;
-(void)setGlobalGain:(float)arg1 ;
@end

