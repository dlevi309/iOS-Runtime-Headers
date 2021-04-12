/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVFace, PVImage;

@interface VCPFaceCropSourceDescriptor : NSObject <NSCopying> {

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

