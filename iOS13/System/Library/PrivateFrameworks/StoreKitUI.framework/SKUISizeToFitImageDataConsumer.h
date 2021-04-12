/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer {

	CGSize _constraintSize;
	BOOL _custom;
	UIColor* _gradientEndColor;
	double _gradientHeight;

}

@property (assign,nonatomic) CGSize constraintSize;                   //@synthesize constraintSize=_constraintSize - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;              //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (assign,nonatomic) double gradientHeight;                   //@synthesize gradientHeight=_gradientHeight - In the implementation block
+(id)consumerWithConstraintSize:(CGSize)arg1 ;
+(id)consumerWithConstraintSize2:(CGSize)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(void)setGradientHeight:(double)arg1 ;
-(void)_drawGradientWithContext:(CGContextRef)arg1 imageRect:(CGRect)arg2 ;
-(CGSize)constraintSize;
-(void)setConstraintSize:(CGSize)arg1 ;
-(UIColor *)gradientEndColor;
-(double)gradientHeight;
@end

