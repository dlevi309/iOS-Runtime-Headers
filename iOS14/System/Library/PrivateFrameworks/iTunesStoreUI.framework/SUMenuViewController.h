/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<SUMenuViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setDelegate:(id<SUMenuViewControllerDelegate>)arg1 ;
-(long long)selectedIndex;
-(void)reload;
-(long long)numberOfMenuItems;
-(id)_tableView;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(BOOL)_sendDidCancel;
-(CGSize)maximumViewSize;
-(CGSize)minimumViewSize;
-(void)performActionForMenuItemAtIndex:(long long)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
@end

