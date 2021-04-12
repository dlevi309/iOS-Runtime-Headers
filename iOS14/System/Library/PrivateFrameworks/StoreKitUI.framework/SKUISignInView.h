/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@protocol SKUISignInViewDelegate;
@class UIColor, SKUIShapeView, NSMutableArray, SKUIViewElement, NSMapTable, NSString;

@interface SKUISignInView : UIView <UITextFieldDelegate, SKUIViewElementView> {

	UIColor* _borderColor;
	SKUIShapeView* _borderView;
	NSMutableArray* _labels;
	NSMutableArray* _textFields;
	SKUIViewElement* _viewElement;
	NSMapTable* _viewFontDescriptors;
	id<SKUISignInViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISignInViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_fontDescriptorWithViewElement:(id)arg1 defaultTextStyle:(id)arg2 bold:(BOOL)arg3 ;
+(id)_labelWithViewElement:(id)arg1 ;
+(id)_textFieldWithViewElement:(id)arg1 ;
+(id)_borderPathWithSize:(CGSize)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUISignInViewDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SKUISignInViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_layoutLabels;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_clearFieldsAndLabels;
-(void)_layoutTextFieldsOffsetX:(double)arg1 ;
-(id)_accountNameText;
-(id)_applePasswordText;
@end

