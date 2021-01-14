/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPXPhotoKitDestructiveActionsPerformer.h>

@interface PUPXPhotoKitTrashAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3 ;
+(id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3 ;
-(long long)destructivePhotosAction;
@end

