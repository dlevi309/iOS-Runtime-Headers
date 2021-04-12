/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPeerPaymentActionViewController.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>
#import <libobjc.A.dylib/PKEnterValueNewBalanceViewDelegate.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountPassViewDelegate.h>

@class UIScrollView, PKEnterCurrencyAmountPassView, NSString;

@interface PKPeerPaymentActionTransferToBankAmountPickerViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate, PKEnterCurrencyAmountPassViewDelegate> {

	UIScrollView* _scrollView;
	PKEnterCurrencyAmountPassView* _amountPassView;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setMinBalance:(id)arg1 ;
-(void)setMaxBalance:(id)arg1 ;
-(void)setMinLoadAmount:(id)arg1 ;
-(void)setMaxLoadAmount:(id)arg1 ;
-(void)setCardBalance:(id)arg1 ;
-(void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3 ;
-(void)updateFirstResponder;
-(void)updateAccountValues;
-(void)willDismissViewController;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(BOOL)_shouldShakeWithNewAmount:(id)arg1 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(id)_nextBarButton;
-(void)_updateBarButtonEnabledState;
-(void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(void)_nextBarButtonPressed:(id)arg1 ;
-(BOOL)_isCurrentAmountValid;
@end

