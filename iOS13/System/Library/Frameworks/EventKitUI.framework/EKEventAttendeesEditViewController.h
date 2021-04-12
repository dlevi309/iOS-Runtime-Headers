/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>

@class EKEventAttendeePicker, EKEvent, NSArray;

@interface EKEventAttendeesEditViewController : EKEditItemViewController {

	EKEventAttendeePicker* _picker;
	EKEvent* _event;
	BOOL _cancelTapped;
	BOOL _disableShowingButtons;
	BOOL _appendOnly;

}

@property (assign,nonatomic) BOOL disableShowingButtons;              //@synthesize disableShowingButtons=_disableShowingButtons - In the implementation block
@property (nonatomic,copy) NSArray * attendees; 
@property (assign,nonatomic) BOOL appendOnly;                         //@synthesize appendOnly=_appendOnly - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(NSArray *)attendees;
-(BOOL)presentModally;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(id)initWithFrame:(CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)setDisableShowingButtons:(BOOL)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setAppendOnly:(BOOL)arg1 ;
-(void)setSearchAccountID:(id)arg1 ;
-(BOOL)appendOnly;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(BOOL)disableShowingButtons;
-(void)_cancelTapped:(id)arg1 ;
-(void)_doneTapped:(id)arg1 ;
-(BOOL)validateEmailWithString:(id)arg1 ;
-(id)_firstInvalidRecipientAddress;
-(id)_createAttendeeFromRecipient:(id)arg1 ;
-(id)_createRecipientFromAttendee:(id)arg1 ;
-(id)_attendeeFromRecipient:(id)arg1 ;
-(id)_recipientFromAttendee:(id)arg1 ;
-(BOOL)prefersToBePresentedFromUINavigationController;
@end

