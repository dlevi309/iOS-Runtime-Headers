/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCPLActionManager.h>

@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionManager : PXCPLActionManager {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(id)actionPerformerForActionType:(id)arg1 ;
@end

