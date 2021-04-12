/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioIONode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (assign,getter=isVoiceProcessingBypassed,nonatomic) BOOL voiceProcessingBypassed; 
@property (assign,getter=isVoiceProcessingAGCEnabled,nonatomic) BOOL voiceProcessingAGCEnabled; 
@property (assign,getter=isVoiceProcessingInputMuted,nonatomic) BOOL voiceProcessingInputMuted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(void)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)setManualRenderingInputPCMFormat:(id)arg1 inputBlock:(/*^block*/id)arg2 ;
-(BOOL)isVoiceProcessingBypassed;
-(void)setVoiceProcessingBypassed:(BOOL)arg1 ;
-(BOOL)isVoiceProcessingAGCEnabled;
-(void)setVoiceProcessingAGCEnabled:(BOOL)arg1 ;
-(BOOL)isVoiceProcessingInputMuted;
-(void)setVoiceProcessingInputMuted:(BOOL)arg1 ;
@end

