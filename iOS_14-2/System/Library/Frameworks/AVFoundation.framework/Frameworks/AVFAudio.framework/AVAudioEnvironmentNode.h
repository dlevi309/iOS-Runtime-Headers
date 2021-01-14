/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class AVAudioEnvironmentDistanceAttenuationParameters, AVAudioEnvironmentReverbParameters, NSArray, NSString;

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) long long outputType; 
@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (assign,nonatomic) AVAudio3DPoint listenerPosition; 
@property (assign,nonatomic) AVAudio3DVectorOrientation listenerVectorOrientation; 
@property (assign,nonatomic) AVAudio3DAngularOrientation listenerAngularOrientation; 
@property (nonatomic,readonly) AVAudioEnvironmentDistanceAttenuationParameters * distanceAttenuationParameters; 
@property (nonatomic,readonly) AVAudioEnvironmentReverbParameters * reverbParameters; 
@property (nonatomic,readonly) NSArray * applicableRenderingAlgorithms; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)applicableRenderingAlgorithms;
-(void)setListenerPosition:(AVAudio3DPoint)arg1 ;
-(AVAudio3DPoint)listenerPosition;
-(void)setListenerVectorOrientation:(AVAudio3DVectorOrientation)arg1 ;
-(AVAudio3DVectorOrientation)listenerVectorOrientation;
-(void)setListenerAngularOrientation:(AVAudio3DAngularOrientation)arg1 ;
-(AVAudio3DAngularOrientation)listenerAngularOrientation;
-(AVAudioEnvironmentDistanceAttenuationParameters *)distanceAttenuationParameters;
-(AVAudioEnvironmentReverbParameters *)reverbParameters;
-(id)init;
-(void)setOutputVolume:(float)arg1 ;
-(long long)outputType;
-(void)setOutputType:(long long)arg1 ;
-(unsigned long long)nextAvailableInputBus;
-(float)outputVolume;
@end

