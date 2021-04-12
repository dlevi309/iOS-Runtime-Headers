/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UICoordinateSpace;
@class NSObject;

@interface PXNonuniformTransform : NSObject <NSCopying> {

	CGRect _sourceRect;
	CGRect _targetRect;
	NSObject*<UICoordinateSpace> _coordinateSpace;
	double _minimumScale;
	double _maximumScale;

}
+(id)identityTransform;
+(id)horizontallyDominantTransformWithSourceRect:(CGRect)arg1 targetRect:(CGRect)arg2 coordinateSpace:(id)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 ;
-(id)init;
-(CGAffineTransform)affineTransformForRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(double)_adjustedZoomScale:(double)arg1 ;
-(id)inverseTransform;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

