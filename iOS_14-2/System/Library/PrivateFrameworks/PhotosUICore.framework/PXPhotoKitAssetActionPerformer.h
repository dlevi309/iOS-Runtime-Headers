/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetActionPerformer.h>

@class NSArray, NSDictionary, PXPhotoKitAssetsDataSourceManager, PHPerson, PXSectionedObjectReference, PXPhotoKitImportStatusManager, NSString, PXPhotosDataSource;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer {

	BOOL _shouldSkipUserConfirmation;
	NSArray* _assets;
	NSDictionary* _assetsByAssetCollection;
	PXPhotoKitAssetsDataSourceManager* _photoKitDataSourceManager;
	PHPerson* _person;
	PXSectionedObjectReference* _objectReference;
	PXPhotoKitImportStatusManager* _importStatusManager;
	NSString* _importSessionID;

}

@property (nonatomic,readonly) PXPhotosDataSource * photosDataSourceSnapshot; 
@property (nonatomic,retain) PXPhotoKitAssetsDataSourceManager * photoKitDataSourceManager;              //@synthesize photoKitDataSourceManager=_photoKitDataSourceManager - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                                          //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * objectReference;                               //@synthesize objectReference=_objectReference - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                                         //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetsByAssetCollection;                                   //@synthesize assetsByAssetCollection=_assetsByAssetCollection - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipUserConfirmation;                                            //@synthesize shouldSkipUserConfirmation=_shouldSkipUserConfirmation - In the implementation block
@property (nonatomic,retain) PXPhotoKitImportStatusManager * importStatusManager;                        //@synthesize importStatusManager=_importStatusManager - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                                                 //@synthesize importSessionID=_importSessionID - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3 ;
+(id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
+(BOOL)canPerformOnImplicitSelection;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2 ;
+(id)createActivityWithActionManager:(id)arg1 ;
+(BOOL)canPerformWithActionManager:(id)arg1 ;
+(id)createAlertActionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(PHPerson *)person;
-(NSArray *)assets;
-(NSString *)importSessionID;
-(void)forceIncludeAssetsInDataSource;
-(id)_indexPathsInPhotosDataSource:(id)arg1 ;
-(void)setImportStatusManager:(PXPhotoKitImportStatusManager *)arg1 ;
-(void)stopExcludingAssetsFromDataSource;
-(PXPhotosDataSource *)photosDataSourceSnapshot;
-(void)instantlyExcludeAssetsFromDataSource;
-(BOOL)shouldSkipUserConfirmation;
-(void)setShouldSkipUserConfirmation:(BOOL)arg1 ;
-(id)createPerformerWithClass:(Class)arg1 actionType:(id)arg2 ;
-(void)setImportSessionID:(NSString *)arg1 ;
-(void)setPhotoKitDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1 ;
-(PXPhotoKitAssetsDataSourceManager *)photoKitDataSourceManager;
-(void)setPerson:(PHPerson *)arg1 ;
-(PXPhotoKitImportStatusManager *)importStatusManager;
-(PXSectionedObjectReference *)objectReference;
-(NSDictionary *)assetsByAssetCollection;
-(void)setObjectReference:(PXSectionedObjectReference *)arg1 ;
@end

