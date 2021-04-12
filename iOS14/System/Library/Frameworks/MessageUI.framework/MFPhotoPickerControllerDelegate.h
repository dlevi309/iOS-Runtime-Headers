/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFPhotoPickerControllerDelegate <NSObject>
@optional
-(void)photoPickerDidCancelSystemImagePicker:(id)arg1;
-(void)photoPicker:(id)arg1 didDeselectAssetWithIdentifier:(id)arg2;
-(id)presentingViewControllerForPhotoPicker:(id)arg1;
-(void)photoPickerDidCancel:(id)arg1;

@required
-(void)photoPicker:(id)arg1 didSelectAssetWithIdentifier:(id)arg2 mediaInfo:(id)arg3;

@end

