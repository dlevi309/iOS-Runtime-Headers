/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(float)level;
-(void)setLevel:(float)arg1 ;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(BOOL)enable;
-(AVAudioUnitEQFilterParameters *)filterParameters;
-(void)setEnable:(BOOL)arg1 ;
-(void)loadFactoryReverbPreset:(long long)arg1 ;
@end

