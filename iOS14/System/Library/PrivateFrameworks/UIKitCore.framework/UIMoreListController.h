/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, UIMoreListCellLayoutManager, UIBarButtonItem, NSString;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	BOOL _allowsCustomizing;
	BOOL _disableCustomizing;
	BOOL _hideNavigationBar;
	NSArray* _moreViewControllers;
	UIMoreListCellLayoutManager* _layoutManager;
	UIBarButtonItem* _moreEditButtonItem;
	BOOL _moreViewControllersChanged;

}

@property (nonatomic,retain) NSArray * moreViewControllers; 
@property (assign,nonatomic) BOOL allowsCustomizing; 
@property (assign,nonatomic) BOOL moreViewControllersChanged; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)table;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(id)tabBarItem;
-(void)_layoutCells;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)allowsCustomizing;
-(void)_updateEditButton;
-(void)loadView;
-(id)_targetNavigationController;
-(NSArray *)moreViewControllers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(void)setAllowsCustomizing:(BOOL)arg1 ;
-(BOOL)moreViewControllersChanged;
-(void)setMoreViewControllersChanged:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

