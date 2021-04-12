/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)image;
-(id)description;
-(id)face;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFace:(id)arg1 image:(id)arg2 ;
@end

