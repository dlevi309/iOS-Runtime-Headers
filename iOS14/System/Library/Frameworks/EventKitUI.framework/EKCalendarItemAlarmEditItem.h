/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSArray, EKAlarmsViewModel;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {

	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	BOOL _userChangedAlarm;
	BOOL _hasLeaveNowAlarm;
	BOOL _canHaveLeaveNowAlarm;
	EKAlarmsViewModel* _alarmsViewModel;

}

@property (nonatomic,retain) EKAlarmsViewModel * alarmsViewModel;              //@synthesize alarmsViewModel=_alarmsViewModel - In the implementation block
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)ttlLocationStatusChanged:(id)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(void)_updateAlarms;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(EKAlarmsViewModel *)alarmsViewModel;
-(BOOL)_calendarItemHasLeaveNowAlarm;
-(BOOL)_alarmsMatchCalendarItem;
-(void)setAlarmsViewModel:(EKAlarmsViewModel *)arg1 ;
@end

