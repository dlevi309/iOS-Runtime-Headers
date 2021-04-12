/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBoundingPath.h>

@class _UIBoundingPathBitmap;

@interface _UIComplexBoundingPath : _UIBoundingPath {

	double _scale;
	long long _orientation;
	_UIBoundingPathBitmap* _bitmap;

}
+(BOOL)supportsSecureCoding;
-(void)setCoordinateSpace:(id)arg1 ;
-(id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4 ;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
-(id)_imageRepresentation;
-(id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4 ;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIIntegralRect)_rectByVerticallyInsettingPortraitPixelRect:(UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(BOOL)arg3 ;
-(CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 inPortaitCorner:(unsigned long long)arg2 fromPortraitPixelRect:(CGRect)arg3 withPortraitPixelCornerRadii:(UIIntegralCornerRadii)arg4 ;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(id)description;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(BOOL)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4 ;
-(id)initWithRectangularCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(CGRect)arg1 portraitAspectRatio:(double)arg2 ;
-(BOOL)isNonRectangular;
-(UIIntegralRect)_rectByHorizontallyInsettingPortraitPixelRect:(UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(BOOL)arg3 ;
-(CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 againstPortraitEdge:(unsigned long long)arg2 fromPortraitPixelRect:(CGRect)arg3 withPortraitPixelCornerRadii:(UIIntegralCornerRadii)arg4 ;
-(BOOL)validateForCoordinateSpace;
@end

