/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary, UINotificationFeedbackGenerator, NSMapTable, NSHashTable, NSMutableArray;

@interface SBSoundController : NSObject {

	NSMutableDictionary* _soundsBySystemSoundIDs;
	UINotificationFeedbackGenerator* _hapticFeedbackGenerator;
	NSMapTable* _toneAlertsBySounds;
	NSMapTable* _soundsByToneAlerts;
	NSHashTable* _observers;
	unsigned long long _pendingCallbacks;
	NSMutableArray* _pendedCallbacks;

}
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_playFeedback:(id)arg1 ;
-(BOOL)_playSystemSound:(id)arg1 ;
-(BOOL)isPlaying:(id)arg1 ;
-(BOOL)playSound:(id)arg1 environments:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)stopSound:(id)arg1 ;
-(BOOL)playSoundWithDefaultEnvironment:(id)arg1 ;
-(BOOL)handleVolumeButtonDownEvent;
-(void)_ringerStateChanged:(id)arg1 ;
-(BOOL)_playToneAlert:(id)arg1 ;
-(void)_soundDidStartPlaying:(id)arg1 ;
-(void)_cleanupSystemSound:(unsigned)arg1 andKill:(BOOL)arg2 ;
-(void)_cleanupToneAlertForSound:(id)arg1 andKill:(BOOL)arg2 ;
-(void)_beginPendingCallbacksBlock;
-(void)_endPendingCallbacksBlock;
-(BOOL)stopAllSounds;
-(void)_soundDidFinishPlaying:(id)arg1 ;
-(void)_enqueueCallback:(/*^block*/id)arg1 ;
-(BOOL)isPlayingAnySound;
@end

