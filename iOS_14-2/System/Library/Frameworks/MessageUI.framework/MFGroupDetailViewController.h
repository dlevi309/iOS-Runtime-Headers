/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroup:(MFRecentComposeRecipientGroup *)arg1 ;
-(MFRecentComposeRecipientGroup *)group;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_removeButtonTapped:(id)arg1 ;
-(id<MFGroupDetailViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<MFGroupDetailViewControllerDelegate>)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

