/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFPhotoPickerControllerDelegate <NSObject>
@optional
-(void)photoPickerDidCancel:(id)arg1;
-(void)photoPicker:(id)arg1 didDeselectAssetWithIdentifier:(id)arg2;

@required
-(void)photoPicker:(id)arg1 didSelectAssetWithIdentifier:(id)arg2 mediaInfo:(id)arg3;

@end

