/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSleepAlarmProvider.h>

@class NSArray, NAFuture, MTAlarmManager, NSString;

@interface HDSPMobileTimerBridge : NSObject <HDSPSleepAlarmProvider> {

	NAFuture* _alarmServerReady;
	MTAlarmManager* _alarmManager;

}

@property (nonatomic,readonly) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,readonly) NAFuture * alarmServerReady;                //@synthesize alarmServerReady=_alarmServerReady - In the implementation block
@property (nonatomic,readonly) NSArray * sleepAlarms; 
@property (nonatomic,readonly) NAFuture * sleepAlarmsFuture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sleepScheduleModelFromSleepAlarm:(id)arg1 ;
+(BOOL)sleepAlarm:(id)arg1 matchesSleepScheduleModel:(id)arg2 ;
-(void)resetSleepAlarmSnoozeState;
-(void)updateSleepAlarms;
-(MTAlarmManager *)alarmManager;
-(NAFuture *)alarmServerReady;
-(id)init;
-(id)initWithAlarmManager:(id)arg1 ;
-(NSArray *)sleepAlarms;
-(id)sleepAlarmsIgnoringCache:(BOOL)arg1 ;
-(void)_checkAlarmServer;
-(NAFuture *)sleepAlarmsFuture;
-(void)_alarmServerReady;
@end

