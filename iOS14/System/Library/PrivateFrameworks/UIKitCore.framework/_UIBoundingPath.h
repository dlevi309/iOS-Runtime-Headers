/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UICoordinateSpace;
@interface _UIBoundingPath : NSObject <NSSecureCoding> {

	id<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) BOOL isNonRectangular; 
+(BOOL)supportsSecureCoding;
-(id)debugQuickLookObject;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingRect:(CGRect)arg2 withSize:(double)arg3 minimumPadding:(double)arg4 ;
-(CGRect)_largestInscribedRectInBoundingRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
-(id)_imageRepresentation;
-(id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4 ;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)_inscribedRectInBoundingRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 ;
-(BOOL)isNonRectangular;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingRect:(CGRect)arg2 withSize:(CGSize)arg3 minimumPadding:(double)arg4 ;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(BOOL)validateForCoordinateSpace;
@end

