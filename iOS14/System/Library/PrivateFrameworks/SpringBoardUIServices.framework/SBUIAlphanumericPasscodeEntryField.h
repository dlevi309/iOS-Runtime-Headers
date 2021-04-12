/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextInputTraits *)textInputTraits;
-(void)layoutSubviews;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(CGSize)_viewSize;
-(void)notePasscodeFieldTextDidChange;
@end

