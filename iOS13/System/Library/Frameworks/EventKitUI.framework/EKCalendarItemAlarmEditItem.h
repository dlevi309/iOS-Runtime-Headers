/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray, EKAlarmsViewModel;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {

	CalendarEventAlarmTable* _alarmTable;
	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	BOOL _userChangedAlarm;
	BOOL _hasLeaveNowAlarm;
	BOOL _canHaveLeaveNowAlarm;
	EKAlarmsViewModel* _alarmsViewModel;

}

@property (nonatomic,retain) EKAlarmsViewModel * alarmsViewModel;              //@synthesize alarmsViewModel=_alarmsViewModel - In the implementation block
-(id)init;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(EKAlarmsViewModel *)alarmsViewModel;
-(void)setAlarmsViewModel:(EKAlarmsViewModel *)arg1 ;
-(void)_updateAlarms;
-(void)updateInternalTravelTimeStateForCalendarItem:(id)arg1 ;
-(BOOL)_calendarItemHasLeaveNowAlarm;
-(BOOL)_alarmsMatchCalendarItem;
@end

