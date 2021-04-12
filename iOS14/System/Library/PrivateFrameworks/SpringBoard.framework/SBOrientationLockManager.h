/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableSet, NSMutableDictionary;

@interface SBOrientationLockManager : NSObject {

	long long _userLockedOrientation;
	long long _previousLockedOrientation;
	CFRunLoopObserverRef _runLoopObserver;
	NSMutableSet* _lockOverrideReasons;
	NSMutableDictionary* _shimmedDeviceOrientationAssertions;

}
+(id)sharedInstance;
-(void)unlock;
-(id)succinctDescription;
-(BOOL)isEffectivelyLocked;
-(void)_updateLockStateWithChanges:(/*^block*/id)arg1 ;
-(id)init;
-(void)_beginShimmingForReason:(id)arg1 ;
-(void)restoreStateFromPrefs;
-(void)_addLockOverrideReason:(id)arg1 orientation:(long long)arg2 force:(BOOL)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2 ;
-(long long)effectiveLockedOrientation;
-(BOOL)isUserLocked;
-(void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(BOOL)arg2 ;
-(void)lock;
-(void)updateLockOverrideForCurrentDeviceOrientation;
-(id)description;
-(long long)userLockOrientation;
-(BOOL)lockOverrideEnabled;
-(void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(BOOL)arg2 changes:(/*^block*/id)arg3 ;
-(void)lock:(long long)arg1 ;
-(long long)deviceOrientationAsFarAsAppsAreConcerned;
-(void)setLockOverrideEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2 ;
-(id)succinctDescriptionBuilder;
-(void)_handler_runLoopObserverDispose;
-(void)_removeLockOverrideReason:(id)arg1 ;
-(void)_endShimmingForReason:(id)arg1 ;
-(void)dealloc;
@end

