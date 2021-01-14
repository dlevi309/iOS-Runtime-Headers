/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)resetIdleTimerAndUndim;
-(BOOL)isSuspendedEventsOnly;
-(BOOL)handleStatusBarHoverActionForRegion:(long long)arg1 ;
-(BOOL)_openURL:(id)arg1 ;
-(BOOL)_saveSnapshotWithName:(id)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3 ;
-(long long)startupInterfaceOrientation;
-(BOOL)isFrontBoard;
-(void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1 ;
-(BOOL)isSuspendedUnderLock;
-(BOOL)isSuspended;
-(id)init;
@end

