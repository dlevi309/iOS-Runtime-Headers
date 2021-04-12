/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageTransform.h>

@protocol IPAQuadGeometry;
@interface IPAPerspectiveTransform : IPAImageTransform {

	Matrix4d _projectionTransform;
	Matrix4d _viewingTransform;
	id<IPAQuadGeometry> _intrinsicGeometry;
	BOOL _isInverse;

}
-(id)inverseTransform;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const Matrix4d*)arg3 viewingTransform:(const Matrix4d*)arg4 ;
-(id)intrinsicGeometry;
@end

