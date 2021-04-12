/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SFAddPasswordViewControllerDelegate;
@class UIBarButtonItem, SFEditableTableViewCell, NSString;

@interface SFAddPasswordViewController : UITableViewController <UITextFieldDelegate> {

	UIBarButtonItem* _cancelBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	SFEditableTableViewCell* _websiteCell;
	SFEditableTableViewCell* _userCell;
	SFEditableTableViewCell* _passwordCell;
	id<SFAddPasswordViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFAddPasswordViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<SFAddPasswordViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<SFAddPasswordViewControllerDelegate>)arg1 ;
-(void)_savePasswordAndDismiss;
-(void)viewDidLoad;
-(void)_textFieldChanged:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_cancelBarButtonItemTapped:(id)arg1 ;
-(void)_doneBarButtonItemTapped:(id)arg1 ;
@end

