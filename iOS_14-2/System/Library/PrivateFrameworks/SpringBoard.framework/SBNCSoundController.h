/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBLockScreenManager *)lockScreenManager;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(NSMutableDictionary *)playingSounds;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 ;
-(void)stopSoundForNotificationRequest:(id)arg1 ;
-(id)init;
-(BOOL)_isDeviceUILocked;
-(void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(BOOL)canPlaySoundForNotificationRequest:(id)arg1 ;
-(void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(void)setPlayingSounds:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)requestsRequiringExplicitKill;
-(void)_lockStateChanged:(id)arg1 ;
-(void)setRequestsRequiringExplicitKill:(NSMutableSet *)arg1 ;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)_killSounds;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
@end

