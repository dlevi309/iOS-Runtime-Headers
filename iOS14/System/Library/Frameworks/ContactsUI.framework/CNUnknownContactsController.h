/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNMultipleUnknownContactsViewControllerDelegate.h>

@protocol CNUnknownContactsControllerDelegate;
@class CNContactStore, NSArray, UIViewController, NSString;

@interface CNUnknownContactsController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate> {

	id<CNUnknownContactsControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	NSArray* _contacts;
	UIViewController* _displayedController;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSArray * contacts;                                                 //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) UIViewController * displayedController;                               //@synthesize displayedController=_displayedController - In the implementation block
@property (assign,nonatomic,__weak) id<CNUnknownContactsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(CNContactStore *)contactStore;
-(NSArray *)contacts;
-(id<CNUnknownContactsControllerDelegate>)delegate;
-(BOOL)multipleUnknownContactsViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)multipleUnknownContactsViewControllerDidComplete:(id)arg1 ;
-(id)initWithContacts:(id)arg1 contactStore:(id)arg2 ;
-(void)setDisplayedController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<CNUnknownContactsControllerDelegate>)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(id)viewController;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(UIViewController *)displayedController;
@end

