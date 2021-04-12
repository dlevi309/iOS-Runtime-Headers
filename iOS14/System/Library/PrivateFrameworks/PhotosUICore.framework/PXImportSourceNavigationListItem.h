/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListItem.h>

@class PHImportSource, PHPhotoLibrary, UIImage;

@interface PXImportSourceNavigationListItem : PXNavigationListItem {

	PHImportSource* _importSource;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHImportSource * importSource;              //@synthesize importSource=_importSource - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
-(PHPhotoLibrary *)photoLibrary;
-(BOOL)isRemovable;
-(id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3 ;
-(UIImage *)image;
-(PHImportSource *)importSource;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)glyphImageName;
-(id)representedObject;
@end

