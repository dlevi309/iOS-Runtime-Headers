/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>

@class EKCalendar, EKCalendarEditor;

@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {

	EKCalendar* _calendar;
	EKCalendarEditor* _calendarEditor;

}
-(void)save;
-(CGSize)preferredContentSize;
-(id)initWithFrame:(CGRect)arg1 calendar:(id)arg2 ;
-(void)loadView;
@end

