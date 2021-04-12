/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class UIViewController, PSRootController, PSSpecifier, _UITableViewDiffableDataSource, UIBarButtonItem, UILabel, NSString;

@interface CKBlackholeConversationListViewController : UITableViewController <UITableViewDelegate, PSController> {

	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	_UITableViewDiffableDataSource* _tableViewDataSource;
	UIBarButtonItem* _clearAllButton;
	UILabel* _emptyConversationListLabel;

}

@property (nonatomic,retain) _UITableViewDiffableDataSource * tableViewDataSource;              //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * clearAllButton;                                  //@synthesize clearAllButton=_clearAllButton - In the implementation block
@property (nonatomic,retain) UILabel * emptyConversationListLabel;                              //@synthesize emptyConversationListLabel=_emptyConversationListLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)specifier;
-(void)suspend;
-(void)handleURL:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)setSpecifier:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(void)setRootController:(id)arg1 ;
-(id)rootController;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(id)_conversations;
-(id)_conversationList;
-(void)_updateConversationList;
-(UIBarButtonItem *)clearAllButton;
-(void)setTableViewDataSource:(_UITableViewDiffableDataSource *)arg1 ;
-(void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_alertTitleForDelete;
-(void)_deleteConversation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)popViewControllerIfNecessary;
-(void)_clearAllTappedWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_alertTitleForClearAll;
-(void)_batchDeleteConversationWithCompletionHandler:(/*^block*/id)arg1 ;
-(_UITableViewDiffableDataSource *)tableViewDataSource;
-(UILabel *)emptyConversationListLabel;
-(void)_clearAllTapped;
-(void)setClearAllButton:(UIBarButtonItem *)arg1 ;
-(void)setEmptyConversationListLabel:(UILabel *)arg1 ;
@end

