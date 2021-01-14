/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <Foundation/NSOperation.h>

@interface SBPPTOperation : NSOperation
+(id)operationToUnlockInterfaceFinishingUIUnlock:(BOOL)arg1 ;
+(id)operationToSynthesizeEventsForEventActions:(/*^block*/id)arg1 ;
+(void)enqueueOperations:(id)arg1 ;
+(id)operationToUnlockInterface;
+(id)operationToLockInterface;
+(id)operationToSetInterfaceOrientation:(long long)arg1 ;
+(id)operationToWaitForTimeInterval:(double)arg1 ;
+(id)operationToWaitForNotificationName:(id)arg1 object:(id)arg2 timeout:(double)arg3 ;
+(id)operationToTransitionToHomeScreen;
+(id)operationToSaveHomeScreenState;
+(id)operationToRestoreHomeScreenState;
+(id)operationToPresentAppSwitcher;
+(id)operationToDismissAppSwitcher;
+(id)operationToSaveAppSwitcherState;
+(id)operationToRestoreAppSwitcherState;
+(id)operationToLoadPPTAppSwitcherState;
+(id)operationToPresentCoverSheet;
+(id)operationToDismissCoverSheet;
+(id)operationToPresentFloatingDock;
+(id)operationToDismissFloatingDock;
+(id)operationToPresentBannerNotification;
+(id)operationToDismissBannerNotification;
+(id)operationToActivateApplicationWithBundleIdentifier:(id)arg1 ;
+(id)operationToTerminateApplicationWithBundleIdentifier:(id)arg1 ;
+(id)operationToSynthesizeEventsForCommandString:(id)arg1 ;
+(id)operationToSynthesizeEventsForEventStream:(id)arg1 ;
+(id)operationToSwipeUpInMiddleOfInterface;
+(id)operationToSwipeDownInMiddleOfInterface;
+(id)operationToSwipeLeftInMiddleOfInterface;
+(id)operationToSwipeRightInMiddleOfInterface;
@end

