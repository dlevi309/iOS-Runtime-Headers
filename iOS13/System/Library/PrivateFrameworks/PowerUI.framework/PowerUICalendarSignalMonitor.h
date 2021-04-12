/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<PowerUISignalMonitorDelegate>)delegate;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(EKEventStore *)calendar;
-(void)setCalendar:(EKEventStore *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(unsigned long long)signalID;
-(id)requiredFullChargeDate;
-(void)sourceInformationChangedNotification:(id)arg1 ;
-(id)upcomingEvents;
-(id)nextFlightEventWithEvents:(id)arg1 ;
-(id)nextRelevantCalendarEventWithEvents:(id)arg1 ;
@end

