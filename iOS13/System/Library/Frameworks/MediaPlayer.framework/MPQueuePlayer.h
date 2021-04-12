/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_MP5 _currentTime;
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
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)pause;
-(void)removeItem:(id)arg1 ;
-(void)removeAllItems;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(NSArray *)items;
-(AVPlayerItem *)currentItem;
-(void)advanceToNextItem;
-(void)play;
-(AVPlayer *)_player;
-(SCD_Struct_MP5)currentTime;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)removeTimeObserver:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_MP5)arg1 toleranceBefore:(SCD_Struct_MP5)arg2 toleranceAfter:(SCD_Struct_MP5)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isExternalPlaybackActive;
-(long long)externalPlaybackType;
-(BOOL)allowsExternalPlayback;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_MP5)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)seekToTime:(SCD_Struct_MP5)arg1 toleranceBefore:(SCD_Struct_MP5)arg2 toleranceAfter:(SCD_Struct_MP5)arg3 ;
-(void)seekToTime:(SCD_Struct_MP5)arg1 ;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(long long)actionAtItemEnd;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(NSString *)externalPlaybackVideoGravity;
-(BOOL)usesAudioOnlyModeForExternalPlayback;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(id)playerAVAudioSession;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(float)_userVolume;
-(void)_setUserVolume:(float)arg1 ;
-(void)setExternalPlaybackVideoGravity:(NSString *)arg1 ;
-(long long)_externalProtectionStatus;
-(BOOL)_CALayerDestinationIsTVOut;
-(void)_setCALayerDestinationIsTVOut:(BOOL)arg1 ;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)_setStoppingFadeOutDuration:(float)arg1 ;
-(void)_setClientName:(id)arg1 ;
-(void)_setPreferredLanguageList:(id)arg1 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)beginPlaybackQueueTransactionAndPause:(BOOL)arg1 ;
-(BOOL)isPlaybackQueueTransactionActive;
-(void)commitPlaybackQueueTransaction;
-(void)setCurrentPlaybackQueueTransactionDisplayTime:(SCD_Struct_MP5)arg1 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)_currentItemDidChangeNotification:(id)arg1 ;
-(BOOL)_resumePlayback:(double)arg1 ;
-(void)setDefaultItemEQPresetType:(long long)arg1 ;
-(void)_setExpectedAssetTypes:(id)arg1 ;
-(id)playbackQueueCommitHandler;
-(void)setPlaybackQueueCommitHandler:(id)arg1 ;
-(long long)defaultItemEQPresetType;
-(float)rawRate;
@end

