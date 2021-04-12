/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetCollectionActionManager.h>
#import <libobjc.A.dylib/PXActivityActionDelegate.h>
#import <libobjc.A.dylib/PXPhotoKitAssetCollectionActionPerformerInput.h>

@class NSMapTable, NSDictionary, PXAssetCollectionActionPerformer, NSString, PHFetchResult, PXAssetReference, PXAssetsDataSource;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate, PXPhotoKitAssetCollectionActionPerformerInput> {

	NSMapTable* __actionTypeByBarButtonItem;
	NSDictionary* __performerClassesByType;
	PXAssetCollectionActionPerformer* __activePerformer;

}

@property (nonatomic,readonly) NSMapTable * _actionTypeByBarButtonItem;                                                    //@synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem - In the implementation block
@property (nonatomic,readonly) NSDictionary * _performerClassesByType;                                                     //@synthesize _performerClassesByType=__performerClassesByType - In the implementation block
@property (setter=_setActivePerformer:,nonatomic,retain) PXAssetCollectionActionPerformer * _activePerformer;              //@synthesize _activePerformer=__activePerformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHFetchResult * people; 
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference; 
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource; 
@property (nonatomic,readonly) PHFetchResult * assetsFetchResult; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
-(void)performActivity:(id)arg1 ;
-(id)barButtonItemForActionType:(id)arg1 ;
-(id)initWithAssetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2 ;
-(PXAssetCollectionActionPerformer *)_activePerformer;
-(void)_handleActionPerformerComplete:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_handleBarButtonItem:(id)arg1 ;
-(id)alertActionForActionType:(id)arg1 ;
-(id)activityForActionType:(id)arg1 ;
-(BOOL)canPerformActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 assetCollectionReference:(id)arg3 ;
-(void)_setActivePerformer:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(Class)_firstPossiblePerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(PXAssetsDataSource *)assetsDataSource;
-(void)_executeActionTypeIfPossible:(id)arg1 ;
-(NSDictionary *)_performerClassesByType;
-(NSMapTable *)_actionTypeByBarButtonItem;
-(id)systemImageNameForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
@end

