/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@class UIView, UIBarButtonItem, NSArray, NSDictionary, NSString;

@interface PUSceneDebugInspectorViewController : UITableViewController <UISearchResultsUpdating> {

	UIView* _loadingContentView;
	UIBarButtonItem* _sortButton;
	UIBarButtonItem* _shareButton;
	NSArray* _sceneViewModelsAll;
	NSArray* _sceneViewModelsSearched;
	NSDictionary* _groupedSceneViewModels;
	NSArray* _groupedSceneViewModelTitles;

}

@property (nonatomic,readonly) NSArray * currentSceneViewModels; 
@property (nonatomic,copy) NSArray * sceneViewModelsAll;                       //@synthesize sceneViewModelsAll=_sceneViewModelsAll - In the implementation block
@property (nonatomic,copy) NSArray * sceneViewModelsSearched;                  //@synthesize sceneViewModelsSearched=_sceneViewModelsSearched - In the implementation block
@property (nonatomic,copy) NSDictionary * groupedSceneViewModels;              //@synthesize groupedSceneViewModels=_groupedSceneViewModels - In the implementation block
@property (nonatomic,copy) NSArray * groupedSceneViewModelTitles;              //@synthesize groupedSceneViewModelTitles=_groupedSceneViewModelTitles - In the implementation block
@property (nonatomic,readonly) UIView * loadingContentView;                    //@synthesize loadingContentView=_loadingContentView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * sortButton;                   //@synthesize sortButton=_sortButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * shareButton;                  //@synthesize shareButton=_shareButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_keyForSortOrder:(unsigned long long)arg1 ;
+(id)_commaSeparatedValueRepresentation:(id)arg1 ;
+(BOOL)_isAscendingForSortOrder:(unsigned long long)arg1 ;
+(id)_sortedSceneViewModels:(id)arg1 sortOrder:(unsigned long long)arg2 ;
+(id)_sectionTitleForSceneViewModel:(id)arg1 sortOrder:(unsigned long long)arg2 ;
+(id)_titleForSortOrder:(unsigned long long)arg1 ;
+(id)_assetGridViewControllerForViewModel:(id)arg1 interfaceIdiom:(long long)arg2 ;
+(id)_shortTitlesForSectionTitles:(id)arg1 SortOrder:(unsigned long long)arg2 ;
+(id)highestConfidenceForAsset:(id)arg1 sceneIdentifier:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UIBarButtonItem *)shareButton;
-(UIView *)loadingContentView;
-(void)didSelectDoneButton:(id)arg1 ;
-(void)didSelectSortButton:(id)arg1 ;
-(void)_reloadTableViewByGroupingViewModels:(id)arg1 sortOrder:(unsigned long long)arg2 ;
-(NSArray *)currentSceneViewModels;
-(void)didSelectShareButton:(id)arg1 ;
-(NSArray *)sceneViewModelsAll;
-(void)setSceneViewModelsAll:(NSArray *)arg1 ;
-(NSArray *)sceneViewModelsSearched;
-(void)setSceneViewModelsSearched:(NSArray *)arg1 ;
-(NSDictionary *)groupedSceneViewModels;
-(void)setGroupedSceneViewModels:(NSDictionary *)arg1 ;
-(NSArray *)groupedSceneViewModelTitles;
-(void)setGroupedSceneViewModelTitles:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UIBarButtonItem *)sortButton;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
@end

