/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) EKUIAlarm * alarm;                                           //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,retain) EKUIAlarm * previousAlarm;                                   //@synthesize previousAlarm=_previousAlarm - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) unsigned long long alarmIndex;                               //@synthesize alarmIndex=_alarmIndex - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;              //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLeaveNowOption;                               //@synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption - In the implementation block
@property (assign,nonatomic) BOOL eventHasTravelTime;                                     //@synthesize eventHasTravelTime=_eventHasTravelTime - In the implementation block
@property (assign,nonatomic) long long presetIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableHeaderView;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(EKUIAlarm *)alarm;
-(void)setAlarm:(EKUIAlarm *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(BOOL)customSelected;
-(unsigned long long)alarmIndex;
-(EKUIAlarm *)previousAlarm;
-(void)setPreviousAlarm:(EKUIAlarm *)arg1 ;
-(void)_storeChanged:(id)arg1 ;
-(void)setAlarmIndex:(unsigned long long)arg1 ;
-(void)setEventHasTravelTime:(BOOL)arg1 ;
-(void)setShouldShowLeaveNowOption:(BOOL)arg1 ;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
-(BOOL)eventHasTravelTime;
-(void)alarmTable:(id)arg1 didSelectRowAtIndexPath:(id)arg2 commitSelectionBlock:(/*^block*/id)arg3 ;
-(BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(long long)arg1 ;
-(long long)presetIdentifier;
-(void)setCustomString:(id)arg1 ;
-(BOOL)shouldShowLeaveNowOption;
@end

