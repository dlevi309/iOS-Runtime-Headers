/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


#import <AudioPasscode/AudioPasscode-Structs.h>
@class AVAudioSession, AVAudioEngine, AVAudioUnit, AUPasscodeDecoder, AUPasscodeCodecConfiguration;

@interface APCListenerEngine : NSObject {

	AVAudioSession* _session;
	AVAudioEngine* _engine;
	AVAudioUnit* _decoderAUNode;
	AUPasscodeDecoder* _decoderAU;
	AUPasscodeCodecConfiguration* _codecConfig;

}
+(id)listenerWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
+(id)listenerWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 resultData:(id)arg4 error:(id*)arg5 ;
-(id)createAU:(AudioComponentDescription)arg1 ;
-(void)setupAudioSession;
-(void)createEngineAndAttachNodes;
-(id)initWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 resultData:(id)arg4 error:(id*)arg5 ;
-(BOOL)validateInputNodeWithFormat:(id)arg1 ;
-(void)makeEngineConnectionsWithError:(id*)arg1 ;
-(void)startEngineWithError:(id*)arg1 ;
-(void)stopEngine;
@end

