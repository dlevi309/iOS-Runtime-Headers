/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNMultipleUnknownContactsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIEditAuthorizationControllerDelegate.h>

@protocol CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate;
@class CNQueue, CNContactStore, UIViewController, CNUIEditAuthorizationController, NSString;

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate> {

	id<CNVCardImportControllerPresentationDelegate> _presentationDelegate;
	id<CNVCardImportControllerDelegate> _delegate;
	CNQueue* _receivedContactsQueue;
	CNContactStore* _contactStore;
	UIViewController* _presentedViewController;
	CNUIEditAuthorizationController* _editAuthorizationController;

}

@property (assign,nonatomic,__weak) id<CNVCardImportControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,retain) CNQueue * receivedContactsQueue;                                                          //@synthesize receivedContactsQueue=_receivedContactsQueue - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;                                        //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) CNUIEditAuthorizationController * editAuthorizationController;                            //@synthesize editAuthorizationController=_editAuthorizationController - In the implementation block
@property (assign,nonatomic,__weak) id<CNVCardImportControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNVCardImportControllerDelegate>)delegate;
-(void)setDelegate:(id<CNVCardImportControllerDelegate>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(UIViewController *)presentedViewController;
-(void)setPresentationDelegate:(id<CNVCardImportControllerPresentationDelegate>)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2 ;
-(void)showEditAuthorizationPane:(id)arg1 animated:(BOOL)arg2 ;
-(CNUIEditAuthorizationController *)editAuthorizationController;
-(void)setEditAuthorizationController:(CNUIEditAuthorizationController *)arg1 ;
-(void)multipleUnknownContactsViewControllerDidComplete:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2 ;
-(id)contactsFromURL:(id)arg1 ;
-(void)presentEnqueueResultsUIForResultContacts:(id)arg1 ;
-(BOOL)enqueueContactsAtURL:(id)arg1 ;
-(void)enqueueContacts:(id)arg1 ;
-(id)dequeueContacts;
-(void)processNextContacts;
-(void)presentImportUIForContacts:(id)arg1 ;
-(void)dismissContactsAndPresentNext;
-(void)saveUnknownPersons:(id)arg1 ;
-(void)authorizeAndSaveUnknownPersons;
-(id)authorizationCheckForSavingReceivedContacts;
-(void)saveUnknownPersonsAndMarkSaveWithAuthorizationResult:(long long)arg1 ;
-(void)cancelModalUnknownPersons:(id)arg1 ;
-(id<CNVCardImportControllerPresentationDelegate>)presentationDelegate;
-(CNQueue *)receivedContactsQueue;
-(void)setReceivedContactsQueue:(CNQueue *)arg1 ;
@end

