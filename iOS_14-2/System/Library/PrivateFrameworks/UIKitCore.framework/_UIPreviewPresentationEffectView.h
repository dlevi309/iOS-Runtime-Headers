/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIPreviewPresentationEffectView : UIView {

	BOOL _shouldRasterizeForTransition;
	UIColor* _shadowColor;

}

@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double shadowAlpha; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,copy) UIColor * shadowColor;                            //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(void)setBlurRadius:(double)arg1 ;
-(double)shadowAlpha;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)shadowRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(UIColor *)shadowColor;
-(CGSize)shadowOffset;
-(double)blurRadius;
-(double)cornerRadius;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
-(void)setCornerRadius:(double)arg1 ;
@end

