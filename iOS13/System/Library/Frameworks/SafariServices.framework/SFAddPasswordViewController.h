/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewController.h>

@protocol SFAddPasswordViewControllerDelegate;
@class UIBarButtonItem, SFEditableTableViewCell;

@interface SFAddPasswordViewController : UITableViewController {

	UIBarButtonItem* _cancelBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	SFEditableTableViewCell* _websiteCell;
	SFEditableTableViewCell* _userCell;
	SFEditableTableViewCell* _passwordCell;
	id<SFAddPasswordViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFAddPasswordViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SFAddPasswordViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFAddPasswordViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)_textFieldChanged:(id)arg1 ;
-(void)_cancelBarButtonItemTapped:(id)arg1 ;
-(void)_doneBarButtonItemTapped:(id)arg1 ;
@end

