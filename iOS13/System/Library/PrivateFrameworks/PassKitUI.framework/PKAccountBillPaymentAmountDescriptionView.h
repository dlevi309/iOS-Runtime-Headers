/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKNumberPadSuggestionsViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>

@protocol PKAccountBillPaymentAmountDescriptionViewDelegate;
@class UILabel, UITextView, PKNumberPadSuggestionsView, NSDecimalNumber, NSString, PKBillPaymentSuggestedAmountList, PKAccount, PKAccountServiceAccountResolutionCofiguration, PKAccountBillPaymentAmountContainerView;

@interface PKAccountBillPaymentAmountDescriptionView : UIView <PKNumberPadSuggestionsViewDelegate, UITextViewDelegate, PKEnterCurrencyAmountViewDelegate> {

	UILabel* _suggestedAmountTitleLabel;
	UITextView* _suggestedAmountDescriptionView;
	PKNumberPadSuggestionsView* _suggestionView;
	NSDecimalNumber* _enteredAmount;
	NSString* _learnMoreString;
	PKBillPaymentSuggestedAmountList* _suggestionList;
	PKAccount* _account;
	PKAccountServiceAccountResolutionCofiguration* _configuration;
	BOOL _showDescriptionLabels;
	BOOL _showDescriptionSubtitle;
	id<PKAccountBillPaymentAmountDescriptionViewDelegate> _delegate;
	PKAccountBillPaymentAmountContainerView* _amountContainerView;
	NSString* _titleText;
	NSString* _descriptionText;
	NSDecimalNumber* _minimumAmount;
	NSDecimalNumber* _maximumAmount;

}

@property (assign,nonatomic) id<PKAccountBillPaymentAmountDescriptionViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKAccountBillPaymentAmountContainerView * amountContainerView;              //@synthesize amountContainerView=_amountContainerView - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount; 
@property (nonatomic,copy) NSDecimalNumber * minimumAmount;                                                //@synthesize minimumAmount=_minimumAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumAmount;                                                //@synthesize maximumAmount=_maximumAmount - In the implementation block
@property (assign,nonatomic) BOOL showAmount; 
@property (assign,nonatomic) BOOL showDescriptionLabels;                                                   //@synthesize showDescriptionLabels=_showDescriptionLabels - In the implementation block
@property (assign,nonatomic) BOOL showDescriptionSubtitle;                                                 //@synthesize showDescriptionSubtitle=_showDescriptionSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKAccountBillPaymentAmountDescriptionViewDelegate>)delegate;
-(void)setDelegate:(id<PKAccountBillPaymentAmountDescriptionViewDelegate>)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)dismissKeyboard;
-(void)setTitleText:(NSString *)arg1 ;
-(void)showKeyboard;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSDecimalNumber *)maximumAmount;
-(NSDecimalNumber *)minimumAmount;
-(void)setMinimumAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaximumAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithSuggestedAmountList:(id)arg1 account:(id)arg2 configuration:(id)arg3 ;
-(void)setShowAmount:(BOOL)arg1 ;
-(void)setShowDescriptionLabels:(BOOL)arg1 ;
-(void)setShowDescriptionSubtitle:(BOOL)arg1 ;
-(BOOL)showAmount;
-(id)_keypadSuggestions;
-(void)_updateEnteredAmount:(id)arg1 ;
-(BOOL)_shouldShakeWithNewAmount:(id)arg1 ;
-(id)_sugestedAmountDescriptionAttributedString;
-(void)_updateDescriptionAlpha;
-(void)_enteredAmountDidChangeTo:(id)arg1 ;
-(BOOL)_isEnteredAmountValid;
-(void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(PKAccountBillPaymentAmountContainerView *)amountContainerView;
-(BOOL)showDescriptionLabels;
-(BOOL)showDescriptionSubtitle;
@end

