/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetActionManager.h>
#import <libobjc.A.dylib/PXActivityActionDelegate.h>

@class PXPhotoKitAssetsDataSourceManager, PXPhotoKitImportStatusManager, NSString, PHPerson, NSMutableDictionary, NSMapTable, PXAssetActionPerformer, PXPhotosDataSource;

@interface PXPhotoKitAssetActionManager : PXAssetActionManager <PXActivityActionDelegate> {

	PXPhotoKitAssetsDataSourceManager* _dataSourceManager;
	PXPhotoKitImportStatusManager* _importStatusManager;
	NSString* _importSessionID;
	PHPerson* _person;
	NSMutableDictionary* __performerClassByType;
	NSMapTable* __actionTypeByBarButtonItem;
	PXAssetActionPerformer* __activePerformer;

}

@property (nonatomic,readonly) NSMutableDictionary * _performerClassByType;                                      //@synthesize _performerClassByType=__performerClassByType - In the implementation block
@property (nonatomic,readonly) NSMapTable * _actionTypeByBarButtonItem;                                          //@synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * _dataSourceSnapshot; 
@property (setter=_setActivePerformer:,nonatomic,retain) PXAssetActionPerformer * _activePerformer;              //@synthesize _activePerformer=__activePerformer - In the implementation block
@property (nonatomic,retain) PXPhotoKitAssetsDataSourceManager * dataSourceManager;                              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitImportStatusManager * importStatusManager;                                //@synthesize importStatusManager=_importStatusManager - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                                                         //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                                                  //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)px_registerAdditionalPerformerClasses;
-(PHPerson *)person;
-(id)initWithSelectionManager:(id)arg1 ;
-(void)performActivity:(id)arg1 ;
-(id)barButtonItemForActionType:(id)arg1 ;
-(id)previewActionForActionType:(id)arg1 image:(id)arg2 ;
-(NSString *)importSessionID;
-(BOOL)canPerformActionType:(id)arg1 ;
-(void)setDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1 ;
-(BOOL)shouldEnableActionType:(id)arg1 onAsset:(id)arg2 ;
-(void)setImportStatusManager:(PXPhotoKitImportStatusManager *)arg1 ;
-(PXAssetActionPerformer *)_activePerformer;
-(void)_handleActionPerformerComplete:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_handleBarButtonItem:(id)arg1 ;
-(NSMutableDictionary *)_performerClassByType;
-(void)registerPerformerClass:(Class)arg1 forType:(id)arg2 ;
-(PXPhotoKitAssetsDataSourceManager *)dataSourceManager;
-(void)setImportSessionID:(NSString *)arg1 ;
-(id)alertActionForActionType:(id)arg1 ;
-(id)activityForActionType:(id)arg1 ;
-(void)_setActivePerformer:(id)arg1 ;
-(id)_selectionSnapshotForPerfomerClass:(Class)arg1 applySubsetIfNeeded:(BOOL)arg2 ;
-(void)_handlePreviewAction:(id)arg1 actionType:(id)arg2 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(void)setPerson:(PHPerson *)arg1 ;
-(id)initWithSelectedObjectReference:(id)arg1 dataSourceManager:(id)arg2 ;
-(BOOL)canPerformAssetVariationActions;
-(void)executeActionForActionType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(PXPhotoKitImportStatusManager *)importStatusManager;
-(NSMapTable *)_actionTypeByBarButtonItem;
-(id)actionPerformerForActionType:(id)arg1 ;
-(PXPhotosDataSource *)_dataSourceSnapshot;
@end

