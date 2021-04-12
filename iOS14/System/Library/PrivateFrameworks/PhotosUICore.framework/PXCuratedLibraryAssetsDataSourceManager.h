/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXCuratedLibraryMutableAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;
@class NSPredicate, NSDictionary, PXUpdater, PXCuratedLibraryAssetsDataSourceManagerConfiguration, PXAssetsDataSource, PXVisualPositionsChangeDetails, PXAssetsDataSourceManager, PXPhotoKitAssetsDataSourceManager, NSString;

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver> {

	SCD_Struct_PX146 _delegateRespondsTo;
	NSDictionary* _dataSourceManagerByZoomLevel;
	BOOL _isForcingSections;
	BOOL _canLoadData;
	BOOL _wantsCuration;
	id<PXCuratedLibraryAssetsDataSourceManagerDelegate> _delegate;
	long long _zoomLevel;
	NSPredicate* _allPhotosFilterPredicate;
	PXUpdater* _updater;
	PXCuratedLibraryAssetsDataSourceManagerConfiguration* _configuration;
	long long _zoomLevelForCurrentDataSourceManager;
	PXAssetsDataSource* _currentDataSource;
	long long _currentDataSourceZoomLevel;
	PXVisualPositionsChangeDetails* _lastVisualPositionsChangeDetails;
	long long _lastTransitionType;
	unsigned long long _lastVisualPositionsChangeFromDataSourceIdentifier;
	unsigned long long _lastVisualPositionsChangeToDataSourceIdentifier;

}

@property (nonatomic,readonly) PXUpdater * updater;                                                                     //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManagerConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL canLoadData;                                                                          //@synthesize canLoadData=_canLoadData - In the implementation block
@property (assign,nonatomic) long long zoomLevelForCurrentDataSourceManager;                                            //@synthesize zoomLevelForCurrentDataSourceManager=_zoomLevelForCurrentDataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL wantsCuration;                                                                        //@synthesize wantsCuration=_wantsCuration - In the implementation block
@property (nonatomic,retain) PXAssetsDataSource * currentDataSource;                                                    //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * currentAssetsDataSourceManager; 
@property (assign,nonatomic) long long currentDataSourceZoomLevel;                                                      //@synthesize currentDataSourceZoomLevel=_currentDataSourceZoomLevel - In the implementation block
@property (nonatomic,retain) PXVisualPositionsChangeDetails * lastVisualPositionsChangeDetails;                         //@synthesize lastVisualPositionsChangeDetails=_lastVisualPositionsChangeDetails - In the implementation block
@property (assign,nonatomic) long long lastTransitionType;                                                              //@synthesize lastTransitionType=_lastTransitionType - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisualPositionsChangeFromDataSourceIdentifier;                      //@synthesize lastVisualPositionsChangeFromDataSourceIdentifier=_lastVisualPositionsChangeFromDataSourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisualPositionsChangeToDataSourceIdentifier;                        //@synthesize lastVisualPositionsChangeToDataSourceIdentifier=_lastVisualPositionsChangeToDataSourceIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                                                     //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) NSPredicate * allPhotosFilterPredicate;                                                  //@synthesize allPhotosFilterPredicate=_allPhotosFilterPredicate - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * currentPhotoKitAssetsDataSourceManager; 
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (nonatomic,retain) NSPredicate * filterPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wantsCuration;
-(void)setWantsCuration:(BOOL)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(id)createInitialDataSource;
-(long long)zoomLevel;
-(id)visualPositionsChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(PXAssetsDataSource *)currentDataSource;
-(void)setNeedsUpdate;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(void)loadIfNeeded;
-(void)setCurrentDataSource:(PXAssetsDataSource *)arg1 ;
-(void)_updateDataSource;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)setZoomLevel:(long long)arg1 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(id)init;
-(unsigned long long)lastVisualPositionsChangeToDataSourceIdentifier;
-(void)_updateDataSourceManagers;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 ;
-(id<PXCuratedLibraryAssetsDataSourceManagerDelegate>)delegate;
-(void)setLastVisualPositionsChangeFromDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)arg1 withParent:(id)arg2 ;
-(void)setLastVisualPositionsChangeDetails:(PXVisualPositionsChangeDetails *)arg1 ;
-(PXAssetsDataSourceManager *)currentAssetsDataSourceManager;
-(void)_invalidateCuration;
-(void)setZoomLevelForCurrentDataSourceManager:(long long)arg1 ;
-(void)didPerformChanges;
-(void)setCurrentDataSourceZoomLevel:(long long)arg1 ;
-(void)_invalidateDataSource;
-(id)_photosDataSourceForZoomLevel:(long long)arg1 ;
-(BOOL)forceAllPhotosAccurateIfNeeded;
-(void)_invalidateDataSourceManagers;
-(void)_updateCuration;
-(void)_invalidatePropertiesDerivedFromZoomLevel;
-(unsigned long long)lastVisualPositionsChangeFromDataSourceIdentifier;
-(BOOL)canLoadData;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<PXCuratedLibraryAssetsDataSourceManagerDelegate>)arg1 ;
-(void)setAllPhotosFilterPredicate:(NSPredicate *)arg1 ;
-(PXUpdater *)updater;
-(PXCuratedLibraryAssetsDataSourceManagerConfiguration *)configuration;
-(long long)zoomLevelForCurrentDataSourceManager;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 assetCollectionReferenceWithSameKeyAssetAsParent:(id*)arg3 ;
-(long long)lastTransitionType;
-(unsigned long long)libraryStateForZoomLevel:(long long)arg1 ;
-(void)resumeChangeDelivery:(id)arg1 ;
-(void)setCanLoadData:(BOOL)arg1 ;
-(NSPredicate *)allPhotosFilterPredicate;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2 ;
-(long long)transitionTypeFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(long long)currentDataSourceZoomLevel;
-(id)dataSourceForZoomLevel:(long long)arg1 ;
-(id)dataSourceManagerForZoomLevel:(long long)arg1 ;
-(void)setLastVisualPositionsChangeToDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(PXVisualPositionsChangeDetails *)lastVisualPositionsChangeDetails;
-(void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3 ;
-(void)setLastTransitionType:(long long)arg1 ;
-(void)_updatePropertiesDerivedFromZoomLevel;
-(PXPhotoKitAssetsDataSourceManager *)currentPhotoKitAssetsDataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

