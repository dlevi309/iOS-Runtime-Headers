/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVFace, PVImage;

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying> {

	PVFace* _face;
	PVImage* _image;

}
+(id)descriptorForFace:(id)arg1 image:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)face;
-(id)image;
-(id)initWithFace:(id)arg1 image:(id)arg2 ;
@end

