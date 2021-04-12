/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCPLActionPerformer.h>

@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionPerformer : PXCPLActionPerformer {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithActionType:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithActionType:(id)arg1 ;
@end

