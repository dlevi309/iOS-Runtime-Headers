/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary, NSMutableSet, UINotificationFeedbackGenerator, NSMapTable, NSHashTable, NSMutableArray;

@interface SBSoundController : NSObject {

	NSMutableDictionary* _soundsBySystemSoundIDs;
	NSMutableSet* _usedNotificationTypes;
	UINotificationFeedbackGenerator* _hapticFeedbackGenerator;
	NSMapTable* _toneAlertsBySounds;
	NSMapTable* _soundsByToneAlerts;
	NSHashTable* _observers;
	unsigned long long _pendingCallbacks;
	NSMutableArray* _pendedCallbacks;

}
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(BOOL)stopSound:(id)arg1 ;
-(id)init;
-(BOOL)_playSystemSound:(id)arg1 ;
-(BOOL)stopAllSounds;
-(BOOL)isPlaying:(id)arg1 ;
-(BOOL)_playToneAlert:(id)arg1 ;
-(void)_enqueueCallback:(/*^block*/id)arg1 ;
-(void)_ringerStateChanged:(id)arg1 ;
-(BOOL)playSoundWithDefaultEnvironment:(id)arg1 ;
-(void)_soundDidStartPlaying:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_beginPendingCallbacksBlock;
-(void)_cleanupToneAlertForSound:(id)arg1 andKill:(BOOL)arg2 ;
-(BOOL)playSound:(id)arg1 environments:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endPendingCallbacksBlock;
-(void)_cleanupSystemSound:(unsigned)arg1 andKill:(BOOL)arg2 ;
-(void)_soundDidFinishPlaying:(id)arg1 ;
-(BOOL)_playFeedback:(id)arg1 ;
-(BOOL)isPlayingAnySound;
-(BOOL)handleVolumeButtonDownEvent;
@end

