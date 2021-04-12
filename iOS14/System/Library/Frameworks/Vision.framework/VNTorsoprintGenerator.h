/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNTorsoprintGenerator : VNEspressoModelFileBasedDetector
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(CGSize)_torsoprintDescriptorSize;
+(CGSize)_torsoprintInputImageSizeForFaceOrientation:(int)arg1 ;
+(float)_minimumTorsoInsideInputImageThreshold;
+(float)_magnifiedBBoxScaleFactor;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)_runTorsoprintModelOnImageBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)_calculateTorsoBBoxFromFaceBBox:(CGRect)arg1 insideImageWithSize:(CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(CGRect*)arg4 error:(id*)arg5 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

