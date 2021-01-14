/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSArray, NSString, EKEvent, MFMailComposeViewController, UIViewController;

@interface EKUIInviteesViewMessageSendingManager : NSObject <MFMailComposeViewControllerDelegate> {

	NSArray* _recipients;
	NSString* _subjectPrefix;
	NSString* _bodyPrefix;
	/*^block*/id _messageSendingComplete;
	EKEvent* _event;
	MFMailComposeViewController* _composeViewController;

}

@property (nonatomic,retain) EKEvent * event;                                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) MFMailComposeViewController * composeViewController;              //@synthesize composeViewController=_composeViewController - In the implementation block
@property (copy) id messageSendingComplete;                                                    //@synthesize messageSendingComplete=_messageSendingComplete - In the implementation block
@property (readonly) UIViewController * viewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_recipientEmailAddressesToDisplayNames:(id)arg1 recipients:(id)arg2 ;
+(id)_attendeesIgnorningMe:(id)arg1 ;
+(BOOL)canShowViewControllerForEvent:(id)arg1 withRecipients:(id)arg2 ;
-(void)initViewController;
-(id)_htmlBodyForMailMessageWithNames:(id)arg1 ;
-(MFMailComposeViewController *)composeViewController;
-(id)messageSendingComplete;
-(void)setComposeViewController:(MFMailComposeViewController *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(UIViewController *)viewController;
-(EKEvent *)event;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)initWithEvent:(id)arg1 recipients:(id)arg2 subjectPrefix:(id)arg3 bodyPrefix:(id)arg4 ;
-(void)setMessageSendingComplete:(id)arg1 ;
@end

