/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioUnitEQFilterParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long filterType; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float bandwidth; 
@property (assign,nonatomic) float gain; 
@property (assign,nonatomic) BOOL bypass; 
-(id)init;
-(void)dealloc;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(void)setGain:(float)arg1 ;
-(float)gain;
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(BOOL)bypass;
-(void)setBypass:(BOOL)arg1 ;
-(void)setBandwidth:(float)arg1 ;
-(float)bandwidth;
@end

