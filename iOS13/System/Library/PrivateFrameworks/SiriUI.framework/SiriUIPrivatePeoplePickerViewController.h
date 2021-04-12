/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <SiriUI/SiriUIObjectPickerViewControllerDelegate.h>

@class SAABPersonPicker, SiriUIObjectPickerViewController, NSString;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate> {

	SAABPersonPicker* _picker;
	SiriUIObjectPickerViewController* _pickerController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)_pickerController;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)_showPicker:(id)arg1 ;
-(id)viewControllerForPickerPresentation:(id)arg1 ;
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3 ;
-(id)initWithSnippet:(id)arg1 ;
-(BOOL)usePlatterStyle;
-(Class)footerViewClass;
-(void)configureReusableFooterView:(id)arg1 ;
-(double)desiredHeightForFooterView;
@end

