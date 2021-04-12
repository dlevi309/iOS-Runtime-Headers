/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBLockScreenManager, SBLockStateAggregator, NSMutableDictionary, NSMutableSet, DNDEventBehaviorResolutionService;

@interface SBNCSoundController : NSObject {

	SBLockScreenManager* _lockScreenManager;
	SBLockStateAggregator* _lockStateAggregator;
	NSMutableDictionary* _playingSounds;
	NSMutableSet* _requestsRequiringExplicitKill;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;

}

@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                            //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                        //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playingSounds;                                                //@synthesize playingSounds=_playingSounds - In the implementation block
@property (nonatomic,retain) NSMutableSet * requestsRequiringExplicitKill;                                       //@synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;              //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
-(id)init;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(void)stopSoundForNotificationRequest:(id)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(BOOL)_isDeviceUILocked;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(void)_lockStateChanged:(id)arg1 ;
-(NSMutableDictionary *)playingSounds;
-(NSMutableSet *)requestsRequiringExplicitKill;
-(BOOL)canPlaySoundForNotificationRequest:(id)arg1 ;
-(void)_killSounds;
-(id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 ;
-(void)setPlayingSounds:(NSMutableDictionary *)arg1 ;
-(void)setRequestsRequiringExplicitKill:(NSMutableSet *)arg1 ;
@end

