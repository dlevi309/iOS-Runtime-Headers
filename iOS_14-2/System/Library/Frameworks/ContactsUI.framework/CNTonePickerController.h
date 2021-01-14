/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UINavigationController.h>

@class TKTonePickerViewController;

@interface CNTonePickerController : UINavigationController {

	TKTonePickerViewController* _tonePicker;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePicker;                     //@synthesize tonePicker=_tonePicker - In the implementation block
@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate> delegate; 
-(void)setTonePicker:(TKTonePickerViewController *)arg1 ;
-(TKTonePickerViewController *)tonePicker;
-(void)doneButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2 ;
@end

