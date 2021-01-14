/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>
#import <UIKit/UIKeyInput.h>

@class UIColor, UIFont, NSMutableArray, NSMutableString, SKUIViewElement, NSString, UITextInputPasswordRules;

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput> {

	UIColor* _boxBackgroundColor;
	UIColor* _boxBorderColor;
	UIFont* _font;
	long long _keyboardType;
	NSMutableArray* _labels;
	BOOL _needsLabelReload;
	long long _numberOfCharacters;
	BOOL _secureTextEntry;
	NSMutableString* _text;
	UIColor* _textColor;
	SKUIViewElement* _viewElement;

}

@property (nonatomic,copy) UIColor * boxBackgroundColor;                                 //@synthesize boxBackgroundColor=_boxBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * boxBorderColor;                                     //@synthesize boxBorderColor=_boxBorderColor - In the implementation block
@property (nonatomic,copy) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long numberOfCharacters;                               //@synthesize numberOfCharacters=_numberOfCharacters - In the implementation block
@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(double)_defaultBoxSizeForFont:(id)arg1 ;
-(BOOL)hasText;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setSpellCheckingType:(long long)arg1 ;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(long long)spellCheckingType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)tintColorDidChange;
-(UIColor *)textColor;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(long long)autocorrectionType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setTextColor:(UIColor *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(UIFont *)font;
-(long long)numberOfCharacters;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_reloadLabelSubviews;
-(void)_setNeedsReloadLayout;
-(void)setBoxBackgroundColor:(UIColor *)arg1 ;
-(void)setBoxBorderColor:(UIColor *)arg1 ;
-(void)setNumberOfCharacters:(long long)arg1 ;
-(void)_sendValueChangeEvents;
-(UIColor *)boxBackgroundColor;
-(UIColor *)boxBorderColor;
@end

