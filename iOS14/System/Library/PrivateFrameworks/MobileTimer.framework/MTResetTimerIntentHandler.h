/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTUpdateTimerIntentHandler.h>
#import <libobjc.A.dylib/INResetTimerIntentHandling.h>

@class NSString;

@interface MTResetTimerIntentHandler : MTUpdateTimerIntentHandler <INResetTimerIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleResetTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmResetTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTargetTimerForResetTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_responseToResetTimerIntent:(id)arg1 withResetTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_handleResetTimer:(id)arg1 dryRun:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

