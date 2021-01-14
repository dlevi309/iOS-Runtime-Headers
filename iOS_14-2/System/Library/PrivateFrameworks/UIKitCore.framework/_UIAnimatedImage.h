/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImage.h>

@class NSArray;

@interface _UIAnimatedImage : UIImage {

	NSArray* _images;
	double _duration;

}
+(BOOL)supportsSecureCoding;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9 ;
-(CGSize)_sizeWithHairlineThickening:(BOOL)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)_isResizable;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(long long)arg2 ;
-(long long)resizingMode;
-(CGRect)_contentStretchInPixels;
-(unsigned long long)hash;
-(CGRect)_contentRectInPixels;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImages:(id)arg1 duration:(double)arg2 ;
-(void)_flipImageOrientationHorizontally;
-(id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 ;
-(id)images;
-(id)_initWithOtherImage:(id)arg1 ;
-(BOOL)_isPDFVector;
-(BOOL)_isSVGVector;
-(double)duration;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(void)_setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)capInsets;
@end

