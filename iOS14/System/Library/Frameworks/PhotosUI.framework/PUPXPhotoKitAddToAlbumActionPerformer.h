/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUAlbumPickerViewController;

@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer {

	PUAlbumPickerViewController* _albumPickerViewController;

}

@property (nonatomic,retain) PUAlbumPickerViewController * albumPickerViewController;              //@synthesize albumPickerViewController=_albumPickerViewController - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3 ;
-(void)performUserInteractionTask;
-(void)_handlePickedAlbum:(id)arg1 assets:(id)arg2 ;
-(void)_handleUserInteractionTaskResult:(BOOL)arg1 error:(id)arg2 ;
-(PUAlbumPickerViewController *)albumPickerViewController;
-(void)setAlbumPickerViewController:(PUAlbumPickerViewController *)arg1 ;
@end

