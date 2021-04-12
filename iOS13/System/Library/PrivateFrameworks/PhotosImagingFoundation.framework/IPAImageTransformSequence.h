/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/IPAImageTransform.h>

@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform> {

	NSArray* _transforms;

}
-(id)description;
-(id)inverseTransform;
-(BOOL)canAlignToPixelsExactly;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(CGPoint)mapPoint:(CGPoint)arg1 ;
-(id)initWithTransforms:(id)arg1 ;
@end

