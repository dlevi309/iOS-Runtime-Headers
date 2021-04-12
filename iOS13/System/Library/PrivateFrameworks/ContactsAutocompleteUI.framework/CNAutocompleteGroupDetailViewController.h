/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol CNAutocompleteGroupDetailViewControllerDelegate;
@class CNRecentComposeRecipientGroup;

@interface CNAutocompleteGroupDetailViewController : UITableViewController {

	id<CNAutocompleteGroupDetailViewControllerDelegate> _delegate;
	CNRecentComposeRecipientGroup* _group;

}

@property (assign,nonatomic,__weak) id<CNAutocompleteGroupDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNRecentComposeRecipientGroup * group;                                            //@synthesize group=_group - In the implementation block
-(id<CNAutocompleteGroupDetailViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNAutocompleteGroupDetailViewControllerDelegate>)arg1 ;
-(void)setGroup:(CNRecentComposeRecipientGroup *)arg1 ;
-(CNRecentComposeRecipientGroup *)group;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_removeButtonTapped:(id)arg1 ;
@end

