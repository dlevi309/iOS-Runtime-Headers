/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioIONode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (assign,getter=isVoiceProcessingBypassed,nonatomic) BOOL voiceProcessingBypassed; 
@property (assign,getter=isVoiceProcessingAGCEnabled,nonatomic) BOOL voiceProcessingAGCEnabled; 
@property (assign,getter=isVoiceProcessingInputMuted,nonatomic) BOOL voiceProcessingInputMuted; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVoiceProcessingBypassed:(BOOL)arg1 ;
-(void)setVoiceProcessingAGCEnabled:(BOOL)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setVoiceProcessingInputMuted:(BOOL)arg1 ;
-(BOOL)setManualRenderingInputPCMFormat:(id)arg1 inputBlock:(/*^block*/id)arg2 ;
-(BOOL)isVoiceProcessingInputMuted;
-(BOOL)isVoiceProcessingBypassed;
-(BOOL)isVoiceProcessingAGCEnabled;
@end

