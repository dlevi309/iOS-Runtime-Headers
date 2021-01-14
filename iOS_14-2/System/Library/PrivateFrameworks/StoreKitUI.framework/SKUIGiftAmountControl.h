/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableArray, UIView, UITextField, SKUIGiftConfiguration, NSString;

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate> {

	NSMutableArray* _amountButtons;
	UIView* _customAmountBackgroundView;
	UITextField* _customAmountField;
	SKUIGiftConfiguration* _giftConfiguration;
	long long _selectedAmount;
	long long _trackingAmount;

}

@property (nonatomic,readonly) long long selectedAmount; 
@property (nonatomic,readonly) NSString * selectedAmountString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(long long)selectedAmount;
-(NSString *)selectedAmountString;
-(id)initWithGiftConfiguration:(id)arg1 ;
-(void)_textFieldDidBeginEditing:(id)arg1 ;
-(void)_textFieldDidEndEditing:(id)arg1 ;
-(void)_updateButtonsWithTouch:(id)arg1 ;
-(void)_reloadSelectedButton;
@end

