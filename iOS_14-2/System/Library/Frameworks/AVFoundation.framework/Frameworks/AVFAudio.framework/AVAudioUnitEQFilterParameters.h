/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)gain;
-(void)setFrequency:(float)arg1 ;
-(float)frequency;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(id)init;
-(float)bandwidth;
-(BOOL)bypass;
-(void)setBypass:(BOOL)arg1 ;
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(void)setGain:(float)arg1 ;
-(void)setBandwidth:(float)arg1 ;
-(void)dealloc;
@end

