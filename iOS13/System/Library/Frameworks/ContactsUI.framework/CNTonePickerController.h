/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UINavigationController.h>

@class TKTonePickerViewController;

@interface CNTonePickerController : UINavigationController {

	TKTonePickerViewController* _tonePicker;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePicker;                     //@synthesize tonePicker=_tonePicker - In the implementation block
@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate> delegate; 
-(id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2 ;
-(void)doneButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(TKTonePickerViewController *)tonePicker;
-(void)setTonePicker:(TKTonePickerViewController *)arg1 ;
@end

