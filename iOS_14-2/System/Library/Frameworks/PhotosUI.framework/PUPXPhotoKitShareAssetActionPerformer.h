/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>
#import <libobjc.A.dylib/PXCMMActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXActivitySharingControllerDelegate.h>

@class PUActivitySharingController, NSString;

@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer <PXCMMActionPerformerDelegate, PXActivitySharingControllerDelegate> {

	PUActivitySharingController* _activitySharingController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3 ;
+(id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performUserInteractionTask;
-(void)_presentShareSheet;
-(id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2 ;
-(void)_didCompleteWithActivityType:(id)arg1 success:(BOOL)arg2 asset:(id)arg3 person:(id)arg4 selectionSnapshot:(id)arg5 ;
-(void)_performSetKeyFaceWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performNotThisPersonWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)activitySharingControllerDidCancel:(id)arg1 ;
-(void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3 ;
@end

