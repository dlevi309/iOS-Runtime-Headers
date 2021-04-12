/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPhotosCore.framework/NanoPhotosCore
*/


@class NSHashTable, NPTOLibraryInfo, NSDictionary, NRDevice;

@interface NPTOCollectionTargetLibrary : NSObject {

	NSHashTable* _observers;
	NPTOLibraryInfo* _libraryInfo;
	id _libraryCollectionTargetMapChangeObserver;
	id _syncingChangeObserver;
	NSDictionary* _libraryAssetCollections;
	long long _collectionTarget;
	NRDevice* _device;

}

@property (nonatomic,readonly) long long collectionTarget;              //@synthesize collectionTarget=_collectionTarget - In the implementation block
@property (nonatomic,readonly) NRDevice * device;                       //@synthesize device=_device - In the implementation block
-(void)addObserver:(id)arg1 ;
-(NRDevice *)device;
-(id)fetchAssetsWithOptions:(id)arg1 ;
-(id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
-(id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
-(id)assetCollections;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_isSyncing;
-(id)_libraryInfo;
-(long long)collectionTarget;
-(id)initWithCollectionTarget:(long long)arg1 device:(id)arg2 ;
-(void)_createLibraryCollectionTargetMapChangeObserverIfNeeded;
-(void)_createSyncingChangeObserverIfNeeded;
-(id)_libraryAssetCollections;
-(id)_libraryAssetUUIDs;
-(void)_handleLibraryCollectionTargetMapDidChange;
-(void)_handleSyncingDidChange;
-(unsigned long long)countOfAssetsWithOptions:(id)arg1 ;
-(unsigned long long)countOfAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
-(unsigned long long)expectedCountOfAssets;
-(unsigned long long)expectedCountOfAssetsInAssetCollection:(id)arg1 ;
-(BOOL)isSyncingAssets;
-(BOOL)isSyncingAssetsInAssetCollection:(id)arg1 ;
@end

