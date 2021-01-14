/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@protocol AAUIDataclassPickerViewControllerDelegate <NSObject>
@optional
-(id)footerTextForDataclassPickerViewController:(id)arg1;
-(id)titleTextForDataclassPickerViewController:(id)arg1;
-(id)messageTextForDataclassPickerViewController:(id)arg1;

@required
-(void)dataclassPickerViewControllerDidCancel:(id)arg1;
-(void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(id)arg2;

@end

