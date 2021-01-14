/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class UIViewController;

@interface PUPhotoKitEditActionPerformer : PUPhotoKitActionPerformer {

	UIViewController* _presentedAlertViewController;

}
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)performUserInteractionTask;
-(void)_beginEditingCurrentAsset;
-(void)_presentEditorForAsset:(id)arg1 ;
@end

