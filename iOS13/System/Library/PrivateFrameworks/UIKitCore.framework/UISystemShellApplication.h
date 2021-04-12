/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIApplication.h>

@class FBDisplayLayoutTransition;

@interface UISystemShellApplication : UIApplication {

	FBDisplayLayoutTransition* _interfaceOrientationTransition;
	id _didFinishLaunchingObserver;

}
+(BOOL)registerAsSystemApp;
+(BOOL)rendersLocally;
-(id)init;
-(BOOL)isSuspended;
-(BOOL)isFrontBoard;
-(BOOL)canOpenURL:(id)arg1 ;
-(BOOL)isSuspendedEventsOnly;
-(BOOL)isSuspendedUnderLock;
-(BOOL)_saveSnapshotWithName:(id)arg1 ;
-(BOOL)_openURL:(id)arg1 ;
-(BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1 ;
-(BOOL)handleStatusBarHoverActionForRegion:(long long)arg1 ;
-(void)resetIdleTimerAndUndim;
-(void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3 ;
-(long long)startupInterfaceOrientation;
-(long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
@end

