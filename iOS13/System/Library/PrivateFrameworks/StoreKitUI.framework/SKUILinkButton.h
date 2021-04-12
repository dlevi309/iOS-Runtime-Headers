/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SKUILinkButton : UIButton {

	long long _arrowStyle;

}

@property (nonatomic,readonly) long long arrowStyle;              //@synthesize arrowStyle=_arrowStyle - In the implementation block
+(id)buttonWithArrowStyle:(long long)arg1 ;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)tintColorDidChange;
-(id)initWithArrowStyle:(long long)arg1 ;
-(void)_reloadIcons;
-(double)_linkImagePaddingLeft;
-(long long)arrowStyle;
@end

