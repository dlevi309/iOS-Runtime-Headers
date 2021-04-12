/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/PXInfoProvider.h>
#import <libobjc.A.dylib/PXInfoUpdaterObserver.h>

@class PTUISettingsController, UISearchBar, PXSettingsIndexer, NSProgress, PXSettingsIndex, PXInfoUpdater, NSArray, NSString;

@interface PXSettingsSearchViewController : UITableViewController <UISearchBarDelegate, PXInfoProvider, PXInfoUpdaterObserver> {

	PTUISettingsController* _settingsController;
	UISearchBar* _searchBar;
	PXSettingsIndexer* _indexer;
	NSProgress* _indexingProgress;
	PXSettingsIndex* _index;
	PXInfoUpdater* _resultsInfoUpdater;
	NSArray* _searchResults;

}

@property (nonatomic,readonly) UISearchBar * searchBar;                                  //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) PXSettingsIndexer * indexer;                                //@synthesize indexer=_indexer - In the implementation block
@property (nonatomic,retain) NSProgress * indexingProgress;                              //@synthesize indexingProgress=_indexingProgress - In the implementation block
@property (nonatomic,retain) PXSettingsIndex * index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) PXInfoUpdater * resultsInfoUpdater;                       //@synthesize resultsInfoUpdater=_resultsInfoUpdater - In the implementation block
@property (nonatomic,copy) NSArray * searchResults;                                      //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,readonly) PTUISettingsController * settingsController;              //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)infoUpdaterDidUpdate:(id)arg1 ;
-(UISearchBar *)searchBar;
-(PXSettingsIndex *)index;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setIndex:(PXSettingsIndex *)arg1 ;
-(PXSettingsIndexer *)indexer;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithSettingsController:(id)arg1 ;
-(id)requestInfoOfKind:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)_indexerDidComplete;
-(void)_handleCancelItem:(id)arg1 ;
-(PTUISettingsController *)settingsController;
-(NSProgress *)indexingProgress;
-(void)setIndexingProgress:(NSProgress *)arg1 ;
-(PXInfoUpdater *)resultsInfoUpdater;
-(id)initWithCoder:(id)arg1 ;
-(void)setIndexer:(PXSettingsIndexer *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(long long)priorityForInfoRequestOfKind:(id)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

