/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageTransform.h>

@interface IPAAffineImageTransform : IPAImageTransform {

	BOOL _canAlignToPixelsExactly;
	Matrix4d _matrix;

}
-(id)description;
-(Matrix4d)matrix;
-(id)inverseTransform;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const Matrix4d*)arg3 canAlignToPixelsExactly:(BOOL)arg4 ;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
@end

