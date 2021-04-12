/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIViewController.h>

@protocol SiriUIObjectPickerViewControllerDelegate;
@class SAUIDomainObjectPicker;

@interface SiriUIObjectPickerViewController : UIViewController {

	id<SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
	SAUIDomainObjectPicker* _picker;

}

@property (getter=_picker,nonatomic,readonly) SAUIDomainObjectPicker * picker;                                //@synthesize picker=_picker - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIObjectPickerViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
+(id)pickerControllerWithPicker:(id)arg1 ;
-(id)_picker;
-(id<SiriUIObjectPickerViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<SiriUIObjectPickerViewControllerDelegate>)arg1 ;
-(void)showPicker:(id)arg1 ;
-(id)initWithPicker:(id)arg1 ;
@end

