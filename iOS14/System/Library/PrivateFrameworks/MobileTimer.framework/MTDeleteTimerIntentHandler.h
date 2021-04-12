/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTTimerIntentHandler.h>
#import <libobjc.A.dylib/INDeleteTimerIntentHandling.h>

@class NSString;

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmDeleteTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDeleteTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2 ;
-(id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_deleteTimer:(id)arg1 multiple:(BOOL)arg2 dryRun:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

