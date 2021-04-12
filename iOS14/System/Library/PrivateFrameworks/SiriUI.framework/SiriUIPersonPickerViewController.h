/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

