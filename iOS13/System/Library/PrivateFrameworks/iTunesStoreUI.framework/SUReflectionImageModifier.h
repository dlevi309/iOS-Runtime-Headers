/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier {

	UIGradient* _gradient;
	double _reflectionHeight;

}

@property (nonatomic,retain) UIGradient * gradient;                //@synthesize gradient=_gradient - In the implementation block
@property (assign,nonatomic) double reflectionHeight;              //@synthesize reflectionHeight=_reflectionHeight - In the implementation block
-(void)dealloc;
-(void)setGradient:(UIGradient *)arg1 ;
-(UIGradient *)gradient;
-(double)reflectionHeight;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)setReflectionHeight:(double)arg1 ;
@end

