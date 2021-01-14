/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log;
@class MTAlarmManager, NSObject, NSString;

@interface PowerUIAlarmSignalMonitor : NSObject <PowerUISignalMonitor> {

	MTAlarmManager* _alarmManager;
	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) MTAlarmManager * alarmManager;                          //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                               //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(MTAlarmManager *)alarmManager;
-(unsigned long long)signalID;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(void)stopMonitoring;
-(id)nextAlarm;
-(NSObject*<OS_os_log>)log;
-(id)nextLocalAlarm;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(id)requiredFullChargeDate;
-(void)startMonitoring;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)sourceInformationChangedNotification:(id)arg1 ;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

