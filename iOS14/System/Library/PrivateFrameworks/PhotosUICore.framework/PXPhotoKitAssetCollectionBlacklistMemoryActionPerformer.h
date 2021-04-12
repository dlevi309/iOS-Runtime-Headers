/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer.h>

@interface PXPhotoKitAssetCollectionBlacklistMemoryActionPerformer : PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer
+(BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createAlertActionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
-(void)performUserInteractionTask;
-(void)performBackgroundTask;
-(BOOL)_didUserConfirmDeleteOfMemory;
-(id)disambiguationMenuForUseCase:(unsigned long long)arg1 withMenuActionHandler:(/*^block*/id)arg2 ;
-(BOOL)_doesUserActionRequireDisambiguation:(id)arg1 outResolvedAction:(id*)arg2 outAlertActionsForDisambiguation:(id*)arg3 alertActionHandler:(/*^block*/id)arg4 ;
-(id)_disambiguationActionsForAlert:(BOOL)arg1 withActionHandler:(/*^block*/id)arg2 ;
@end

