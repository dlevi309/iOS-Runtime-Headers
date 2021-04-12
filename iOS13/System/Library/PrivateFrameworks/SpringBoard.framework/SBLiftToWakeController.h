/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CMWakeGestureDelegate.h>

@class CMWakeGestureManager, NSHashTable, SBIdleTimerDefaults, NSString;

@interface SBLiftToWakeController : NSObject <CMWakeGestureDelegate> {

	CMWakeGestureManager* _wakeGestureManager;
	long long _wakeGestureState;
	NSHashTable* _observers;
	SBIdleTimerDefaults* _idleTimerDefaults;
	BOOL _screenOn;
	BOOL _isEnabled;
	BOOL _observingCMWakeGestureManager;

}

@property (setter=_setIdleTimerDefaults:,getter=_idleTimerDefaults,nonatomic,retain) SBIdleTimerDefaults * idleTimerDefaults;              //@synthesize idleTimerDefaults=_idleTimerDefaults - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                                              //@synthesize isEnabled=_isEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isEnabled;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3 ;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3 detectedAt:(unsigned long long)arg4 ;
-(void)_startObservingIfNecessary;
-(id)_idleTimerDefaults;
-(id)initWithBacklightController:(id)arg1 idleTimerDefaults:(id)arg2 ;
-(void)_handleBacklightLevelChanged:(id)arg1 ;
-(void)_reconsiderEnablement;
-(void)_stopObservingIfNecessary;
-(void)_screenTurnedOff;
-(void)_screenTurnedOn;
-(void)_sendTransitionToObservers:(long long)arg1 deviceOrientation:(long long)arg2 ;
-(void)_ignoredTransition:(long long)arg1 ;
-(BOOL)_isObservingWakeGestureManager;
-(void)_setIdleTimerDefaults:(id)arg1 ;
@end

