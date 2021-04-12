/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SKUISeparatorView : UIView {

	UIColor* _color1;
	UIColor* _color2;
	long long _separatorStyle;

}

@property (nonatomic,copy) UIColor * color1;                        //@synthesize color1=_color1 - In the implementation block
@property (nonatomic,copy) UIColor * color2;                        //@synthesize color2=_color2 - In the implementation block
@property (assign,nonatomic) long long separatorStyle;              //@synthesize separatorStyle=_separatorStyle - In the implementation block
-(UIColor *)color1;
-(void)setColor1:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setColor2:(UIColor *)arg1 ;
-(UIColor *)color2;
@end

