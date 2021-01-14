/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SKUILinkButton : UIButton {

	long long _arrowStyle;

}

@property (nonatomic,readonly) long long arrowStyle;              //@synthesize arrowStyle=_arrowStyle - In the implementation block
+(id)buttonWithArrowStyle:(long long)arg1 ;
-(void)tintColorDidChange;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithArrowStyle:(long long)arg1 ;
-(void)_reloadIcons;
-(double)_linkImagePaddingLeft;
-(long long)arrowStyle;
@end

