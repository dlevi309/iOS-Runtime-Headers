/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKEnterValueNewBalanceViewDelegate;
@class NSDecimalNumber, NSNumberFormatter, UILabel, UIActivityIndicatorView, UITapGestureRecognizer, NSString;

@interface PKEnterValueNewBalanceView : UIView <UIGestureRecognizerDelegate> {

	NSDecimalNumber* _additionalAmount;
	BOOL _subtractAdditionalAmountFromCurrentAmount;
	BOOL _showSpinner;
	NSNumberFormatter* _currentAmountFormatter;
	UILabel* _label;
	UIActivityIndicatorView* _spinner;
	UITapGestureRecognizer* _tapRecognizer;
	BOOL _amountIsWithdrawal;
	NSString* _promptText;
	NSString* _updatedBalancePromptText;
	NSString* _maxLoadAmountText;
	NSString* _currencyCode;
	NSDecimalNumber* _cardBalance;
	NSDecimalNumber* _maxBalance;
	NSDecimalNumber* _minBalance;
	NSDecimalNumber* _maxLoadAmount;
	NSDecimalNumber* _minLoadAmount;
	id<PKEnterValueNewBalanceViewDelegate> _delegate;

}

@property (nonatomic,copy) NSString * promptText;                                                 //@synthesize promptText=_promptText - In the implementation block
@property (nonatomic,copy) NSString * updatedBalancePromptText;                                   //@synthesize updatedBalancePromptText=_updatedBalancePromptText - In the implementation block
@property (nonatomic,copy) NSString * maxLoadAmountText;                                          //@synthesize maxLoadAmountText=_maxLoadAmountText - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                               //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * cardBalance;                                         //@synthesize cardBalance=_cardBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxBalance;                                          //@synthesize maxBalance=_maxBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minBalance;                                          //@synthesize minBalance=_minBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxLoadAmount;                                       //@synthesize maxLoadAmount=_maxLoadAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minLoadAmount;                                       //@synthesize minLoadAmount=_minLoadAmount - In the implementation block
@property (assign,nonatomic,__weak) id<PKEnterValueNewBalanceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL amountIsWithdrawal;                                             //@synthesize amountIsWithdrawal=_amountIsWithdrawal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)currencyCode;
-(void)subtractAmountFromBalance:(id)arg1 ;
-(id)init;
-(NSDecimalNumber *)minBalance;
-(void)_updateAdditionalAmount:(id)arg1 subtractAdditionalAmountFromCurrentAmount:(BOOL)arg2 ;
-(void)_updateBalanceText;
-(id)_minimalFormattedStringForAmount:(id)arg1 ;
-(NSString *)promptText;
-(id)_textForPrompt:(id)arg1 amount:(id)arg2 ;
-(NSString *)maxLoadAmountText;
-(NSString *)updatedBalancePromptText;
-(void)currentBalanceTapRecognized;
-(BOOL)amountIsWithdrawal;
-(id<PKEnterValueNewBalanceViewDelegate>)delegate;
-(NSDecimalNumber *)maxBalance;
-(void)setMinBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxBalance:(NSDecimalNumber *)arg1 ;
-(void)setMinLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaxLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setCardBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)cardBalance;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(void)addAmountToBalance:(id)arg1 ;
-(void)setDelegate:(id<PKEnterValueNewBalanceViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_addSubviews;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCurrencyCode:(id)arg1 ;
-(void)setPromptText:(NSString *)arg1 ;
-(void)setUpdatedBalancePromptText:(NSString *)arg1 ;
-(void)setMaxLoadAmountText:(NSString *)arg1 ;
-(void)setAmountIsWithdrawal:(BOOL)arg1 ;
-(void)showSpinner:(BOOL)arg1 ;
-(void)_createAmountFormatter;
@end

