/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class EKCalendarEventInvitationNotificationAttendee, EKUIRecurrenceAlertController;

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol> {

	/*^block*/id _completionBlock;
	EKCalendarEventInvitationNotificationAttendee* _proposedTimeAttendee;
	EKUIRecurrenceAlertController* _recurrenceAlertController;

}

@property (retain) EKCalendarEventInvitationNotificationAttendee * proposedTimeAttendee;              //@synthesize proposedTimeAttendee=_proposedTimeAttendee - In the implementation block
@property (retain) EKUIRecurrenceAlertController * recurrenceAlertController;                         //@synthesize recurrenceAlertController=_recurrenceAlertController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)items;
-(id)proposedTime;
-(id)_statusButtons;
-(id)viewTitle;
-(void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2 ;
-(id)initWithProposedTimeAttendee:(id)arg1 ;
-(EKCalendarEventInvitationNotificationAttendee *)proposedTimeAttendee;
-(void)setRecurrenceAlertController:(EKUIRecurrenceAlertController *)arg1 ;
-(void)setProposedTimeAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg1 ;
-(EKUIRecurrenceAlertController *)recurrenceAlertController;
@end

