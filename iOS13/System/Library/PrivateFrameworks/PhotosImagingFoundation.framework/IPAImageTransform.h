/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/IPAImageTransform.h>

@protocol IPAImageTransform
@required
-(id)inverseTransform;
-(BOOL)canAlignToPixelsExactly;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(CGPoint*)mapPoint:(CGPoint)arg1;

@end


@protocol IPAImageGeometry;
@interface IPAImageTransform : NSObject <IPAImageTransform> {

	id<IPAImageGeometry> _inputGeometry;
	id<IPAImageGeometry> _intrinsicGeometry;

}
+(id)identityTransformForGeometry:(id)arg1 ;
+(id)compositeTransforms:(id)arg1 ;
-(id)init;
-(id)description;
-(id)inverseTransform;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(CGPoint)mapPoint:(CGPoint)arg1 ;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 ;
@end

