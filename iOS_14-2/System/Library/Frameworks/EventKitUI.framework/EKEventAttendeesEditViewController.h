/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/EKUIManagedViewController.h>

@class EKEventAttendeePicker, EKEvent, NSArray, NSString;

@interface EKEventAttendeesEditViewController : EKEditItemViewController <EKUIManagedViewController> {

	EKEventAttendeePicker* _picker;
	EKEvent* _event;
	BOOL _cancelTapped;
	BOOL _disableShowingButtons;
	BOOL _appendOnly;

}

@property (assign,nonatomic) BOOL disableShowingButtons;              //@synthesize disableShowingButtons=_disableShowingButtons - In the implementation block
@property (nonatomic,copy) NSArray * attendees; 
@property (assign,nonatomic) BOOL appendOnly;                         //@synthesize appendOnly=_appendOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(NSArray *)attendees;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(BOOL)presentModally;
-(BOOL)wantsManagement;
-(BOOL)canManagePresentationStyle;
-(id)initWithFrame:(CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)setDisableShowingButtons:(BOOL)arg1 ;
-(void)setAppendOnly:(BOOL)arg1 ;
-(void)setSearchAccountID:(id)arg1 ;
-(BOOL)appendOnly;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)setAttendees:(NSArray *)arg1 ;
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

