/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(id)images;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)_isResizable;
-(UIEdgeInsets)capInsets;
-(id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 ;
-(CGSize)_sizeWithHairlineThickening:(BOOL)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(long long)arg2 ;
-(void)_setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(id)_initWithOtherImage:(id)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(CGRect)_contentStretchInPixels;
-(CGRect)_contentRectInPixels;
-(long long)resizingMode;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)initWithImages:(id)arg1 duration:(double)arg2 ;
-(void)_flipImageOrientationHorizontally;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(BOOL)_isPDFVector;
-(BOOL)_isSVGVector;
@end

