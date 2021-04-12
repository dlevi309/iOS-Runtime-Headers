/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@class UIAlertAction;

@interface PXPhotoKitAssetCollectionRenameActionPerformer : PXPhotoKitAssetCollectionActionPerformer {

	UIAlertAction* _renameAction;

}

@property (nonatomic,retain) UIAlertAction * renameAction;              //@synthesize renameAction=_renameAction - In the implementation block
+(BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
-(void)performUserInteractionTask;
-(UIAlertAction *)renameAction;
-(void)_updateRenameActionWithTextField:(id)arg1 ;
-(void)_handleRenameConfirmedWithAlert:(id)arg1 ;
-(void)setRenameAction:(UIAlertAction *)arg1 ;
@end

