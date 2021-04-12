/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NTKPhoto, UIImage, PHAsset;

@interface NTKCompanionKaleidoscopeEditor : NTKCompanionResourceDirectoryEditor {

	NTKPhoto* _pickedPhoto;
	UIImage* _pickedImage;
	PHAsset* _newAsset;
	UIImage* _newImage;

}

@property (nonatomic,readonly) long long photosCount; 
+(id)_fetchAssetForPhoto:(id)arg1 ;
-(long long)photosCount;
-(id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(/*^block*/id)arg1 ;
-(void)finalizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_readPickedPhoto;
-(void)_reinitializeWithPhoto:(id)arg1 image:(id)arg2 ;
-(void)setPhoto:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRawImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)imageForPhotoWithCompletion:(/*^block*/id)arg1 ;
@end

