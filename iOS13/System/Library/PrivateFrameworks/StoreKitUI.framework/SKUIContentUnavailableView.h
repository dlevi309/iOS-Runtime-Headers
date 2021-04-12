/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIControl, SKUIButtonViewElement, SKUIImageView, SKUIImageViewElement, SKUIAttributedStringView, NSString;

@interface SKUIContentUnavailableView : SKUIViewReuseView <SKUIViewElementView> {

	UIControl* _button;
	SKUIButtonViewElement* _buttonElement;
	UIEdgeInsets _contentInset;
	SKUIImageView* _imageView;
	SKUIImageViewElement* _imageElement;
	SKUIAttributedStringView* _messageView;
	SKUIAttributedStringView* _titleView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringWithTitleLabel:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringWithMessageLabel:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringWithButton:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(double)_firstBaselineOffsetForView:(id)arg1 ;
-(double)_baselineOffsetForView:(id)arg1 ;
@end

