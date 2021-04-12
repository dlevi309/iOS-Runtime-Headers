/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class CIContext;

@interface VNContoursDetector : VNDetector {

	CIContext* _ciContext;
	CGColorSpaceRef _colorSpace;

}
+(id)configurationOptionKeysForDetectorKey;
-(id)_highContastMonoCIImageFromImageBuffer:(id)arg1 cropRect:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 ;
-(StandAloneBitStringRef)_runAutoTraceOnATBitmap:(const ATBitmap*)arg1 darkOnLight:(BOOL)arg2 inHierarchy:(BOOL)arg3 error:(id*)arg4 ;
-(StandAloneBitStringRef)_runAutoTraceOnImage:(id)arg1 darkOnLight:(BOOL)arg2 inHierarchy:(BOOL)arg3 error:(id*)arg4 ;
-(StandAloneBitStringRef)_runAutoTraceOnCVPixelBuffer:(CVBufferRef)arg1 darkOnLight:(BOOL)arg2 inHierarchy:(BOOL)arg3 error:(id*)arg4 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

