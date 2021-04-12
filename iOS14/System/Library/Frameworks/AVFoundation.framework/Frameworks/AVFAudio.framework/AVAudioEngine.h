/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioOutputNode, AVAudioInputNode, AVAudioMixerNode, NSSet, AVAudioFormat;

@interface AVAudioEngine : NSObject {

	void* _impl;

}

@property (assign,nonatomic) OpaqueMusicSequenceRef musicSequence; 
@property (nonatomic,readonly) AVAudioOutputNode * outputNode; 
@property (nonatomic,readonly) AVAudioInputNode * inputNode; 
@property (nonatomic,readonly) AVAudioMixerNode * mainMixerNode; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isAutoShutdownEnabled,nonatomic) BOOL autoShutdownEnabled; 
@property (copy,readonly) NSSet * attachedNodes; 
@property (nonatomic,readonly) id manualRenderingBlock; 
@property (nonatomic,readonly) BOOL isInManualRenderingMode; 
@property (nonatomic,readonly) long long manualRenderingMode; 
@property (nonatomic,readonly) AVAudioFormat * manualRenderingFormat; 
@property (nonatomic,readonly) unsigned manualRenderingMaximumFrameCount; 
@property (nonatomic,readonly) long long manualRenderingSampleTime; 
-(AVAudioEngineImpl*)implementation;
-(void)disconnectMIDIOutput:(id)arg1 ;
-(void)disconnectMIDIInput:(id)arg1 ;
-(BOOL)startAndReturnError:(id*)arg1 ;
-(AVAudioFormat *)manualRenderingFormat;
-(id)init;
-(void)connect:(id)arg1 toConnectionPoints:(id)arg2 fromBus:(unsigned long long)arg3 format:(id)arg4 ;
-(void)attachNode:(id)arg1 ;
-(AVAudioOutputNode *)outputNode;
-(void)pause;
-(AVAudioMixerNode *)mainMixerNode;
-(void)disconnectNodeOutput:(id)arg1 ;
-(id)outputConnectionPointsForNode:(id)arg1 outputBus:(unsigned long long)arg2 ;
-(void)disconnectMIDI:(id)arg1 fromNodes:(id)arg2 ;
-(void)stop;
-(id)manualRenderingBlock;
-(void)connectMIDI:(id)arg1 toNodes:(id)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)disconnectMIDI:(id)arg1 from:(id)arg2 ;
-(NSSet *)attachedNodes;
-(id)description;
-(void)setAutoShutdownEnabled:(BOOL)arg1 ;
-(long long)renderOffline:(unsigned)arg1 toBuffer:(id)arg2 error:(id*)arg3 ;
-(void)disableManualRenderingMode;
-(AVAudioInputNode *)inputNode;
-(BOOL)isAutoShutdownEnabled;
-(BOOL)isInManualRenderingMode;
-(void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned long long)arg3 toBus:(unsigned long long)arg4 format:(id)arg5 ;
-(long long)manualRenderingSampleTime;
-(void)disconnectNodeInput:(id)arg1 ;
-(BOOL)enableManualRenderingMode:(long long)arg1 format:(id)arg2 maximumFrameCount:(unsigned)arg3 error:(id*)arg4 ;
-(void)connect:(id)arg1 to:(id)arg2 format:(id)arg3 ;
-(BOOL)isRunning;
-(void)reset;
-(void)disconnectNodeInput:(id)arg1 bus:(unsigned long long)arg2 ;
-(void)disconnectNodeOutput:(id)arg1 bus:(unsigned long long)arg2 ;
-(unsigned)manualRenderingMaximumFrameCount;
-(id)inputConnectionPointForNode:(id)arg1 inputBus:(unsigned long long)arg2 ;
-(void)connectMIDI:(id)arg1 to:(id)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(OpaqueMusicSequenceRef)musicSequence;
-(void)prepare;
-(long long)manualRenderingMode;
-(void)detachNode:(id)arg1 ;
-(void)dealloc;
-(void)setMusicSequence:(OpaqueMusicSequenceRef)arg1 ;
@end

