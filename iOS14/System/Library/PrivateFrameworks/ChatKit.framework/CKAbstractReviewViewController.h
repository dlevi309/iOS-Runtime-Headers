/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)navigationItem;
-(void)viewWillLayoutSubviews;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UIView *)topLineView;
-(void)setNavItem:(UINavigationItem *)arg1 ;
-(void)setTopLineView:(UIView *)arg1 ;
-(void)_updateNavigationItemState;
-(void)_handleCancel;
-(UIBarButtonItem *)cancelEditingBarButtonItem;
-(void)setCancelEditingBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)deleteBarButtonItem;
-(void)_handleDelete;
-(void)setDeleteBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UINavigationItem *)navItem;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

