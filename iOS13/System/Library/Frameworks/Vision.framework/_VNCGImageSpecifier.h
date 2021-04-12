/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageSpecifier.h>

@interface _VNCGImageSpecifier : VNImageSpecifier {

	CGImageRef _cgImage;

}
-(void)dealloc;
-(id)description;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2 ;
-(CGImageRef)cgImage;
@end

