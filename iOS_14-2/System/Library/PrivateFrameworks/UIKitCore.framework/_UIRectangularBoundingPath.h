/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBoundingPath.h>

@interface _UIRectangularBoundingPath : _UIBoundingPath {

	CGRect _boundingRect;

}

@property (nonatomic,readonly) CGRect boundingRect;              //@synthesize boundingRect=_boundingRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCoordinateSpace:(id)arg1 ;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
-(id)_imageRepresentation;
-(id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4 ;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(id)description;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(CGRect)boundingRect;
-(BOOL)_validateBoundingRect:(CGRect)arg1 forCoordinateSpace:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isNonRectangular;
-(id)initWithCoordinateSpace:(id)arg1 boundingRect:(CGRect)arg2 ;
-(BOOL)validateForCoordinateSpace;
@end

