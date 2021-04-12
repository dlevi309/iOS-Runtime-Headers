/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(void)pause;
-(void)stop;
-(BOOL)isRunning;
-(void)reset;
-(void)prepare;
-(BOOL)startAndReturnError:(id*)arg1 ;
-(void)connect:(id)arg1 to:(id)arg2 format:(id)arg3 ;
-(AVAudioMixerNode *)mainMixerNode;
-(void)attachNode:(id)arg1 ;
-(AVAudioEngineImpl*)implementation;
-(void)setAutoShutdownEnabled:(BOOL)arg1 ;
-(void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned long long)arg3 toBus:(unsigned long long)arg4 format:(id)arg5 ;
-(void)detachNode:(id)arg1 ;
-(BOOL)isAutoShutdownEnabled;
-(BOOL)isInManualRenderingMode;
-(long long)manualRenderingMode;
-(AVAudioFormat *)manualRenderingFormat;
-(unsigned)manualRenderingMaximumFrameCount;
-(AVAudioOutputNode *)outputNode;
-(AVAudioInputNode *)inputNode;
-(void)connect:(id)arg1 toConnectionPoints:(id)arg2 fromBus:(unsigned long long)arg3 format:(id)arg4 ;
-(void)disconnectNodeInput:(id)arg1 bus:(unsigned long long)arg2 ;
-(void)disconnectNodeOutput:(id)arg1 bus:(unsigned long long)arg2 ;
-(void)disconnectNodeInput:(id)arg1 ;
-(void)disconnectNodeOutput:(id)arg1 ;
-(id)inputConnectionPointForNode:(id)arg1 inputBus:(unsigned long long)arg2 ;
-(id)outputConnectionPointsForNode:(id)arg1 outputBus:(unsigned long long)arg2 ;
-(void)setMusicSequence:(OpaqueMusicSequenceRef)arg1 ;
-(OpaqueMusicSequenceRef)musicSequence;
-(long long)manualRenderingSampleTime;
-(BOOL)enableManualRenderingMode:(long long)arg1 format:(id)arg2 maximumFrameCount:(unsigned)arg3 error:(id*)arg4 ;
-(void)disableManualRenderingMode;
-(id)manualRenderingBlock;
-(long long)renderOffline:(unsigned)arg1 toBuffer:(id)arg2 error:(id*)arg3 ;
-(void)connectMIDI:(id)arg1 to:(id)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)connectMIDI:(id)arg1 toNodes:(id)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)disconnectMIDI:(id)arg1 from:(id)arg2 ;
-(void)disconnectMIDI:(id)arg1 fromNodes:(id)arg2 ;
-(void)disconnectMIDIInput:(id)arg1 ;
-(void)disconnectMIDIOutput:(id)arg1 ;
-(NSSet *)attachedNodes;
@end

