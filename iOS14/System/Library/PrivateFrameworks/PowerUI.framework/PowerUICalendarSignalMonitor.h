/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log;
@class EKEventStore, NSObject, NSString;

@interface PowerUICalendarSignalMonitor : NSObject <PowerUISignalMonitor> {

	EKEventStore* _calendar;
	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) EKEventStore * calendar;                                //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                               //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(unsigned long long)signalID;
-(void)stopMonitoring;
-(void)setCalendar:(EKEventStore *)arg1 ;
-(id)nextFlightEventWithEvents:(id)arg1 ;
-(id)upcomingEvents;
-(NSObject*<OS_os_log>)log;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(id)requiredFullChargeDate;
-(void)startMonitoring;
-(EKEventStore *)calendar;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)sourceInformationChangedNotification:(id)arg1 ;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)nextRelevantCalendarEventWithEvents:(id)arg1 ;
@end

