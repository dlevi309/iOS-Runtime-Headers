/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView;

@interface SKUIDeveloperInfoLineItemView : UIView {

	UIEdgeInsets _contentInset;
	UILabel* _labelLabel;
	UIView* _separatorView;
	UILabel* _valueLabel;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

