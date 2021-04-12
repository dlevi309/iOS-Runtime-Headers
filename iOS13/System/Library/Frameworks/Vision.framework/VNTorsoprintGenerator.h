/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNTorsoprintGenerator : VNDetector {

	void* _mEspressoContext;
	void* _mEspressoPlan;
	SCD_Struct_VN43* _mEspressoNetwork;

}
+(id)configurationOptionKeysForDetectorKey;
+(CGSize)_torsoprintInputImageSizeForFaceOrientation:(int)arg1 ;
+(CGSize)_torsoprintDescriptorSize;
+(float)_minimumTorsoInsideInputImageThreshold;
+(float)_magnifiedBBoxScaleFactor;
-(void)dealloc;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)_calculateTorsoBBoxFromFaceBBox:(CGRect)arg1 insideImageWithSize:(CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(CGRect*)arg4 error:(id*)arg5 ;
@end

