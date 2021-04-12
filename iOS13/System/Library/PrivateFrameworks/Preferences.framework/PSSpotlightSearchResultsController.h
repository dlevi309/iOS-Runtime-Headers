/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSKeyboardNavigationSearchResultsController.h>

@protocol PSSpotlightSearchResultsControllerDelegate;
@class NSMutableDictionary, NSMutableArray, NSArray;

@interface PSSpotlightSearchResultsController : UITableViewController <PSKeyboardNavigationSearchResultsController> {

	NSMutableDictionary* _iconViewMap;
	NSMutableArray* _reusableIconViews;
	long long _deviceOrientation;
	double originalInset;
	NSArray* _results;
	id<PSSpotlightSearchResultsControllerDelegate> _delegate;
	NSMutableArray* _tableData;

}

@property (nonatomic,retain) NSMutableArray * tableData;                                                  //@synthesize tableData=_tableData - In the implementation block
@property (nonatomic,retain) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) id<PSSpotlightSearchResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PSSpotlightSearchResultsControllerDelegate>)delegate;
-(void)setDelegate:(id<PSSpotlightSearchResultsControllerDelegate>)arg1 ;
-(NSArray *)results;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)_removeIconViewForSection:(id)arg1 ;
-(void)_updateIconViews:(BOOL)arg1 ;
-(void)setTableData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tableData;
-(id)_itemForIndexPath:(id)arg1 ;
-(double)iconWidth;
-(void)_selectIndexPath:(id)arg1 ;
-(void)showSelectedSearchResult;
-(void)searchQueryStarted;
-(void)searchQueryFoundItems:(id)arg1 ;
-(void)searchQueryCompleted;
@end

