/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPaymentSetupField:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)showsCameraCaptureButton;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setShowsCameraCaptureButton:(BOOL)arg1 ;
-(UIButton *)cameraCaptureButton;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)dealloc;
@end

