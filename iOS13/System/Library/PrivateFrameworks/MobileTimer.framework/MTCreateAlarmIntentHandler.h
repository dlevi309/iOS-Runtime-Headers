/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTAlarmIntentHandler.h>
#import <libobjc.A.dylib/MTCreateAlarmIntentHandling.h>

@class NSString;

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alarmUserActivityWithIntent:(id)arg1 ;
-(void)handleMTCreateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveLabelForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDateComponentsForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveRepeatScheduleForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmMTCreateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)defaultRepeatScheduleForMTCreateAlarm:(id)arg1 ;
@end

