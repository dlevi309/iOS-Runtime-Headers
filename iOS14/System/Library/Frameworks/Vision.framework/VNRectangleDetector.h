/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNRectangleDetector : VNDetector {

	float* _perMeshPtr;

}
+(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
-(BOOL)needsMetalContext;
-(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

