/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/CalendarEventAlarmTableDelegate.h>

@class CalendarEventAlarmTable, EKUIRecurrenceAlertController, EKUIAlarm, EKCalendar, NSString;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {

	CalendarEventAlarmTable* _table;
	BOOL _immediateAlarmCreation;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	BOOL _allDay;
	BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
	BOOL _shouldShowLeaveNowOption;
	BOOL _eventHasTravelTime;
	EKUIAlarm* _alarm;
	EKUIAlarm* _previousAlarm;
	EKCalendar* _calendar;
	unsigned long long _alarmIndex;
	unsigned long long _timeToLeaveLocationStatus;

}

@property (nonatomic,retain) EKUIAlarm * alarm;                                           //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,retain) EKUIAlarm * previousAlarm;                                   //@synthesize previousAlarm=_previousAlarm - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) unsigned long long alarmIndex;                               //@synthesize alarmIndex=_alarmIndex - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;              //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLeaveNowOption;                               //@synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption - In the implementation block
@property (assign,nonatomic) BOOL eventHasTravelTime;                                     //@synthesize eventHasTravelTime=_eventHasTravelTime - In the implementation block
@property (assign,nonatomic) unsigned long long timeToLeaveLocationStatus;                //@synthesize timeToLeaveLocationStatus=_timeToLeaveLocationStatus - In the implementation block
@property (assign,nonatomic) long long presetIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllDay:(BOOL)arg1 ;
-(void)_storeChanged:(id)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(EKCalendar *)calendar;
-(BOOL)allDay;
-(void)setAlarm:(EKUIAlarm *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)viewDidLoad;
-(unsigned long long)alarmIndex;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)customSelected;
-(id)tableHeaderView;
-(void)loadView;
-(void)setTimeToLeaveLocationStatus:(unsigned long long)arg1 ;
-(EKUIAlarm *)previousAlarm;
-(void)setPreviousAlarm:(EKUIAlarm *)arg1 ;
-(BOOL)eventHasTravelTime;
-(void)alarmTable:(id)arg1 didSelectRowAtIndexPath:(id)arg2 commitSelectionBlock:(/*^block*/id)arg3 ;
-(void)setCustomString:(id)arg1 ;
-(long long)presetIdentifier;
-(EKUIAlarm *)alarm;
-(BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(long long)arg1 ;
-(BOOL)shouldShowLeaveNowOption;
-(unsigned long long)timeToLeaveLocationStatus;
-(void)setAlarmIndex:(unsigned long long)arg1 ;
-(void)setEventHasTravelTime:(BOOL)arg1 ;
-(void)setShouldShowLeaveNowOption:(BOOL)arg1 ;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
@end

