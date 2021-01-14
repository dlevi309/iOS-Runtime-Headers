/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKSourceListDataSourceObserver.h>

@class HKDisplayCategory, HKDisplayType, WDProfile, HKHealthStore, HKProfileStore, HKAuthorizationStore, WDSourceOrderController, NSMutableSet, NSArray, NSMutableDictionary, HKTitledIconHeaderView, HKSourceListDataSource, NSMutableArray, NSSet, NSDictionary;

@interface WDDisplayTypeDataSourcesTableViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver> {

	BOOL _isLoaded;
	HKDisplayCategory* _displayCategory;
	HKDisplayType* _displayType;
	WDProfile* _profile;
	HKHealthStore* _healthStore;
	HKProfileStore* _profileStore;
	HKAuthorizationStore* _authorizationStore;
	WDSourceOrderController* _sourceOrderController;
	NSMutableSet* _dataSources;
	NSArray* _preEditSourcesOrdered;
	NSArray* _readerAppSources;
	NSArray* _readerResearchStudySources;
	NSMutableDictionary* _authorizationRecordsBySource;
	HKTitledIconHeaderView* _headerView;
	NSMutableSet* _sourcesPendingToggleOff;
	NSMutableSet* _sourcesPendingToggleOn;
	NSArray* _sectionIdentifiers;
	BOOL _shouldInsetSectionContentForDataSourceDataList;
	HKSourceListDataSource* _sourceListDataSource;
	NSArray* _loadedOrderedDataSources;
	NSMutableArray* _orderedDataSources;
	NSSet* _loadedAllDataSources;
	NSDictionary* _loadedAuthorizationRecordsBySource;

}

@property (nonatomic,retain) HKSourceListDataSource * sourceListDataSource;                    //@synthesize sourceListDataSource=_sourceListDataSource - In the implementation block
@property (nonatomic,copy) NSArray * loadedOrderedDataSources;                                 //@synthesize loadedOrderedDataSources=_loadedOrderedDataSources - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedDataSources;                              //@synthesize orderedDataSources=_orderedDataSources - In the implementation block
@property (nonatomic,copy) NSSet * loadedAllDataSources;                                       //@synthesize loadedAllDataSources=_loadedAllDataSources - In the implementation block
@property (nonatomic,copy) NSDictionary * loadedAuthorizationRecordsBySource;                  //@synthesize loadedAuthorizationRecordsBySource=_loadedAuthorizationRecordsBySource - In the implementation block
@property (assign,nonatomic) BOOL shouldInsetSectionContentForDataSourceDataList;              //@synthesize shouldInsetSectionContentForDataSourceDataList=_shouldInsetSectionContentForDataSourceDataList - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSourceListDataSource:(HKSourceListDataSource *)arg1 ;
-(HKSourceListDataSource *)sourceListDataSource;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(void)sourceListDataSourceDidUpdate:(id)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_refreshUI;
-(id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 sourceOrderController:(id)arg3 profile:(id)arg4 ;
-(void)setShouldInsetSectionContentForDataSourceDataList:(BOOL)arg1 ;
-(id)createSectionIdentifiers;
-(BOOL)showReadOnlyDataSourcesOnly;
-(void)_loadDataSource;
-(NSSet *)loadedAllDataSources;
-(NSDictionary *)loadedAuthorizationRecordsBySource;
-(NSArray *)loadedOrderedDataSources;
-(void)_addDataSources:(id)arg1 ;
-(void)_sortDataSources;
-(BOOL)_canEditDataSources;
-(long long)sectionForSectionIdentifier:(long long)arg1 ;
-(id)_createIndexPathsWithSection:(long long)arg1 startingRow:(long long)arg2 numIndices:(long long)arg3 ;
-(void)_fetchOrderedSourcesForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchDataSourcesForSampleType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchAuthorizationRecordsBySourceForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLoadedAllDataSources:(NSSet *)arg1 ;
-(void)setLoadedOrderedDataSources:(NSArray *)arg1 ;
-(void)setLoadedAuthorizationRecordsBySource:(NSDictionary *)arg1 ;
-(BOOL)_sourceIsEnabled:(id)arg1 ;
-(void)_updateOrderedSources;
-(long long)sectionIdentifierForSection:(long long)arg1 ;
-(id)_readerSourceCellForTableView:(id)arg1 sourceArray:(id)arg2 row:(unsigned long long)arg3 ;
-(id)_dataSourceCellForTableView:(id)arg1 row:(unsigned long long)arg2 ;
-(id)_noneTableViewCell;
-(NSMutableArray *)orderedDataSources;
-(void)_willEnableSource:(id)arg1 ;
-(void)_willDisableSource:(id)arg1 ;
-(void)_sourceIsEnabledDidChange:(id)arg1 ;
-(BOOL)shouldInsetSectionContentForDataSourceDataList;
-(void)_gatherDataFromDataSource:(id)arg1 ;
-(void)setOrderedDataSources:(NSMutableArray *)arg1 ;
@end
