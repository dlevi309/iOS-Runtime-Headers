/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class _UITableViewDiffableDataSource, UIBarButtonItem, UILabel, CKScheduledUpdater, NSArray, NSString;

@interface CKBlackholeConversationListCommonViewController : UITableViewController <UITableViewDelegate> {

	_UITableViewDiffableDataSource* _tableViewDataSource;
	UIBarButtonItem* _clearAllButton;
	UILabel* _emptyConversationListLabel;
	CKScheduledUpdater* _updater;
	NSArray* _visibleConversations;

}

@property (nonatomic,retain) _UITableViewDiffableDataSource * tableViewDataSource;              //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * clearAllButton;                                  //@synthesize clearAllButton=_clearAllButton - In the implementation block
@property (nonatomic,retain) UILabel * emptyConversationListLabel;                              //@synthesize emptyConversationListLabel=_emptyConversationListLabel - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * updater;                                      //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) NSArray * visibleConversations;                                    //@synthesize visibleConversations=_visibleConversations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBecomeActive;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)suspend;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setNeedsFocusUpdate;
-(id)init;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didLock;
-(void)didWake;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_conversations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setUpdater:(CKScheduledUpdater *)arg1 ;
-(void)_updateConversationList;
-(UIBarButtonItem *)clearAllButton;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setTableViewDataSource:(_UITableViewDiffableDataSource *)arg1 ;
-(void)endHoldingConversationListUpdatesForKey:(id)arg1 ;
-(NSArray *)visibleConversations;
-(void)_clearAllTapped;
-(void)_deleteConversation:(id)arg1 ;
-(id)_alertTitleForDelete;
-(void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_deleteConversation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_conversationList;
-(void)popViewControllerIfNecessary;
-(void)setClearAllButton:(UIBarButtonItem *)arg1 ;
-(void)_clearAllTappedWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_alertTitleForClearAll;
-(void)_batchDeleteConversationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setVisibleConversations:(NSArray *)arg1 ;
-(_UITableViewDiffableDataSource *)tableViewDataSource;
-(void)_updateConversationListEmptyLabel;
-(UILabel *)emptyConversationListLabel;
-(void)setEmptyConversationListLabel:(UILabel *)arg1 ;
-(CKScheduledUpdater *)updater;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(void)didUnlock;
-(void)willResignActive;
-(void)updateFocusIfNeeded;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)willUnlock;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

