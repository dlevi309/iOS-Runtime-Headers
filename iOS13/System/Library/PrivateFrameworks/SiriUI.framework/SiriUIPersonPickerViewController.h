/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUIObjectPickerViewController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class UIViewController, NSString;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <CNContactPickerDelegate> {

	UIViewController* _presentingViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)_dismissPicker;
-(void)showPicker:(id)arg1 ;
-(id)_pickerResponseForPerson:(id)arg1 ;
@end

