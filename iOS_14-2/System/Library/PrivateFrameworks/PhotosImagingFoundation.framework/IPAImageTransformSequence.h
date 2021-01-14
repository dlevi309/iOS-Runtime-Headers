/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTransforms:(id)arg1 ;
-(BOOL)canAlignToPixelsExactly;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(CGPoint)mapPoint:(CGPoint)arg1 ;
@end

