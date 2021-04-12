/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKCollectionsFetcher.h>
#import <libobjc.A.dylib/MKCollectionDataProvider.h>
#import <libobjc.A.dylib/MKCollectionUpdater.h>
#import <libobjc.A.dylib/CollectionsAnalyticsProvider.h>
#import <libobjc.A.dylib/MKPlaceBatchGuideConsumer.h>

@protocol MKCuratedCollectionsSyncCoordinator;
@class UIFont, NSRelativeDateTimeFormatter, UICollectionView, NSArray, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot, MKPlaceBatchController, NSString;

@interface MKPlaceCollectionsLogicController : NSObject <MKCollectionsFetcher, MKCollectionDataProvider, MKCollectionUpdater, CollectionsAnalyticsProvider, MKPlaceBatchGuideConsumer> {

	long long _context;
	UIFont* _titleFont;
	NSRelativeDateTimeFormatter* _collectionDateFormatter;
	UICollectionView* _collectionView;
	NSArray* _collections;
	NSArray* _geoCollections;
	UICollectionViewDiffableDataSource* _dataSource;
	NSDiffableDataSourceSnapshot* _snapshot;
	id<MKCuratedCollectionsSyncCoordinator> _syncCoordinator;
	MKPlaceBatchController* _batchController;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * collections;                                                //@synthesize collections=_collections - In the implementation block
@property (nonatomic,retain) NSArray * geoCollections;                                             //@synthesize geoCollections=_geoCollections - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSDiffableDataSourceSnapshot * snapshot;                              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) id<MKCuratedCollectionsSyncCoordinator> syncCoordinator;              //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (nonatomic,retain) MKPlaceBatchController * batchController;                             //@synthesize batchController=_batchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDiffableDataSourceSnapshot *)snapshot;
-(void)setSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<MKCuratedCollectionsSyncCoordinator>)syncCoordinator;
-(long long)numberOfSections;
-(UICollectionView *)collectionView;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)setGeoCollections:(NSArray *)arg1 ;
-(void)initializeFonts;
-(MKPlaceBatchController *)batchController;
-(void)initializeFormatter;
-(id)buildCuratedCollectionsFrom:(id)arg1 shouldCancelImageDownloads:(BOOL)arg2 ;
-(id)collectionAtIndex:(long long)arg1 ;
-(long long)numberOfCollections;
-(NSArray *)geoCollections;
-(void)clearPreviousModelImageDownloads;
-(void)createBatchControllerIfNeededUsingIdentifiers:(id)arg1 andPlaceCollections:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5 ;
-(void)applySnapShot:(id)arg1 animated:(BOOL)arg2 ;
-(void)prepareSnapshot;
-(id)removeIdentifiers:(id)arg1 collidingWithPlaceCollections:(id)arg2 ;
-(void)setBatchController:(MKPlaceBatchController *)arg1 ;
-(void)appendBatchOfCollections:(id)arg1 ;
-(void)getCollectionsUsingDataSource:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(id)identifierForCollectionAtIndex:(long long)arg1 ;
-(void)updateCollectionsWithoutPreparingSnapshot:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5 ;
-(void)clearSnapshotData;
-(void)endDisplayingCellAtIndexPath:(id)arg1 ;
-(id)initWithPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3 ;
-(void)didStartFetchingBatch;
-(void)shouldConsumeBatch:(BOOL)arg1 fetchedBatch:(id)arg2 ;
-(void)_dispatchOnManThread:(/*^block*/id)arg1 ;
-(void)setSyncCoordinator:(id<MKCuratedCollectionsSyncCoordinator>)arg1 ;
-(id)initWithCollectionView:(id)arg1 withPlaceCollections:(id)arg2 usingCollectionIds:(id)arg3 usingCollectionFetcher:(id)arg4 usingGuideConsumer:(id)arg5 usingSyncCoordinator:(id)arg6 inContext:(long long)arg7 usingBatchSize:(unsigned long long)arg8 ;
-(void)refreshCollections;
-(void)updateUsingBatchedIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingBatchSize:(unsigned long long)arg3 ;
-(NSArray *)collections;
-(void)displayCollections;
-(void)getCollections:(/*^block*/id)arg1 ;
-(void)updateCollections:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingBatchSize:(unsigned long long)arg4 ;
-(id)geoCollectionAtIndex:(long long)arg1 ;
-(BOOL)isCollectionSavedAtIndex:(long long)arg1 ;
-(void)willDisplayCellAtIndexpath:(id)arg1 ;
-(void)setCollections:(NSArray *)arg1 ;
@end

