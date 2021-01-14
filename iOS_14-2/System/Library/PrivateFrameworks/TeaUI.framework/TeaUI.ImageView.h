/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface TeaUI.ImageView : UIView {

	 imageView;
	 loadingIdentifier;
	 _backgroundColor;

}

@property (assign,nonatomic) BOOL clipsToBounds; 
@property (assign,nonatomic) long long contentMode; 
@property (assign,nonatomic) BOOL accessibilityIgnoresInvertColors; 
@property (retain,nonatomic) UIColor * backgroundColor; 
+(Class)layerClass;
-(long long)contentMode;
-(void)setAccessibilityIgnoresInvertColors:(BOOL)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)layoutSubviews;
-(BOOL)clipsToBounds;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithCoder:(id)arg1 ;
@end

