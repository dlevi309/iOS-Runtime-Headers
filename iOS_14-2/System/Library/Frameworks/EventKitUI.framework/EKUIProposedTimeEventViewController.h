/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class EKCalendarEventInvitationNotificationAttendee, EKUIRecurrenceAlertController, EKUIInviteesViewMessageSendingManager;

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol> {

	/*^block*/id _completionBlock;
	EKCalendarEventInvitationNotificationAttendee* _proposedTimeAttendee;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKUIInviteesViewMessageSendingManager* _messageSendingManager;

}

@property (retain) EKCalendarEventInvitationNotificationAttendee * proposedTimeAttendee;              //@synthesize proposedTimeAttendee=_proposedTimeAttendee - In the implementation block
@property (retain) EKUIRecurrenceAlertController * recurrenceAlertController;                         //@synthesize recurrenceAlertController=_recurrenceAlertController - In the implementation block
@property (retain) EKUIInviteesViewMessageSendingManager * messageSendingManager;                     //@synthesize messageSendingManager=_messageSendingManager - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)_statusButtons;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2 ;
-(void)setMessageSendingManager:(EKUIInviteesViewMessageSendingManager *)arg1 ;
-(EKUIInviteesViewMessageSendingManager *)messageSendingManager;
-(void)setRecurrenceAlertController:(EKUIRecurrenceAlertController *)arg1 ;
-(EKUIRecurrenceAlertController *)recurrenceAlertController;
-(void)setProposedTimeAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg1 ;
-(id)proposedTime;
-(id)initWithProposedTimeAttendee:(id)arg1 ;
-(EKCalendarEventInvitationNotificationAttendee *)proposedTimeAttendee;
-(id)items;
-(id)viewTitle;
@end

