/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_queue;
#import <ToneLibrary/ToneLibrary-Structs.h>
@class NSString, NSObject, CAReporter, NSMutableSet;

@interface TLAttentionAwarenessEffectCoordinator : NSObject {

	NSString* _accessQueueLabel;
	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _preEffectIssueDetectorID;
	long long _postEffectIssueDetectorID;
	CAReporter* _reporter;
	AudioTimeStamp _audioTimeStamp;
	NSMutableSet* _effectAudioTapContexts;
	SCD_Struct_TL2 _effectParameters;

}

@property (assign,nonatomic) SCD_Struct_TL2 effectParameters; 
-(void)dealloc;
-(SCD_Struct_TL2)effectParameters;
-(void)setEffectParameters:(SCD_Struct_TL2)arg1 ;
-(void)setEffectParameters:(SCD_Struct_TL2)arg1 effectMixFadeDuration:(double)arg2 ;
-(id)initWithEffectParameters:(SCD_Struct_TL2)arg1 ;
-(id)audioMixForAsset:(id)arg1 ;
-(BOOL)isAttentionAwarenessAudioMix:(id)arg1 ;
-(void)_prepareAudioProcessingWithEffectAudioTapContext:(id)arg1 maximumNumberOfFrames:(unsigned)arg2 processingFormat:(const AudioStreamBasicDescription*)arg3 ;
-(void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)arg1 ;
-(void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)arg1 ;
-(void)_processAudioWithEffectAudioTapContext:(id)arg1 bufferList:(AudioBufferList*)arg2 numberOfFramesRequested:(unsigned)arg3 numberOfFramesToProcess:(unsigned)arg4 ;
@end

