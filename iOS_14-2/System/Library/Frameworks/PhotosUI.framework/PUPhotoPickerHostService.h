/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUPhotoPickerHostService <PUPhotoPickerSelectionService,PUPhotoPickerTestSupportHandler>
@required
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
-(void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)invalidatePhotoPickerHostServices;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
-(void)cancelPhotoPicker;
-(void)didDisplayPhotoPickerSourceType:(id)arg1;
-(void)didDisplayPhotoPickerPreview;
-(void)didSelectMediaWithInfoDictionary:(id)arg1;

@end

