/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroup:(CNRecentComposeRecipientGroup *)arg1 ;
-(CNRecentComposeRecipientGroup *)group;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_removeButtonTapped:(id)arg1 ;
-(id<CNAutocompleteGroupDetailViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CNAutocompleteGroupDetailViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

