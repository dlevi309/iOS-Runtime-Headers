/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) BOOL enable; 
@property (assign,nonatomic) float level; 
@property (nonatomic,readonly) AVAudioUnitEQFilterParameters * filterParameters; 
-(BOOL)enable;
-(AVAudioUnitEQFilterParameters *)filterParameters;
-(void)loadFactoryReverbPreset:(long long)arg1 ;
-(id)init;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(float)level;
-(void)setLevel:(float)arg1 ;
-(void)setEnable:(BOOL)arg1 ;
-(void)dealloc;
@end

