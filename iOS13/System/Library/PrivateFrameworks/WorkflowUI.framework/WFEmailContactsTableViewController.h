/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFEmailContactsTableViewControllerDelegate;
@class NSSet, NSMutableSet;

@interface WFEmailContactsTableViewController : UITableViewController {

	id<WFEmailContactsTableViewControllerDelegate> _delegate;
	NSSet* _allContacts;
	NSMutableSet* _selectedContacts;
	unsigned long long _type;

}

@property (nonatomic,retain) NSSet * allContacts;                                                         //@synthesize allContacts=_allContacts - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedContacts;                                             //@synthesize selectedContacts=_selectedContacts - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<WFEmailContactsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id<WFEmailContactsTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFEmailContactsTableViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)done:(id)arg1 ;
-(NSSet *)allContacts;
-(void)cancel:(id)arg1 ;
-(NSMutableSet *)selectedContacts;
-(void)setAllContacts:(NSSet *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 contacts:(id)arg2 ;
-(void)setSelectedContacts:(NSMutableSet *)arg1 ;
@end

