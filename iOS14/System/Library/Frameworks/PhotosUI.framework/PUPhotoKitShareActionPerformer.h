/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class UIViewController, PUActivitySharingController;

@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer {

	UIViewController* _preheatedSharingViewController;
	PUActivitySharingController* _activitySharingController;

}

@property (nonatomic,retain) UIViewController * preheatedSharingViewController;                    //@synthesize preheatedSharingViewController=_preheatedSharingViewController - In the implementation block
@property (nonatomic,retain) PUActivitySharingController * activitySharingController;              //@synthesize activitySharingController=_activitySharingController - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)performUserInteractionTask;
-(id)_createSharingViewControllerFromCurrentSelection;
-(UIViewController *)preheatedSharingViewController;
-(void)setPreheatedSharingViewController:(UIViewController *)arg1 ;
-(id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2 ;
-(void)preheatUserInteractionTask;
-(void)setActivitySharingController:(PUActivitySharingController *)arg1 ;
-(PUActivitySharingController *)activitySharingController;
@end

