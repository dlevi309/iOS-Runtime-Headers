/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer {

	PXAssetCollectionReference* _assetCollectionReference;

}

@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
-(PXAssetCollectionReference *)assetCollectionReference;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(void)performActionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

