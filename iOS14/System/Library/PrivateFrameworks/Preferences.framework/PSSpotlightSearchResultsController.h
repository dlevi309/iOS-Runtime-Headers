/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)selectNextSearchResult;
-(id)init;
-(void)selectPreviousSearchResult;
-(void)searchQueryCompleted;
-(void)searchQueryStarted;
-(id<PSSpotlightSearchResultsControllerDelegate>)delegate;
-(void)showSelectedSearchResult;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PSSpotlightSearchResultsControllerDelegate>)arg1 ;
-(double)iconWidth;
-(void)viewDidLoad;
-(NSMutableArray *)tableData;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)searchQueryFoundItems:(id)arg1 ;
-(void)_removeIconViewForSection:(id)arg1 ;
-(void)_updateIconViews:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setTableData:(NSMutableArray *)arg1 ;
-(id)_itemForIndexPath:(id)arg1 ;
-(void)_selectIndexPath:(id)arg1 ;
@end

