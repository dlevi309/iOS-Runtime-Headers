/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray;

@interface SKUINavigationBarMenusView : SKUIViewReuseView {

	SEL _buttonAction;
	id _buttonTarget;
	UIEdgeInsets _contentInset;
	NSArray* _menuViewElements;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
+(id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reloadWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(void)setButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end

