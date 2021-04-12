/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageSpecifier.h>

@class CIImage;

@interface _VNCIImageSpecifier : VNImageSpecifier {

	CIImage* _ciImage;

}
-(id)description;
-(id)initWithCIImage:(id)arg1 ;
-(id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)ciImage;
@end

