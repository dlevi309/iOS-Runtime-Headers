/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)init;
-(unsigned long long)nextAvailableInputBus;
-(void)didAttachToEngine:(id)arg1 ;
-(void)setOutputVolume:(float)arg1 ;
-(float)outputVolume;
-(void)setInputVolume:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)setInputPan:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)inputConnected:(unsigned long long)arg1 ;
@end

