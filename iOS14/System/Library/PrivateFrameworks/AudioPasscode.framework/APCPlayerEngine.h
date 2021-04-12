/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <AudioPasscode/AudioPasscode-Structs.h>
@class AVAudioSession, AVAudioEngine, AVAudioUnit, AUPasscodeEncoder, AVAudioPlayerNode, AVAudioPCMBuffer, NSObject, APCPlayerEmbedInfo;

@interface APCPlayerEngine : NSObject {

	AVAudioSession* _session;
	AVAudioEngine* _engine;
	AVAudioUnit* _encoderAUNode;
	AUPasscodeEncoder* _encoderAU;
	AVAudioPlayerNode* _player;
	AVAudioPCMBuffer* _assetBuffer;
	BOOL _isRunning;
	float _prePlayVolume;
	BOOL _requestingStop;
	NSObject*<OS_dispatch_source> _callbackDispatchSrc;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	APCPlayerEmbedInfo* _embeddingInfo;
	/*^block*/id _beginningCallback;
	/*^block*/id _stopEngineCompletion;

}

@property (nonatomic,copy) id beginningCallback;                                      //@synthesize beginningCallback=_beginningCallback - In the implementation block
@property (nonatomic,copy) id stopEngineCompletion;                                   //@synthesize stopEngineCompletion=_stopEngineCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) APCPlayerEmbedInfo * embeddingInfo;                      //@synthesize embeddingInfo=_embeddingInfo - In the implementation block
+(id)playerWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(id)createAU:(AudioComponentDescription)arg1 ;
-(void)_stopAudioEngineAndSession;
-(id)stopEngineCompletion;
-(void)setupAudioSession;
-(void)createEngineAndAttachNodes;
-(void)makeEngineConnections;
-(BOOL)startEngineAtTime:(unsigned long long)arg1 withBeginning:(/*^block*/id)arg2 ;
-(BOOL)startEngineAtTime:(unsigned long long)arg1 withBeginning:(/*^block*/id)arg2 callbackTime:(unsigned long long)arg3 ;
-(void)startAPCPlayLoopAtTime:(unsigned long long)arg1 ;
-(void)startAPCPlayLoop;
-(void)_playbackBufferLoopCompletionHdlr;
-(float)evaluateAsset;
-(BOOL)startEngine;
-(BOOL)startEngineAtTime:(unsigned long long)arg1 ;
-(void)endPasscodeEmbedding;
-(void)stopEngine:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stopEngineWithFadeOut:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopEngineAfterMinimumLoops:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(APCPlayerEmbedInfo *)embeddingInfo;
-(void)setEmbeddingInfo:(APCPlayerEmbedInfo *)arg1 ;
-(id)beginningCallback;
-(void)setBeginningCallback:(id)arg1 ;
-(void)setStopEngineCompletion:(id)arg1 ;
@end

