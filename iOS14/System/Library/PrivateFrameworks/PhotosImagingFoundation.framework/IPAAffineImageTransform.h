/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageTransform.h>

@interface IPAAffineImageTransform : IPAImageTransform {

	BOOL _canAlignToPixelsExactly;
	Matrix4d _matrix;

}
-(Matrix4d)matrix;
-(id)description;
-(id)inverseTransform;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const Matrix4d*)arg3 canAlignToPixelsExactly:(BOOL)arg4 ;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
@end

