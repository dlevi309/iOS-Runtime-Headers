/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXImportAssetsDataSourceManagerDelegate.h>
#import <libobjc.A.dylib/PXMutableImportController.h>
#import <libobjc.A.dylib/PHImportServiceImporterDelegate.h>
#import <libobjc.A.dylib/PHImportSourceObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXImportControllerImportCompletionDelegate, OS_dispatch_queue;
@class NSArray, PHImportSource, PHPhotoLibrary, NSObject, PXImportMediaProvider, PXImportAssetsDataSourceManager, PXImportSessionInfo, NSProgress, PHAssetCollection, PXImportDeleteAction, PXSectionedSelectionManager, NSTimer, NSMutableDictionary, NSMutableSet, PXPowerController, PXSelectionSnapshot, PXImportMediaLoadingCoordinator, NSString;

@interface PXImportController : PXObservable <PXImportAssetsDataSourceManagerDelegate, PXMutableImportController, PHImportServiceImporterDelegate, PHImportSourceObserver, PXChangeObserver> {

	NSArray* _lastSelectedModels;
	BOOL _loadingContent;
	BOOL _hasLoadedInitialBatchOfAssets;
	BOOL _loadingInitialBatchOfAssets;
	BOOL _userRequiredToTrustHostOnSourceDevice;
	BOOL _importingAssets;
	BOOL _deletingAssets;
	BOOL _alreadyImportedItemsSelectable;
	BOOL _hasLoadedAssets;
	BOOL _hasReceivedImportSourceAssetChanges;
	BOOL _isLoadingInitialBatchOfAssets;
	unsigned short _imageFormat;
	unsigned _importAssetsPowerAssertionIdentifier;
	unsigned _deleteAssetsPowerAssertionIdentifier;
	unsigned _loadAssetsPowerAssertionIdentifier;
	PHImportSource* _importSource;
	PHPhotoLibrary* _photoLibrary;
	NSObject*<PXImportControllerImportCompletionDelegate> _importCompletionDelegate;
	PXImportMediaProvider* _importMediaProvider;
	PXImportAssetsDataSourceManager* _dataSourceManager;
	PXImportSessionInfo* _importSessionInfo;
	NSProgress* _importProgress;
	PHAssetCollection* _importDestinationAlbum;
	PXImportDeleteAction* _deleteAction;
	PXSectionedSelectionManager* _selectionManager;
	NSTimer* _initialBatchOfAssetsTimer;
	NSMutableDictionary* _sharedViewModelsById;
	NSObject*<OS_dispatch_queue> _sharedViewModelsUpdateQueue;
	NSMutableSet* _otherDataSourceManagers;
	NSObject*<OS_dispatch_queue> _otherDataSourceManagersQueue;
	PXPowerController* _powerController;
	NSTimer* _assetLoadingPowerAssertionTimer;
	/*^block*/id _importCompletionHandler;
	/*^block*/id _deleteCompletionHandler;
	PXSelectionSnapshot* _lastSelectionSnapshot;
	PXImportMediaLoadingCoordinator* _mediaLoadingCoordinator;

}

@property (assign,nonatomic) BOOL hasLoadedAssets;                                                                                   //@synthesize hasLoadedAssets=_hasLoadedAssets - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedImportSourceAssetChanges;                                                               //@synthesize hasReceivedImportSourceAssetChanges=_hasReceivedImportSourceAssetChanges - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedInitialBatchOfAssets;                                                                     //@synthesize hasLoadedInitialBatchOfAssets=_hasLoadedInitialBatchOfAssets - In the implementation block
@property (assign,nonatomic) BOOL isLoadingInitialBatchOfAssets;                                                                     //@synthesize isLoadingInitialBatchOfAssets=_isLoadingInitialBatchOfAssets - In the implementation block
@property (nonatomic,retain) NSTimer * initialBatchOfAssetsTimer;                                                                    //@synthesize initialBatchOfAssetsTimer=_initialBatchOfAssetsTimer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sharedViewModelsById;                                                           //@synthesize sharedViewModelsById=_sharedViewModelsById - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sharedViewModelsUpdateQueue;                                             //@synthesize sharedViewModelsUpdateQueue=_sharedViewModelsUpdateQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * otherDataSourceManagers;                                                               //@synthesize otherDataSourceManagers=_otherDataSourceManagers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> otherDataSourceManagersQueue;                                            //@synthesize otherDataSourceManagersQueue=_otherDataSourceManagersQueue - In the implementation block
@property (assign,getter=isUserRequiredToTrustHostOnSourceDevice,nonatomic) BOOL userRequiredToTrustHostOnSourceDevice;              //@synthesize userRequiredToTrustHostOnSourceDevice=_userRequiredToTrustHostOnSourceDevice - In the implementation block
@property (nonatomic,retain) PXPowerController * powerController;                                                                    //@synthesize powerController=_powerController - In the implementation block
@property (assign,nonatomic) unsigned importAssetsPowerAssertionIdentifier;                                                          //@synthesize importAssetsPowerAssertionIdentifier=_importAssetsPowerAssertionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned deleteAssetsPowerAssertionIdentifier;                                                          //@synthesize deleteAssetsPowerAssertionIdentifier=_deleteAssetsPowerAssertionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned loadAssetsPowerAssertionIdentifier;                                                            //@synthesize loadAssetsPowerAssertionIdentifier=_loadAssetsPowerAssertionIdentifier - In the implementation block
@property (nonatomic,retain) NSTimer * assetLoadingPowerAssertionTimer;                                                              //@synthesize assetLoadingPowerAssertionTimer=_assetLoadingPowerAssertionTimer - In the implementation block
@property (nonatomic,retain) PXImportSessionInfo * importSessionInfo;                                                                //@synthesize importSessionInfo=_importSessionInfo - In the implementation block
@property (nonatomic,retain) NSProgress * importProgress;                                                                            //@synthesize importProgress=_importProgress - In the implementation block
@property (nonatomic,copy) id importCompletionHandler;                                                                               //@synthesize importCompletionHandler=_importCompletionHandler - In the implementation block
@property (nonatomic,retain) PXImportDeleteAction * deleteAction;                                                                    //@synthesize deleteAction=_deleteAction - In the implementation block
@property (nonatomic,copy) id deleteCompletionHandler;                                                                               //@synthesize deleteCompletionHandler=_deleteCompletionHandler - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * lastSelectionSnapshot;                                                            //@synthesize lastSelectionSnapshot=_lastSelectionSnapshot - In the implementation block
@property (nonatomic,readonly) PXImportMediaLoadingCoordinator * mediaLoadingCoordinator;                                            //@synthesize mediaLoadingCoordinator=_mediaLoadingCoordinator - In the implementation block
@property (nonatomic,readonly) PHImportSource * importSource;                                                                        //@synthesize importSource=_importSource - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                                        //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) unsigned short imageFormat;                                                                           //@synthesize imageFormat=_imageFormat - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PXImportControllerImportCompletionDelegate> importCompletionDelegate;                  //@synthesize importCompletionDelegate=_importCompletionDelegate - In the implementation block
@property (nonatomic,readonly) PXImportMediaProvider * importMediaProvider;                                                          //@synthesize importMediaProvider=_importMediaProvider - In the implementation block
@property (nonatomic,readonly) PXImportAssetsDataSourceManager * dataSourceManager;                                                  //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (getter=isLoadingContent,nonatomic,readonly) BOOL loadingContent;                                                          //@synthesize loadingContent=_loadingContent - In the implementation block
@property (getter=isLoadingInitialBatchOfAssets,nonatomic,readonly) BOOL loadingInitialBatchOfAssets;                                //@synthesize loadingInitialBatchOfAssets=_loadingInitialBatchOfAssets - In the implementation block
@property (getter=isImportingAssets,nonatomic,readonly) BOOL importingAssets;                                                        //@synthesize importingAssets=_importingAssets - In the implementation block
@property (nonatomic,retain) PHAssetCollection * importDestinationAlbum;                                                             //@synthesize importDestinationAlbum=_importDestinationAlbum - In the implementation block
@property (getter=isDeletingAssets,nonatomic,readonly) BOOL deletingAssets;                                                          //@synthesize deletingAssets=_deletingAssets - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                                       //@synthesize selectionManager=_selectionManager - In the implementation block
@property (assign,nonatomic) BOOL alreadyImportedItemsSelectable;                                                                    //@synthesize alreadyImportedItemsSelectable=_alreadyImportedItemsSelectable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemsConstrainedByAvailableDiskSpaceFromItems:(id)arg1 additionalBytesRequired:(inout long long*)arg2 ;
+(id)assetsForModels:(id)arg1 ;
+(id)importOperationQueue;
+(void)favoriteAssetsFromImportResults:(id)arg1 photoLibrary:(id)arg2 ;
+(id)importFilesAtURLs:(id)arg1 photoLibrary:(id)arg2 collection:(id)arg3 checkDuplicates:(BOOL)arg4 referenced:(BOOL)arg5 delegate:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)unregisterPXImportControllerNotificationsReceiver:(id)arg1 ;
+(void)registerPXImportControllerNotificationsReceiver:(id)arg1 ;
-(PXSectionedSelectionManager *)selectionManager;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)shutdown;
-(PHPhotoLibrary *)photoLibrary;
-(PXPowerController *)powerController;
-(void)loadAssets;
-(NSProgress *)importProgress;
-(unsigned short)imageFormat;
-(void)setImportProgress:(NSProgress *)arg1 ;
-(void)setAlreadyImportedItemsSelectable:(BOOL)arg1 ;
-(id)selectedItems;
-(void)setSelected:(BOOL)arg1 forItems:(id)arg2 ;
-(BOOL)isUserRequiredToTrustHostOnSourceDevice;
-(void)setImportDestinationAlbum:(PHAssetCollection *)arg1 ;
-(void)setImportCompletionDelegate:(NSObject*<PXImportControllerImportCompletionDelegate>)arg1 ;
-(id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2 imageFormat:(unsigned short)arg3 ;
-(void)stopImport;
-(PXImportAssetsDataSourceManager *)dataSourceManager;
-(void)sendActionProgress:(double)arg1 ;
-(void)importSource:(id)arg1 didDeleteAsset:(id)arg2 ;
-(void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3 ;
-(void)nameDidChangeForImportSource:(id)arg1 ;
-(PHImportSource *)importSource;
-(PXImportDeleteAction *)deleteAction;
-(void)deleteItems:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)importItems:(id)arg1 configuration:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)importAsset:(id)arg1 asDuplicateOfLibraryAsset:(id)arg2 applyToAll:(BOOL*)arg3 ;
-(void)setLoadingContent:(BOOL)arg1 ;
-(void)setImportingAssets:(BOOL)arg1 ;
-(void)setDeletingAssets:(BOOL)arg1 ;
-(void)setUserRequiredToTrustHostOnSourceDevice:(BOOL)arg1 ;
-(void)setHasLoadedInitialBatchOfAssets:(BOOL)arg1 ;
-(void)setLoadingInitialBatchOfAssets:(BOOL)arg1 ;
-(id)viewModelMapForImportAssetsDataSourceManager:(id)arg1 ;
-(void)handleImportSourceModifiedAssets;
-(void)startInitialBatchOfAssetsTimerWithTimeout:(double)arg1 ;
-(void)finishImportingWithResults:(id)arg1 ;
-(void)finishDeletingItems;
-(PXImportSessionInfo *)importSessionInfo;
-(void)startObservingImportProgress;
-(void)stopObservingImportProgress;
-(void)restartTimedAssetsLoadingPowerAssertion;
-(void)stopTimedAssetsLoadingPowerAssertion;
-(void)assetLoadingPowerAssertionTimerFired;
-(NSObject*<PXImportControllerImportCompletionDelegate>)importCompletionDelegate;
-(void)setImportSessionInfo:(PXImportSessionInfo *)arg1 ;
-(void)setDeleteAction:(PXImportDeleteAction *)arg1 ;
-(BOOL)hasLoadedAssets;
-(void)setHasLoadedAssets:(BOOL)arg1 ;
-(BOOL)hasReceivedImportSourceAssetChanges;
-(void)setHasReceivedImportSourceAssetChanges:(BOOL)arg1 ;
-(void)setIsLoadingInitialBatchOfAssets:(BOOL)arg1 ;
-(NSTimer *)initialBatchOfAssetsTimer;
-(void)setInitialBatchOfAssetsTimer:(NSTimer *)arg1 ;
-(NSMutableDictionary *)sharedViewModelsById;
-(NSObject*<OS_dispatch_queue>)sharedViewModelsUpdateQueue;
-(NSMutableSet *)otherDataSourceManagers;
-(NSObject*<OS_dispatch_queue>)otherDataSourceManagersQueue;
-(void)setPowerController:(PXPowerController *)arg1 ;
-(unsigned)importAssetsPowerAssertionIdentifier;
-(void)setImportAssetsPowerAssertionIdentifier:(unsigned)arg1 ;
-(unsigned)deleteAssetsPowerAssertionIdentifier;
-(void)setDeleteAssetsPowerAssertionIdentifier:(unsigned)arg1 ;
-(unsigned)loadAssetsPowerAssertionIdentifier;
-(void)setLoadAssetsPowerAssertionIdentifier:(unsigned)arg1 ;
-(NSTimer *)assetLoadingPowerAssertionTimer;
-(void)setAssetLoadingPowerAssertionTimer:(NSTimer *)arg1 ;
-(void)completedImportRecord:(id)arg1 ;
-(id)importCompletionHandler;
-(void)setImportCompletionHandler:(id)arg1 ;
-(id)deleteCompletionHandler;
-(void)setDeleteCompletionHandler:(id)arg1 ;
-(PXSelectionSnapshot *)lastSelectionSnapshot;
-(void)setLastSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(PXImportMediaLoadingCoordinator *)mediaLoadingCoordinator;
-(id)mutableChangeObject;
-(void)importSource:(id)arg1 didRemoveAssets:(id)arg2 ;
-(void)importSource:(id)arg1 didAddAssets:(id)arg2 ;
-(void)capabilitiesDidChangeForImportSource:(id)arg1 ;
-(void)userHasTrustedHostForImportSource:(id)arg1 ;
-(void)userRequiredToTrustHostForImportSource:(id)arg1 ;
-(void)selectItem:(id)arg1 ;
-(void)deselectItem:(id)arg1 ;
-(PXImportMediaProvider *)importMediaProvider;
-(PHAssetCollection *)importDestinationAlbum;
-(BOOL)isDeletingAssets;
-(BOOL)isImportingAssets;
-(BOOL)isLoadingInitialBatchOfAssets;
-(BOOL)isLoadingInitialBatchOfAssets;
-(BOOL)hasLoadedInitialBatchOfAssets;
-(void)removeDataSourceManager:(id)arg1 ;
-(id)createDataSourceManager;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isLoadingContent;
-(BOOL)alreadyImportedItemsSelectable;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

