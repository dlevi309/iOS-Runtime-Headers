/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

