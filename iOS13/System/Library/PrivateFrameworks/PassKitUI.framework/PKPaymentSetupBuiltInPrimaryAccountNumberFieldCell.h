/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	BOOL _showsCameraCaptureButton;
	UIButton* _cameraCaptureButton;

}

@property (assign,nonatomic) BOOL showsCameraCaptureButton;                        //@synthesize showsCameraCaptureButton=_showsCameraCaptureButton - In the implementation block
@property (nonatomic,retain,readonly) UIButton * cameraCaptureButton;              //@synthesize cameraCaptureButton=_cameraCaptureButton - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setShowsCameraCaptureButton:(BOOL)arg1 ;
-(UIButton *)cameraCaptureButton;
-(void)setPaymentSetupField:(id)arg1 ;
-(BOOL)showsCameraCaptureButton;
@end

