/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setOutputVolume:(float)arg1 ;
-(void)didAttachToEngine:(id)arg1 ;
-(void)setInputVolume:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)setInputPan:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)inputConnected:(unsigned long long)arg1 ;
-(unsigned long long)nextAvailableInputBus;
-(float)outputVolume;
@end

