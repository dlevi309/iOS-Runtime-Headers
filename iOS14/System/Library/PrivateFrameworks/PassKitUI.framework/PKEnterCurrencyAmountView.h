/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PKEnterCurrencyAmountViewDelegate;
@class UIView, UIColor, UITextField, NSString, UIFont, NSNumber, UILabel, PKNumberPadInputView, NSDecimalNumberHandler, NSNumberFormatter, NSDecimalNumber;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate> {

	UIView* _internalInputAccessoryView;
	UIColor* _keyboardColor;
	BOOL _showsDecimalPointButton;
	BOOL _enabled;
	BOOL _ignoreIntegralNumber;
	BOOL _clearAmountOnFirstKeyboardInput;
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
@property (nonatomic,readonly) CGSize defaultKeyboardSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultTextColor;
-(UIView *)inputAccessoryView;
-(BOOL)enabled;
-(void)setLabelScaleFactor:(double)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)dismissKeyboard;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(BOOL)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(BOOL)arg4 ;
-(UIFont *)currencySymbolFont;
-(UILabel *)amountLabel;
-(void)setAmountLabel:(UILabel *)arg1 ;
-(PKNumberPadInputView *)numberPad;
-(void)setNumberPad:(PKNumberPadInputView *)arg1 ;
-(NSDecimalNumberHandler *)roundingBehavior;
-(void)setRoundingBehavior:(NSDecimalNumberHandler *)arg1 ;
-(NSNumberFormatter *)amountFormatter;
-(void)setAmountFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)currencySymbolAmountFormatter;
-(void)setCurrencySymbolAmountFormatter:(NSNumberFormatter *)arg1 ;
-(void)setAmountString:(NSString *)arg1 ;
-(BOOL)isFirstKeyboardInput;
-(void)setIsFirstKeyboardInput:(BOOL)arg1 ;
-(CGSize)lastLayoutBoundsSize;
-(void)setLastLayoutBoundsSize:(CGSize)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id<PKEnterCurrencyAmountViewDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)showsDecimalPointButton;
-(void)setCurrentAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)currency;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setDelegate:(id<PKEnterCurrencyAmountViewDelegate>)arg1 ;
-(NSNumber *)kerning;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)labelScaleFactor;
-(void)setKeyboardColor:(UIColor *)arg1 ;
-(void)setIgnoreIntegralNumber:(BOOL)arg1 ;
-(void)setClearAmountOnFirstKeyboardInput:(BOOL)arg1 ;
-(id)initWithCurrency:(id)arg1 amount:(id)arg2 ;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(void)setAmountFont:(UIFont *)arg1 ;
-(void)setCurrencySymbolFont:(UIFont *)arg1 ;
-(void)_addSuperscriptToAttributedString:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_addSuperscriptToAttributedString:(id)arg1 formattedCurrencyAmount:(id)arg2 currencyAmountWithoutSymbols:(id)arg3 ;
-(void)_updateContent;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(UITextField *)amountTextField;
-(UIFont *)amountFont;
-(void)setKerning:(NSNumber *)arg1 ;
-(CGSize)defaultKeyboardSize;
-(NSString *)amountString;
-(void)setCurrency:(NSString *)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(NSDecimalNumber *)currentAmount;
-(void)showKeyboard;
-(void)_createSubviews;
-(void)_createAmountFormatter;
-(id)_formatAmount:(id)arg1 minimumFractionDigits:(unsigned long long)arg2 ;
-(id)_decimalNumberFromString:(id)arg1 ;
-(unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2 ;
-(UIColor *)keyboardColor;
-(BOOL)ignoreIntegralNumber;
-(BOOL)clearAmountOnFirstKeyboardInput;
@end

