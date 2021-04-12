/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUDataSourceViewController.h>
#import <MPUFoundation/MPStoreDownloadManagerObserver.h>
#import <MPUFoundation/MPUActionTableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSMutableArray, NSString;

@interface MPUTableViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, MPUActionTableViewDataSource, UITableViewDelegate> {

	BOOL _shouldUpdateVisibleCellsWhenVisible;
	BOOL _hasAppearedOnce;
	UITableView* _tableView;
	long long _numberOfTopActionRows;
	NSMutableArray* _visibleTopActionRows;
	long long _numberOfBottomActionRows;
	NSMutableArray* _visibleBottomActionRows;
	BOOL _shouldDeselectImmediately;
	Class _cellConfigurationClass;

}

@property (nonatomic,readonly) Class cellConfigurationClass;                                              //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (assign,nonatomic) BOOL shouldDeselectImmediately;                                              //@synthesize shouldDeselectImmediately=_shouldDeselectImmediately - In the implementation block
@property (nonatomic,readonly) BOOL shouldScrollToFirstDataSourceSectionOnInitialAppearance; 
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,readonly) CGPoint contentOffsetRevealingFirstDataSourceSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)invalidationContextClass;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(BOOL)usesCellConfigurations;
+(BOOL)wantsAutolayoutSizedTableViewRows;
+(id)allActionCellConfigurationClasses;
+(id)actionCellConfigurationClasses;
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1 ;
+(Class)_tableViewClass;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(Class)cellConfigurationClass;
-(id)_createTableView;
-(long long)_totalNumberOfSections;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(void)reloadActionRowsAnimated:(BOOL)arg1 ;
-(void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(BOOL)arg2 ;
-(BOOL)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
-(CGPoint)contentOffsetRevealingFirstDataSourceSection;
-(void)_reloadActionRowsAnimated:(BOOL)arg1 skipTableViewUpdates:(BOOL)arg2 ;
-(BOOL)isTableViewLoaded;
-(Class)cellConfigurationForIndexPath:(id)arg1 ;
-(void)_configureCellsAfterScroll;
-(long long)dataSourceIndexForIndexPath:(id)arg1 ;
-(Class)actionCellConfigurationClassForIndexPath:(id)arg1 ;
-(long long)numberOfTopActionRowsInTableView:(id)arg1 ;
-(long long)numberOfBottomActionRowsInTableView:(id)arg1 ;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
-(long long)dataSourceSectionForSection:(long long)arg1 ;
-(BOOL)shouldDeselectImmediately;
-(long long)indexOfFirstDataSourceSection;
-(void)_loadCellConfiguration;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1 ;
-(long long)numberOfActionRowsInTableView:(id)arg1 ;
-(id)indexPathForDataSourceIndex:(long long)arg1 ;
-(long long)sectionForDataSourceSection:(long long)arg1 ;
-(void)_recreateTableView;
-(void)_setCellConfigurationClass:(Class)arg1 ;
-(void)setShouldDeselectImmediately:(BOOL)arg1 ;
@end

