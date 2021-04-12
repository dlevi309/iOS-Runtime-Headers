/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface TeaUI.ImageView : UIView {

	 imageView;
	 identifier;
	 _backgroundColor;

}

@property (assign,nonatomic) BOOL clipsToBounds; 
@property (assign,nonatomic) long long contentMode; 
@property (assign,nonatomic) BOOL accessibilityIgnoresInvertColors; 
@property (retain,nonatomic) UIColor * backgroundColor; 
+(Class)layerClass;
-(void)setAccessibilityIgnoresInvertColors:(BOOL)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)clipsToBounds;
-(long long)contentMode;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

