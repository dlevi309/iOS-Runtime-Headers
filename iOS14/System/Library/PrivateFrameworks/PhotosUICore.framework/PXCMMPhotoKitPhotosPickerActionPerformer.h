/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMShowPhotosPickerActionPerformer.h>
#import <libobjc.A.dylib/PXCMMPhotoKitActionPerformer.h>

@class UIViewController, PXCMMPhotoKitSession;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer> {

	UIViewController* _photosPickerViewController;

}

@property (nonatomic,readonly) PXCMMPhotoKitSession * session; 
-(void)performUserInteractionTask;
-(id)_currentAssets;
-(void)_pickerDidCompleteWithPickedAssets:(id)arg1 ;
-(id)_currentSelectedAssets;
@end

