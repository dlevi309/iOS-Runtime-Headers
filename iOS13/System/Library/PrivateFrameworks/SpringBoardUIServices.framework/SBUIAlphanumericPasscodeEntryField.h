/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UIView, UITextInputTraits;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {

	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,__weak,readonly) UITextInputTraits * textInputTraits; 
-(CGSize)_viewSize;
-(void)layoutSubviews;
-(UITextInputTraits *)textInputTraits;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(void)notePasscodeFieldTextDidChange;
@end

