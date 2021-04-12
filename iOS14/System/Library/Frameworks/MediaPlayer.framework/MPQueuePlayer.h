/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MPAVRoutingController, AVPlayerItem, MPAVRoute, AVQueuePlayer, NSMutableArray, NSError, NSArray, AVPlayer, NSString;

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _allowsExternalPlaybackRevisionID;
	MPAVRoutingController* _routingController;
	AVPlayerItem* _currentItem;
	SCD_Struct_MP8 _currentTime;
	BOOL _isExternalPlaybackActive;
	BOOL _pausedForPlaybackQueueTransaction;
	MPAVRoute* _lastPickedRoute;
	/*^block*/id _playbackQueueCommitHandler;
	long long _playbackQueueTransactionCount;
	AVQueuePlayer* _player;
	NSMutableArray* _queuedOperations;
	float _rate;
	float _rateBeforePlaybackQueueTransaction;
	BOOL _routeDidChangeDuringPlaybackQueueTransaction;
	long long _status;
	long long _defaultItemEQPresetType;
	BOOL _outputObscuredDueToInsufficientExternalProtection;
	unsigned long long _usesAudioOnlyModeForExternalPlaybackRevisionID;
	unsigned long long _usesExternalPlaybackWhileExternalScreenIsActiveRevisionID;
	float _rawRate;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float rawRate;                                                            //@synthesize rawRate=_rawRate - In the implementation block
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) long long actionAtItemEnd; 
@property (nonatomic,readonly) BOOL allowsExternalPlayback; 
@property (getter=isExternalPlaybackActive,nonatomic,readonly) BOOL externalPlaybackActive; 
@property (nonatomic,readonly) BOOL usesExternalPlaybackWhileExternalScreenIsActive; 
@property (nonatomic,readonly) BOOL usesAudioOnlyModeForExternalPlayback; 
@property (nonatomic,readonly) long long externalPlaybackType; 
@property (assign,nonatomic) long long defaultItemEQPresetType;                                          //@synthesize defaultItemEQPresetType=_defaultItemEQPresetType - In the implementation block
@property (nonatomic,readonly) BOOL outputObscuredDueToInsufficientExternalProtection; 
@property (nonatomic,readonly) AVPlayerItem * currentItem; 
@property (nonatomic,copy) id playbackQueueCommitHandler;                                                //@synthesize playbackQueueCommitHandler=_playbackQueueCommitHandler - In the implementation block
@property (nonatomic,readonly) BOOL isPlaybackQueueTransactionActive; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) AVPlayer * _player; 
@property (nonatomic,readonly) long long _externalProtectionStatus; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (nonatomic,readonly) id playerAVAudioSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeItem:(id)arg1 ;
-(void)removeAllItems;
-(id)playerAVAudioSession;
-(NSString *)externalPlaybackVideoGravity;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(void)commitPlaybackQueueTransaction;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(BOOL)allowsExternalPlayback;
-(id)init;
-(long long)_externalProtectionStatus;
-(void)pause;
-(void)setDefaultItemEQPresetType:(long long)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1 ;
-(void)play;
-(BOOL)_CALayerDestinationIsTVOut;
-(void)seekToTime:(SCD_Struct_MP8)arg1 toleranceBefore:(SCD_Struct_MP8)arg2 toleranceAfter:(SCD_Struct_MP8)arg3 ;
-(void)setCurrentPlaybackQueueTransactionDisplayTime:(SCD_Struct_MP8)arg1 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)setExternalPlaybackVideoGravity:(NSString *)arg1 ;
-(NSError *)error;
-(NSArray *)items;
-(id)playbackQueueCommitHandler;
-(SCD_Struct_MP8)currentTime;
-(void)_currentItemDidChangeNotification:(id)arg1 ;
-(float)_userVolume;
-(float)rate;
-(void)_setUserVolume:(float)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(void)_setClientName:(id)arg1 ;
-(AVPlayerItem *)currentItem;
-(void)_setCALayerDestinationIsTVOut:(BOOL)arg1 ;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)seekToTime:(SCD_Struct_MP8)arg1 toleranceBefore:(SCD_Struct_MP8)arg2 toleranceAfter:(SCD_Struct_MP8)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)actionAtItemEnd;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(float)rawRate;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_MP8)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)usesAudioOnlyModeForExternalPlayback;
-(void)removeTimeObserver:(id)arg1 ;
-(BOOL)isPlaybackQueueTransactionActive;
-(void)_setExpectedAssetTypes:(id)arg1 ;
-(long long)defaultItemEQPresetType;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)setPlaybackQueueCommitHandler:(id)arg1 ;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_resumePlayback:(double)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(long long)externalPlaybackType;
-(void)advanceToNextItem;
-(void)beginPlaybackQueueTransactionAndPause:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_MP8)arg1 ;
-(void)_setPreferredLanguageList:(id)arg1 ;
-(AVPlayer *)_player;
-(long long)status;
-(void)dealloc;
-(void)_setStoppingFadeOutDuration:(float)arg1 ;
@end

