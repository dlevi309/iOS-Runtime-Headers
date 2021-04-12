/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UIView, UINavigationItem, UIBarButtonItem, NSString;

@interface CKAbstractReviewViewController : PSViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UIView* _topLineView;
	UINavigationItem* _navItem;
	UIBarButtonItem* _cancelEditingBarButtonItem;
	UIBarButtonItem* _deleteBarButtonItem;

}

@property (nonatomic,retain) UITableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * topLineView;                                      //@synthesize topLineView=_topLineView - In the implementation block
@property (nonatomic,retain) UINavigationItem * navItem;                                //@synthesize navItem=_navItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelEditingBarButtonItem;              //@synthesize cancelEditingBarButtonItem=_cancelEditingBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteBarButtonItem;                     //@synthesize deleteBarButtonItem=_deleteBarButtonItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(id)navigationItem;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setTopLineView:(UIView *)arg1 ;
-(UIView *)topLineView;
-(void)_updateNavigationItemState;
-(UINavigationItem *)navItem;
-(void)setNavItem:(UINavigationItem *)arg1 ;
-(UIBarButtonItem *)cancelEditingBarButtonItem;
-(void)_handleCancel;
-(void)setCancelEditingBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)deleteBarButtonItem;
-(void)_handleDelete;
-(void)setDeleteBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

