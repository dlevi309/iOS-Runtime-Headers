/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTTimerIntentHandler.h>
#import <libobjc.A.dylib/INCreateTimerIntentHandling.h>

@class NSString;

@interface MTCreateSingleTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCreateTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmCreateTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_createTimerWithIntent:(id)arg1 dryRun:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
@end

