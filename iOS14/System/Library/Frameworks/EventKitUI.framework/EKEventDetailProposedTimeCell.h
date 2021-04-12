/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>

@class EKCalendarEventInvitationNotificationAttendee, EKEventDetailsHighlightControl, EKEvent;

@interface EKEventDetailProposedTimeCell : EKEventDetailCell {

	EKCalendarEventInvitationNotificationAttendee* _attendee;
	EKEventDetailsHighlightControl* _control;
	EKEvent* _event;

}
+(BOOL)requiresConstraintBasedLayout;
-(BOOL)hasCustomLayout;
-(BOOL)update;
-(BOOL)shouldDisplayForEvent;
-(id)initWithEvent:(id)arg1 andAttendee:(id)arg2 ;
@end

