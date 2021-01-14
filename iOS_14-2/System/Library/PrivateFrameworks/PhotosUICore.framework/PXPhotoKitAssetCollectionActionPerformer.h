/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetCollectionActionPerformer.h>
#import <libobjc.A.dylib/PXPhotoStreamComposeServiceDelegate.h>
#import <libobjc.A.dylib/PXVideoTrimQueueControllerDelegate.h>
#import <libobjc.A.dylib/PXAssetsSharingHelperDelegate.h>
#import <libobjc.A.dylib/PXPhotoKitAssetCollectionActionPerformerInput.h>

@class PXVideoTrimQueueController, PXPhotoStreamComposeServiceViewController, NSString, PHFetchResult, PXAssetReference, PXAssetsDataSource;

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer <PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate, PXAssetsSharingHelperDelegate, PXPhotoKitAssetCollectionActionPerformerInput> {

	PXVideoTrimQueueController* _trimController;
	PXPhotoStreamComposeServiceViewController* _composeServiceController;

}

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
+(BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createAlertActionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(BOOL)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)createBarButtonItemForAssetCollectionReference:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(BOOL)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2 ;
-(void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2 ;
-(void)controller:(id)arg1 presentViewController:(id)arg2 ;
-(void)controller:(id)arg1 dismissViewControllerWithCompletion:(/*^block*/id)arg2 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg1 ;
-(void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2 ;
-(void)_handleAddToCloudSharedAlbum:(id)arg1 pickedAssets:(id)arg2 ;
-(void)_promptDeleteMemoryConfirmatonWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_confirmationAlertTitleForBlacklistingAction:(id)arg1 viewSpec:(id)arg2 ;
-(void)_promptBlacklistingConfirmatonForUserAction:(id)arg1 viewSpec:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

