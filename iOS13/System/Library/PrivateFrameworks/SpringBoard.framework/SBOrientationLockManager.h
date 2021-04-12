/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(void)lock;
-(void)unlock;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEffectivelyLocked;
-(void)lock:(long long)arg1 ;
-(void)setLockOverrideEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)restoreStateFromPrefs;
-(BOOL)isUserLocked;
-(long long)userLockOrientation;
-(BOOL)lockOverrideEnabled;
-(void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(BOOL)arg2 changes:(/*^block*/id)arg3 ;
-(void)_updateLockStateWithChanges:(/*^block*/id)arg1 ;
-(void)_addLockOverrideReason:(id)arg1 orientation:(long long)arg2 force:(BOOL)arg3 ;
-(void)_removeLockOverrideReason:(id)arg1 ;
-(void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(BOOL)arg2 ;
-(void)_handler_runLoopObserverDispose;
-(long long)effectiveLockedOrientation;
-(long long)deviceOrientationAsFarAsAppsAreConcerned;
-(void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2 ;
-(void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2 ;
-(void)_beginShimmingForReason:(id)arg1 ;
-(void)_endShimmingForReason:(id)arg1 ;
-(void)updateLockOverrideForCurrentDeviceOrientation;
@end

