/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKCollectionViewDataSource.h>
#import <libobjc.A.dylib/GKSegmentInfoDelegagte.h>

@class NSString, NSMutableArray, GKSegmentedSectionHeaderView, GKCollectionViewPlaceholderView, GKSegmentInfo, GKCollectionViewDataSource, NSArray;

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte> {

	BOOL _usePlaceholder;
	BOOL _shouldHideSegment;
	BOOL _waitingForAnimation;
	NSString* _noContentTitle;
	NSString* _noContentMessage;
	NSString* _noContentButtonTitle;
	id _noContentButtonTarget;
	SEL _noContentButtonAction;
	Class _segmentedHeaderClass;
	NSMutableArray* _segmentInfos;
	GKSegmentedSectionHeaderView* _headerView;
	GKCollectionViewPlaceholderView* _placeholderView;
	GKSegmentInfo* _selectedSegmentInfo;
	GKCollectionViewDataSource* _rootDataSource;

}

@property (nonatomic,retain) NSMutableArray * segmentInfos;                                  //@synthesize segmentInfos=_segmentInfos - In the implementation block
@property (nonatomic,retain) GKSegmentedSectionHeaderView * headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) GKCollectionViewPlaceholderView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) GKSegmentInfo * selectedSegmentInfo;                            //@synthesize selectedSegmentInfo=_selectedSegmentInfo - In the implementation block
@property (assign,nonatomic) BOOL waitingForAnimation;                                       //@synthesize waitingForAnimation=_waitingForAnimation - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * rootDataSource;                    //@synthesize rootDataSource=_rootDataSource - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
@property (assign,nonatomic) GKCollectionViewDataSource * selectedDataSource; 
@property (assign,nonatomic) BOOL usePlaceholder;                                            //@synthesize usePlaceholder=_usePlaceholder - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSegment;                                         //@synthesize shouldHideSegment=_shouldHideSegment - In the implementation block
@property (assign,nonatomic) unsigned long long selectedDataSourceIndex; 
@property (nonatomic,retain) NSString * noContentTitle;                                      //@synthesize noContentTitle=_noContentTitle - In the implementation block
@property (nonatomic,retain) NSString * noContentMessage;                                    //@synthesize noContentMessage=_noContentMessage - In the implementation block
@property (nonatomic,retain) NSString * noContentButtonTitle;                                //@synthesize noContentButtonTitle=_noContentButtonTitle - In the implementation block
@property (assign,nonatomic) id noContentButtonTarget;                                       //@synthesize noContentButtonTarget=_noContentButtonTarget - In the implementation block
@property (assign,nonatomic) SEL noContentButtonAction;                                      //@synthesize noContentButtonAction=_noContentButtonAction - In the implementation block
@property (assign,nonatomic) Class segmentedHeaderClass;                                     //@synthesize segmentedHeaderClass=_segmentedHeaderClass - In the implementation block
-(NSArray *)dataSources;
-(GKCollectionViewDataSource *)selectedDataSource;
-(void)setHeaderView:(GKSegmentedSectionHeaderView *)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setPlaceholderView:(GKCollectionViewPlaceholderView *)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureSegmentedHeader:(id)arg1 ;
-(BOOL)waitingForAnimation;
-(void)addDataSource:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(GKCollectionViewPlaceholderView *)placeholderView;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4 ;
-(id)createMetricsTreeWithGridLayout:(id)arg1 ;
-(BOOL)containsDataSource:(id)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(unsigned long long)sectionForDataSource:(id)arg1 ;
-(void)setShouldHideSegment:(BOOL)arg1 ;
-(BOOL)usePlaceholder;
-(id)infoForSegment:(long long)arg1 ;
-(void)setTitle:(id)arg1 forDataSource:(id)arg2 ;
-(void)selectedSegmentChanged:(id)arg1 ;
-(void)setSelectedDataSource:(GKCollectionViewDataSource *)arg1 ;
-(void)hoistSegmentedFactoryToRoot;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(NSMutableArray *)segmentInfos;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)dataSourceDidReloadData:(id)arg1 ;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3 ;
-(void)setUsePlaceholder:(BOOL)arg1 ;
-(BOOL)shouldHideSegment;
-(NSString *)noContentTitle;
-(NSString *)noContentMessage;
-(NSString *)noContentButtonTitle;
-(void)removeDataSource:(id)arg1 ;
-(id)noContentButtonTarget;
-(SEL)noContentButtonAction;
-(Class)segmentedHeaderClass;
-(void)setSegmentedHeaderClass:(Class)arg1 ;
-(void)setSegmentInfos:(NSMutableArray *)arg1 ;
-(GKSegmentInfo *)selectedSegmentInfo;
-(GKCollectionViewDataSource *)rootDataSource;
-(id)initWithDataSources:(id)arg1 ;
-(id)description;
-(void)segmentDidChangeLoadingState:(id)arg1 ;
-(id)initWithDataSources:(id)arg1 rootDataSource:(id)arg2 ;
-(void)setRootDataSource:(GKCollectionViewDataSource *)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(id)allTitles;
-(id)infoForDataSource:(id)arg1 ;
-(void)infosChanged;
-(unsigned long long)selectedDataSourceIndex;
-(void)setSelectedDataSourceIndex:(unsigned long long)arg1 ;
-(id)dataSourceForSection:(unsigned long long)arg1 ;
-(void)setNoContentTitle:(NSString *)arg1 ;
-(void)setNoContentMessage:(NSString *)arg1 ;
-(void)dataSourceDidLoad;
-(GKSegmentedSectionHeaderView *)headerView;
-(void)setNoContentButtonTitle:(NSString *)arg1 ;
-(void)setNoContentButtonTarget:(id)arg1 ;
-(void)setNoContentButtonAction:(SEL)arg1 ;
-(void)updatePlaceholderNotify:(BOOL)arg1 ;
-(void)setSelectedSegmentInfo:(GKSegmentInfo *)arg1 ;
-(void)setWaitingForAnimation:(BOOL)arg1 ;
-(void)dataSourceWillLoad;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)groupDidLoad:(id)arg1 ;
-(void)setSelectedDataSourceIndex:(unsigned long long)arg1 reload:(BOOL)arg2 ;
-(id)indexPathsForItem:(id)arg1 ;
-(BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
@end

