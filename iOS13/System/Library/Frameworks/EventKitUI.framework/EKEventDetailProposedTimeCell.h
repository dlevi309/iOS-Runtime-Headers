/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)update;
-(BOOL)shouldDisplayForEvent;
-(BOOL)hasCustomLayout;
-(id)initWithEvent:(id)arg1 andAttendee:(id)arg2 ;
@end

