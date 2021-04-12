/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface RegWarp : NSObject {

	ImageRegistrationCtx_sRef _imageRegCtx;

}
-(id)init;
-(void)dealloc;
-(int)runIterativeWithRefImage:(CVBufferRef)arg1 regionOfInterest:(CGRect)arg2 ;
-(int)runIterativeWithNonRefImage:(CVBufferRef)arg1 outputTransform:(Mat3x3f*)arg2 ;
-(int)runWithRefImage:(CVBufferRef)arg1 nonRefImages:(_CVBuffer*)arg2 numNonReferenceImages:(unsigned char)arg3 outputTransforms:(Mat3x3f*)arg4 regionOfInterest:(CGRect)arg5 ;
@end

