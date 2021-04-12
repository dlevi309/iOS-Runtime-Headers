/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol MFGroupDetailViewControllerDelegate;
@class MFRecentComposeRecipientGroup;

@interface MFGroupDetailViewController : UITableViewController {

	id<MFGroupDetailViewControllerDelegate> _delegate;
	MFRecentComposeRecipientGroup* _group;

}

@property (assign,nonatomic,__weak) id<MFGroupDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFRecentComposeRecipientGroup * group;                                //@synthesize group=_group - In the implementation block
-(id<MFGroupDetailViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MFGroupDetailViewControllerDelegate>)arg1 ;
-(void)setGroup:(MFRecentComposeRecipientGroup *)arg1 ;
-(MFRecentComposeRecipientGroup *)group;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_removeButtonTapped:(id)arg1 ;
@end

