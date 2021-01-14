/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>

@class NSArray, NSString, NSDictionary, PHSuggestion, NSDate, UIActivityIndicatorView, UILabel, UIBarButtonItem;

@interface PXSuggesterDebugViewController : UITableViewController <PXOneUpPresentationDelegate> {

	NSArray* _heuristicallySortedItems;
	NSArray* _sortedItems;
	NSString* _name;
	NSDictionary* _options;
	PHSuggestion* _currentSuggestion;
	BOOL _fullLibraryIsEnabled;
	NSDate* _date;
	unsigned long long _currentSortCriteria;
	BOOL _showsInvalidItems;
	UIActivityIndicatorView* _spinnerView;
	UILabel* _noResultLabel;
	UIBarButtonItem* _fullLibraryButton;
	UIBarButtonItem* _dateButton;
	UIBarButtonItem* _showInvalidItemsButton;
	UIBarButtonItem* _sortButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)refresh;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)assetsDataSourceManagerForSuggestion:(id)arg1 ;
-(void)configureCell:(id)arg1 withItem:(id)arg2 ;
-(void)willStartProcessing;
-(void)didStopProcessing;
-(void)_fetchSuggestions;
-(id)fullLibraryButton;
-(id)dateButton;
-(id)showInvalidItemsButton;
-(void)_sortItems;
-(void)didSelectFullLibraryButton:(id)arg1 ;
-(void)didSelectDateButton:(id)arg1 ;
-(void)didSelectShowInvalidItemsButton:(id)arg1 ;
-(void)updateShowInvalidItemsButton;
-(id)_stringWithSortCriteria:(unsigned long long)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)didSelectSortButton:(id)arg1 ;
-(void)viewDidLoad;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(void)_updateToolbarItems;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(id)sortButton;
@end

