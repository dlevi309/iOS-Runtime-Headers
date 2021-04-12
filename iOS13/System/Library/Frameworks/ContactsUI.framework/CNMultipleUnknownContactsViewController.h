/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol CNMultipleUnknownContactsViewControllerDelegate;
@class CNContactStore, NSArray, NSMutableSet, CNContactFormatter, NSString;

@interface CNMultipleUnknownContactsViewController : UITableViewController <CNContactViewControllerDelegate> {

	CNContactStore* _contactStore;
	id<CNMultipleUnknownContactsViewControllerDelegate> _delegate;
	NSArray* _contacts;
	NSMutableSet* _createdContactIdentifiers;
	CNContactFormatter* _formatter;

}

@property (nonatomic,copy) NSArray * contacts;                                                                 //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSMutableSet * createdContactIdentifiers;                                         //@synthesize createdContactIdentifiers=_createdContactIdentifiers - In the implementation block
@property (nonatomic,retain) CNContactFormatter * formatter;                                                   //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id<CNMultipleUnknownContactsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)contactFormatter;
-(id<CNMultipleUnknownContactsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNMultipleUnknownContactsViewControllerDelegate>)arg1 ;
-(CNContactFormatter *)formatter;
-(void)setFormatter:(CNContactFormatter *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSArray *)contacts;
-(void)_didComplete;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(id)initWithContacts:(id)arg1 ;
-(void)_showAddAllToContactsConfirmation;
-(void)_save:(id)arg1 ;
-(void)_createNewContacts:(id)arg1 ;
-(void)_addToExistingContacts:(id)arg1 ;
-(void)_presentUnknownContact:(id)arg1 ;
-(id)_existingMatchForUnknownContact:(id)arg1 ;
-(id)_updatedContact:(id)arg1 withPropertiesFromContact:(id)arg2 ;
-(NSMutableSet *)createdContactIdentifiers;
-(void)setCreatedContactIdentifiers:(NSMutableSet *)arg1 ;
@end

