/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@protocol PXImportAssetsDataSourceManagerDelegate, OS_dispatch_queue;
@class PXImportAssetsDataSource, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, NSArray, NSObject, PXImportAssetCollection;

@interface PXImportAssetsDataSourceManager : PXAssetsDataSourceManager {

	BOOL _showAlreadyImportedItems;
	BOOL _showNotYetImportedItems;
	BOOL _alreadyImportedItemsSelectable;
	BOOL _needsFilterUpdate;
	id<PXImportAssetsDataSourceManagerDelegate> _delegate;
	PXImportAssetsDataSource* _unfilteredDataSource;
	NSSet* _visibleImportAssetIdentifiers;
	NSMutableDictionary* _allAssetCollectionsById;
	NSDictionary* _filteredAssetCollectionsById;
	NSMutableArray* _allAssetCollections;
	NSArray* _filteredAssetCollections;
	NSObject*<OS_dispatch_queue> _modelQueue;
	long long _maxAlreadyImportedItems;
	long long _forcedAlreadyImportedTruncationMode;

}

@property (nonatomic,retain) PXImportAssetsDataSource * unfilteredDataSource;                                   //@synthesize unfilteredDataSource=_unfilteredDataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allAssetCollectionsById;                                     //@synthesize allAssetCollectionsById=_allAssetCollectionsById - In the implementation block
@property (nonatomic,copy) NSDictionary * filteredAssetCollectionsById;                                         //@synthesize filteredAssetCollectionsById=_filteredAssetCollectionsById - In the implementation block
@property (nonatomic,retain) NSMutableArray * allAssetCollections;                                              //@synthesize allAssetCollections=_allAssetCollections - In the implementation block
@property (nonatomic,copy) NSArray * filteredAssetCollections;                                                  //@synthesize filteredAssetCollections=_filteredAssetCollections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modelQueue;                                           //@synthesize modelQueue=_modelQueue - In the implementation block
@property (assign,nonatomic) BOOL needsFilterUpdate;                                                            //@synthesize needsFilterUpdate=_needsFilterUpdate - In the implementation block
@property (assign,nonatomic) long long maxAlreadyImportedItems;                                                 //@synthesize maxAlreadyImportedItems=_maxAlreadyImportedItems - In the implementation block
@property (assign,nonatomic) long long forcedAlreadyImportedTruncationMode;                                     //@synthesize forcedAlreadyImportedTruncationMode=_forcedAlreadyImportedTruncationMode - In the implementation block
@property (assign,nonatomic,__weak) id<PXImportAssetsDataSourceManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXImportAssetsDataSource * dataSource; 
@property (nonatomic,readonly) PXImportAssetCollection * unfilteredAlreadyImportedAssetCollection; 
@property (nonatomic,copy) NSSet * visibleImportAssetIdentifiers;                                               //@synthesize visibleImportAssetIdentifiers=_visibleImportAssetIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL showAlreadyImportedItems;                                                     //@synthesize showAlreadyImportedItems=_showAlreadyImportedItems - In the implementation block
@property (assign,nonatomic) BOOL showNotYetImportedItems;                                                      //@synthesize showNotYetImportedItems=_showNotYetImportedItems - In the implementation block
@property (assign,nonatomic) BOOL alreadyImportedItemsSelectable;                                               //@synthesize alreadyImportedItemsSelectable=_alreadyImportedItemsSelectable - In the implementation block
+(BOOL)assetCollectionsArray:(id)arg1 isEqualToAssetCollectionsArray:(id)arg2 ;
+(void)copyFromAssetCollections:(id)arg1 toAssetCollections:(id*)arg2 assetCollectionsById:(id*)arg3 ;
+(void)addModels:(id)arg1 toAssetCollections:(id)arg2 assetCollectionsById:(id)arg3 ;
+(void)removeModels:(id)arg1 fromAssetCollections:(id)arg2 assetCollectionsById:(id)arg3 ;
+(void)sortAssetCollectionsInArray:(id)arg1 ;
-(id)createInitialDataSource;
-(id<PXImportAssetsDataSourceManagerDelegate>)delegate;
-(void)setMaxAlreadyImportedItems:(long long)arg1 ;
-(void)setAlreadyImportedItemsSelectable:(BOOL)arg1 ;
-(PXImportAssetCollection *)unfilteredAlreadyImportedAssetCollection;
-(NSObject*<OS_dispatch_queue>)modelQueue;
-(void)setDelegate:(id<PXImportAssetsDataSourceManagerDelegate>)arg1 ;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)addAssets:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(PXImportAssetsDataSource *)unfilteredDataSource;
-(void)updateFilteredAssetsIfNeeded;
-(void)setVisibleImportAssetIdentifiers:(NSSet *)arg1 ;
-(void)setShowNotYetImportedItems:(BOOL)arg1 ;
-(void)setShowAlreadyImportedItems:(BOOL)arg1 ;
-(void)removeAssets:(id)arg1 ;
-(void)setModelQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAssetsFromDataSourceManager:(id)arg1 delegate:(id)arg2 ;
-(void)modifyAssetCollectionsWithBlock:(/*^block*/id)arg1 ;
-(void)setNeedsFilterUpdate;
-(void)setUnfilteredDataSource:(PXImportAssetsDataSource *)arg1 ;
-(id)filteredModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3 ;
-(id)existingModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3 ;
-(void)rebuildAlreadyImportedAssetCollectionInCollections:(id)arg1 collectionsById:(id)arg2 ;
-(void)pruneEmptyAssetCollectionsInCollections:(id)arg1 collectionsById:(id)arg2 ;
-(void)updateAlreadyImportedSelectability;
-(long long)countOfUnfilteredAlreadyImportedAssetCollection;
-(long long)countOfAlreadyImportedAssetCollectionInCollectionsMap:(id)arg1 ;
-(NSMutableArray *)allAssetCollections;
-(NSSet *)visibleImportAssetIdentifiers;
-(BOOL)showAlreadyImportedItems;
-(BOOL)showNotYetImportedItems;
-(BOOL)alreadyImportedItemsSelectable;
-(NSMutableDictionary *)allAssetCollectionsById;
-(void)setAllAssetCollectionsById:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)filteredAssetCollectionsById;
-(void)setAllAssetCollections:(NSMutableArray *)arg1 ;
-(void)setFilteredAssetCollectionsById:(NSDictionary *)arg1 ;
-(NSArray *)filteredAssetCollections;
-(void)setFilteredAssetCollections:(NSArray *)arg1 ;
-(BOOL)needsFilterUpdate;
-(void)setNeedsFilterUpdate:(BOOL)arg1 ;
-(long long)maxAlreadyImportedItems;
-(long long)forcedAlreadyImportedTruncationMode;
-(void)setForcedAlreadyImportedTruncationMode:(long long)arg1 ;
@end

