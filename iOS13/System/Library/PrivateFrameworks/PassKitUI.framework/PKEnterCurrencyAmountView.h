/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PKEnterCurrencyAmountViewDelegate;
@class UIView, UITextField, NSString, UIColor, UIFont, NSNumber, UILabel, PKNumberPadInputView, NSDecimalNumberHandler, NSNumberFormatter, NSDecimalNumber;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate> {

	UIView* _internalInputAccessoryView;
	BOOL _showsDecimalPointButton;
	BOOL _enabled;
	BOOL _ignoreIntegralNumber;
	BOOL _clearAmountOnFirstKeyboardInput;
	BOOL _showDecimalPointButton;
	BOOL _isFirstKeyboardInput;
	UITextField* _amountTextField;
	NSString* _currency;
	UIColor* _textColor;
	UIFont* _amountFont;
	UIFont* _currencySymbolFont;
	NSNumber* _kerning;
	id<PKEnterCurrencyAmountViewDelegate> _delegate;
	UILabel* _amountLabel;
	PKNumberPadInputView* _numberPad;
	NSDecimalNumberHandler* _roundingBehavior;
	NSNumberFormatter* _amountFormatter;
	NSNumberFormatter* _currencySymbolAmountFormatter;
	NSString* _amountString;
	double _labelScaleFactor;
	CGSize _lastLayoutBoundsSize;

}

@property (nonatomic,retain) UILabel * amountLabel;                                              //@synthesize amountLabel=_amountLabel - In the implementation block
@property (nonatomic,retain) PKNumberPadInputView * numberPad;                                   //@synthesize numberPad=_numberPad - In the implementation block
@property (nonatomic,retain) NSDecimalNumberHandler * roundingBehavior;                          //@synthesize roundingBehavior=_roundingBehavior - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * amountFormatter;                                //@synthesize amountFormatter=_amountFormatter - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * currencySymbolAmountFormatter;                  //@synthesize currencySymbolAmountFormatter=_currencySymbolAmountFormatter - In the implementation block
@property (nonatomic,copy) NSString * amountString;                                              //@synthesize amountString=_amountString - In the implementation block
@property (assign,nonatomic) BOOL showDecimalPointButton;                                        //@synthesize showDecimalPointButton=_showDecimalPointButton - In the implementation block
@property (assign,nonatomic) BOOL isFirstKeyboardInput;                                          //@synthesize isFirstKeyboardInput=_isFirstKeyboardInput - In the implementation block
@property (assign,nonatomic) CGSize lastLayoutBoundsSize;                                        //@synthesize lastLayoutBoundsSize=_lastLayoutBoundsSize - In the implementation block
@property (assign,nonatomic) double labelScaleFactor;                                            //@synthesize labelScaleFactor=_labelScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL showsDecimalPointButton;                                       //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL ignoreIntegralNumber;                                          //@synthesize ignoreIntegralNumber=_ignoreIntegralNumber - In the implementation block
@property (assign,nonatomic) BOOL clearAmountOnFirstKeyboardInput;                               //@synthesize clearAmountOnFirstKeyboardInput=_clearAmountOnFirstKeyboardInput - In the implementation block
@property (nonatomic,readonly) UITextField * amountTextField;                                    //@synthesize amountTextField=_amountTextField - In the implementation block
@property (nonatomic,retain) NSString * currency;                                                //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * currentAmount; 
@property (nonatomic,copy) UIColor * keyboardColor; 
@property (nonatomic,copy) UIColor * textColor;                                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIFont * amountFont;                                                  //@synthesize amountFont=_amountFont - In the implementation block
@property (nonatomic,copy) UIFont * currencySymbolFont;                                          //@synthesize currencySymbolFont=_currencySymbolFont - In the implementation block
@property (nonatomic,copy) NSNumber * kerning;                                                   //@synthesize kerning=_kerning - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView; 
@property (assign,nonatomic,__weak) id<PKEnterCurrencyAmountViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultTextColor;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<PKEnterCurrencyAmountViewDelegate>)delegate;
-(void)setDelegate:(id<PKEnterCurrencyAmountViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(UIColor *)textColor;
-(void)dismissKeyboard;
-(NSNumber *)kerning;
-(void)setKerning:(NSNumber *)arg1 ;
-(void)showKeyboard;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_createSubviews;
-(void)setLabelScaleFactor:(double)arg1 ;
-(double)labelScaleFactor;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(void)setNumberPad:(PKNumberPadInputView *)arg1 ;
-(PKNumberPadInputView *)numberPad;
-(void)_updateContent;
-(id)initWithCurrency:(id)arg1 amount:(id)arg2 ;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(void)setAmountFont:(UIFont *)arg1 ;
-(void)setCurrencySymbolFont:(UIFont *)arg1 ;
-(void)setCurrentAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)currentAmount;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(UITextField *)amountTextField;
-(void)_addSuperscriptToAttributedString:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_addSuperscriptToAttributedString:(id)arg1 formattedCurrencyAmount:(id)arg2 currencyAmountWithoutSymbols:(id)arg3 ;
-(void)setKeyboardColor:(UIColor *)arg1 ;
-(void)setIgnoreIntegralNumber:(BOOL)arg1 ;
-(void)setClearAmountOnFirstKeyboardInput:(BOOL)arg1 ;
-(BOOL)showsDecimalPointButton;
-(void)_createAmountFormatter;
-(id)_formatAmount:(id)arg1 minimumFractionDigits:(unsigned long long)arg2 ;
-(id)_decimalNumberFromString:(id)arg1 ;
-(unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2 ;
-(id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(BOOL)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(BOOL)arg4 ;
-(UIFont *)amountFont;
-(NSString *)amountString;
-(UIColor *)keyboardColor;
-(BOOL)ignoreIntegralNumber;
-(BOOL)clearAmountOnFirstKeyboardInput;
-(UIFont *)currencySymbolFont;
-(UILabel *)amountLabel;
-(void)setAmountLabel:(UILabel *)arg1 ;
-(NSDecimalNumberHandler *)roundingBehavior;
-(void)setRoundingBehavior:(NSDecimalNumberHandler *)arg1 ;
-(NSNumberFormatter *)amountFormatter;
-(void)setAmountFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)currencySymbolAmountFormatter;
-(void)setCurrencySymbolAmountFormatter:(NSNumberFormatter *)arg1 ;
-(void)setAmountString:(NSString *)arg1 ;
-(BOOL)showDecimalPointButton;
-(void)setShowDecimalPointButton:(BOOL)arg1 ;
-(BOOL)isFirstKeyboardInput;
-(void)setIsFirstKeyboardInput:(BOOL)arg1 ;
-(CGSize)lastLayoutBoundsSize;
-(void)setLastLayoutBoundsSize:(CGSize)arg1 ;
@end

