/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol PSSearchResultsControllerDelegate;
@class UITableView, NSMutableDictionary, NSMutableArray, PSSearchResults, NSString;

@interface PSSearchResultsController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSMutableDictionary* _iconViewMap;
	NSMutableArray* _reusableIconViews;
	PSSearchResults* _searchResults;
	id<PSSearchResultsControllerDelegate> _delegate;

}

@property (nonatomic,retain) PSSearchResults * searchResults;                                    //@synthesize searchResults=_searchResults - In the implementation block
@property (assign,nonatomic,__weak) id<PSSearchResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PSSearchResultsControllerDelegate>)delegate;
-(void)setDelegate:(id<PSSearchResultsControllerDelegate>)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)reloadData;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)setSearchResults:(PSSearchResults *)arg1 ;
-(void)_removeIconViewForSection:(id)arg1 ;
-(void)_updateIconViews:(BOOL)arg1 ;
-(PSSearchResults *)searchResults;
@end

