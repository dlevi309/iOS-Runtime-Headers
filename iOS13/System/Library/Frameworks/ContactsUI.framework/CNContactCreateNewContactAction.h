/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class CNContact, UIViewController, NSString;

@interface CNContactCreateNewContactAction : CNContactAction <CNContactViewControllerDelegate> {

	CNContact* _createdContact;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) CNContact * createdContact;                                      //@synthesize createdContact=_createdContact - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)performActionWithSender:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(CNContact *)createdContact;
-(void)setCreatedContact:(CNContact *)arg1 ;
@end

