/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/_SFTableViewDiffableDataSourceDelegate.h>
#import <libobjc.A.dylib/SFEditableTableViewCellDelegate.h>

@protocol SFPasswordDetailViewControllerDelegate;
@class WBSSavedPassword, NSArray, UIBarButtonItem, SFEditableTableViewCell, UITableViewCell, _SFTableViewDiffableDataSource, SFSafariViewController, WBSPasswordEvaluation, NSString;

@interface SFPasswordDetailViewController : UITableViewController <_SFTableViewDiffableDataSourceDelegate, SFEditableTableViewCellDelegate> {

	WBSSavedPassword* _savedPassword;
	NSArray* _reusedSavedPasswords;
	BOOL _hidesPassword;
	unsigned long long _options;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	SFEditableTableViewCell* _userCell;
	SFEditableTableViewCell* _passwordCell;
	UITableViewCell* _changePasswordCell;
	_SFTableViewDiffableDataSource* _tableViewDiffableDataSource;
	SFSafariViewController* _changePasswordSafariViewController;
	WBSPasswordEvaluation* _passwordEvaluation;
	BOOL _showsChangePasswordControllerOnAppearance;
	id<SFPasswordDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFPasswordDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsChangePasswordControllerOnAppearance;                          //@synthesize showsChangePasswordControllerOnAppearance=_showsChangePasswordControllerOnAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SFPasswordDetailViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFPasswordDetailViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)_appWillResignActive:(id)arg1 ;
-(BOOL)_allowEditing;
-(void)_textFieldChanged:(id)arg1 ;
-(void)_editBarButtonItemTapped:(id)arg1 ;
-(void)_cancelBarButtonItemTapped:(id)arg1 ;
-(id)initWithSavedPassword:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setShowsChangePasswordControllerOnAppearance:(BOOL)arg1 ;
-(id)_passwordEvaluator;
-(void)_doneBarButtonItemTapped:(id)arg1 ;
-(BOOL)_allowAuditing;
-(void)_passwordStoreDidUpdate;
-(void)_appDidBecomeActive:(id)arg1 ;
-(void)_willHideUIMenuController:(id)arg1 ;
-(id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2 ;
-(id)_passwordAuditor;
-(void)_reloadTableViewDiffableDataSource;
-(void)_showChangePasswordSafariViewController;
-(void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)_itemTypeForIdentifier:(id)arg1 ;
-(void)_configureUserCell:(id)arg1 ;
-(id)_editableCellWithCell:(id)arg1 ;
-(void)_configurePasswordCell:(id)arg1 ;
-(id)_savedPasswordWebsiteCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_warningFooterText;
-(void)_configureCell:(id)arg1 withText:(id)arg2 detailText:(id)arg3 detailPlaceholderText:(id)arg4 ;
-(void)_setHighLyLegibleFontForDetailTextInCell:(id)arg1 ;
-(void)_updateMenuItems;
-(long long)_sectionTypeForSection:(long long)arg1 ;
-(void)safari_sharePassword:(id)arg1 ;
-(void)safari_copyUserName:(id)arg1 ;
-(void)safari_copyPassword:(id)arg1 ;
-(void)_sharePasswordFromCell:(id)arg1 ;
-(id)_lastModifiedDateString;
-(void)dataSource:(id)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3 ;
-(id)dataSource:(id)arg1 headerTextForSection:(long long)arg2 ;
-(id)dataSource:(id)arg1 footerTextForSection:(long long)arg2 ;
-(void)performAirDropActionForCell:(id)arg1 ;
-(BOOL)showsChangePasswordControllerOnAppearance;
@end

