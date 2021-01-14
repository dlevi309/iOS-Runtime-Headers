/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@class ShotflowDetectorANODv3, VNFaceBBoxAligner;

@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {

	ShotflowDetectorANODv3* _mMultiHeadedANFDDetector;
	VNFaceBBoxAligner* _faceBBoxAligner;

}
+(id)detectedObjectClassToRequestClass;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)requestInfoForRequest:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)detectedObjectRequestClassToRequestInfo;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
+(float)faceDetectorChunkAspectRatio;
+(Class)anfdMultiDetectorClassToProcessRequest:(id)arg1 ;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(id)knownAnimalIdentifiers;
+(void)_printDebugInfo:(id)arg1 detectedObjectsRaw:(id)arg2 faceDetectorBGRAImage:(CVBufferRef)arg3 tempImage:(vImage_Buffer*)arg4 ;
+(id)recognizedAnimalObjectClassToAnimalName;
-(BOOL)processDetectedObject:(id)arg1 requestRevision:(unsigned long long)arg2 objectBoundingBox:(CGRect)arg3 imageBuffer:(id)arg4 warningRecorder:(id)arg5 detectedObjectResults:(id)arg6 error:(id*)arg7 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(id)_alignFace:(id)arg1 imageBuffer:(id)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(void)processRecognizedObjectWithIdentifier:(id)arg1 requestRevision:(unsigned long long)arg2 objectBoundingBox:(CGRect)arg3 objectConfidence:(float)arg4 detectedObjectResults:(id)arg5 ;
@end

