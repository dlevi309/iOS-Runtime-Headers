/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTUpdateTimerIntentHandler.h>
#import <libobjc.A.dylib/INSetTimerAttributeIntentHandling.h>

@class NSString;

@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler <INSetTimerAttributeIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSetTimerAttribute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmSetTimerAttribute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTargetTimerForSetTimerAttribute:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveToDurationForSetTimerAttribute:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_responseToSetTimerAttributeIntent:(id)arg1 withUpdatedTimer:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_updateTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3 dryRun:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
@end

