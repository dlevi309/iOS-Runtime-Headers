/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, NSPointerArray, AVAudioEngine, AVAudioSession;

@interface AXHAListenEngine : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _audioProcessingQueue;
	NSPointerArray* _delegates;
	long long _state;
	AVAudioEngine* _audioEngine;
	AVAudioSession* _audioSession;

}

@property (retain) AVAudioEngine * audioEngine;                  //@synthesize audioEngine=_audioEngine - In the implementation block
@property (retain) AVAudioSession * audioSession;                //@synthesize audioSession=_audioSession - In the implementation block
@property (readonly) unsigned long long bufferSize; 
@property (readonly) BOOL isListening; 
+(id)sharedInstance;
+(id)_stringForState:(long long)arg1 ;
+(BOOL)_stateIsNotListening:(long long)arg1 ;
-(void)_setState:(long long)arg1 ;
-(id)init;
-(BOOL)isListening;
-(unsigned long long)bufferSize;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(AVAudioEngine *)audioEngine;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(AVAudioSession *)audioSession;
-(void)dealloc;
-(void)addListenDelegate:(id)arg1 ;
-(void)removeListenDelegate:(id)arg1 ;
-(void)_activateNotifications;
-(BOOL)_notListeningForAnyReason;
-(void)_startIfPossibleAndNotify;
-(void)notifyListeningStartedWithError:(id)arg1 ;
-(BOOL)_stopListeningAndTransitionToState:(long long)arg1 ;
-(void)_setupAudioInputWithError:(id*)arg1 shouldInterrupt:(BOOL)arg2 ;
-(void)_handleBuffer:(id)arg1 atTime:(id)arg2 ;
-(void)_carPlayIsConnectedDidChange:(id)arg1 ;
-(void)_handleAudioSessionInterruption:(id)arg1 ;
-(void)_handleConfigurationChangeNotification:(id)arg1 ;
-(BOOL)_startListeningWithError:(id*)arg1 ;
-(void)_handleInterruptionRequestingState:(long long)arg1 ;
-(void)_restartSoundRecognitionIfNecesary;
-(void)setAudioEngine:(AVAudioEngine *)arg1 ;
@end

