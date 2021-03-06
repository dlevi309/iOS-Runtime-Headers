/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAutoUnlockComposableRule.h>

@class SBFUserAuthenticationController, SBSyncController;

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule {

	SBFUserAuthenticationController* _userAuthenticationController;
	SBSyncController* _syncController;

}

@property (setter=_setSyncController:,getter=_syncController,nonatomic,retain) SBSyncController * syncController;              //@synthesize syncController=_syncController - In the implementation block
@property (nonatomic,readonly) SBFUserAuthenticationController * userAuthenticationController;                                 //@synthesize userAuthenticationController=_userAuthenticationController - In the implementation block
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(id)_syncController;
-(id)_initWithUserAuthenticationController:(id)arg1 syncController:(id)arg2 ;
-(id)initWithUserAuthenticationController:(id)arg1 ;
-(SBFUserAuthenticationController *)userAuthenticationController;
-(void)_setSyncController:(id)arg1 ;
@end

