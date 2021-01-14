/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector
+(id)calculateSaliencyBoundingBoxesForDetectorType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 configurationOptions:(id)arg3 requestRevision:(unsigned long long)arg4 regionOfInterest:(CGRect)arg5 warningRecorder:(id)arg6 error:(id*)arg7 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
-(id)_observationsForOneComponent32FloatPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 regionOfInterest:(CGRect)arg3 error:(id*)arg4 ;
-(CVBufferRef)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

