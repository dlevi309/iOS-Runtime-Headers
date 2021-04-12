/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SUMenuViewControllerDelegate;
@class UITableView, NSString;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {

	id<SUMenuViewControllerDelegate> _delegate;
	long long _selectedIndex;
	UITableView* _tableView;

}

@property (assign,nonatomic) id<SUMenuViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SUMenuViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SUMenuViewControllerDelegate>)arg1 ;
-(void)reload;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_tableView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(BOOL)_sendDidCancel;
-(long long)numberOfMenuItems;
-(CGSize)maximumViewSize;
-(CGSize)minimumViewSize;
-(void)performActionForMenuItemAtIndex:(long long)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
@end

