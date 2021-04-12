/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioNode.h>

@interface AVAudioIONode : AVAudioNode

@property (nonatomic,readonly) double presentationLatency; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit; 
@property (getter=isVoiceProcessingEnabled,nonatomic,readonly) BOOL voiceProcessingEnabled; 
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(BOOL)isInManualRenderingMode;
-(id)initWithIOUnit:(AVAudioIOUnit*)arg1 isInput:(BOOL)arg2 ;
-(double)presentationLatency;
-(void)didAttachToEngine:(id)arg1 ;
-(void)didDetachFromEngine:(id)arg1 error:(id*)arg2 ;
-(BOOL)setVoiceProcessingEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isVoiceProcessingEnabled;
-(BOOL)enableManualRenderingMode:(long long)arg1 isInput:(BOOL)arg2 ;
-(BOOL)enableRealtimeRenderingModeWithIOUnit:(AVAudioIOUnit*)arg1 isInput:(BOOL)arg2 forceIOUnitReset:(BOOL)arg3 ;
-(long long)manualRenderingMode;
@end

