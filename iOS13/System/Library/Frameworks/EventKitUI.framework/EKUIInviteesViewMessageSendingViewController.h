/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSArray, NSString, EKEvent;

@interface EKUIInviteesViewMessageSendingViewController : UIViewController <MFMailComposeViewControllerDelegate> {

	NSArray* _recipients;
	NSString* _subjectPrefix;
	NSString* _body;
	/*^block*/id _messageSendingComplete;
	EKEvent* _event;

}

@property (nonatomic,retain) EKEvent * event;                       //@synthesize event=_event - In the implementation block
@property (retain) NSArray * recipients;                            //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSString * subjectPrefix;                        //@synthesize subjectPrefix=_subjectPrefix - In the implementation block
@property (retain) NSString * body;                                 //@synthesize body=_body - In the implementation block
@property (copy) id messageSendingComplete;                         //@synthesize messageSendingComplete=_messageSendingComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowForEvent:(id)arg1 withRecipients:(id)arg2 ;
+(id)_recipientEmailAddressesToDisplayNames:(id)arg1 recipients:(id)arg2 ;
+(id)_attendeesIgnorningMe:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)setMessageSendingComplete:(id)arg1 ;
-(void)setSubjectPrefix:(NSString *)arg1 ;
-(NSString *)subjectPrefix;
-(id)_htmlBodyForMailMessageWithNames:(id)arg1 ;
-(id)messageSendingComplete;
-(BOOL)prefersToBePresentedFromApplicationRootViewController;
-(BOOL)prefersForcedModalShowViewController;
@end

