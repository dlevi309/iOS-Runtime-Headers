/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNSessionUpdateManager.h>

@class NSTimer;

@interface MNTracePlayerETAUpdater : MNSessionUpdateManager {

	NSTimer* _delayTimer;

}
-(void)dealloc;
-(void)_handleDelayTimerWithUpdateRow:(id)arg1 ;
-(void)playETAUpdate:(id)arg1 ;
-(void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(int)arg2 ;
-(void)resumeUpdateRequests;
@end

