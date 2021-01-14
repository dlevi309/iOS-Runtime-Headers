/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>
@optional
-(void)pickerViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
-(void)pickerViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2;

@required
-(id)viewControllerForPickerPresentation:(id)arg1;

@end

