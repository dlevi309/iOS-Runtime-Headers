/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKCalendarEditItemDelegate <NSObject>
@required
-(id)tableView;
-(id)owningNavigationController;
-(void)calendarItemStartedEditing:(id)arg1;
-(int)sectionForCalendarEditItem:(id)arg1;
-(BOOL)isNewCalendar;

@end

