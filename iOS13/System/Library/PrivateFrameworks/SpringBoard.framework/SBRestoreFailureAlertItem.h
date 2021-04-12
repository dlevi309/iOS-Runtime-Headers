/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBRestoreFailureAlertItem : SBAlertItem
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)performUnlockAction;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)allowInSetup;
-(BOOL)suppressForKeynote;
-(void)_rebootNow;
-(void)restartSystemEvent;
@end

