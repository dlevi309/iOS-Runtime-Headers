/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNFaceprintGenerator : VNDetector {

	shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>* m_FaceDescriptorImpl;
	shared_ptr<vision::mod::FaceFrontalizer>* m_FaceFrontalizerImpl;
	shared_ptr<vision::mod::ImageDescriptorAugmenterFlip>* m_DescriptorAugmenter;
	shared_ptr<unsigned char>* m_FaceFrontalizerWorkingBuffer;
	vImage_Buffer* m_FaceFrontalizerImageBuffer;
	BOOL _useLowPriorityMode;
	unsigned long long _metalContextPriority;
	unsigned long long _length;

}

@property (nonatomic,readonly) unsigned long long length;                            //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) BOOL useLowPriorityMode;                              //@synthesize useLowPriorityMode=_useLowPriorityMode - In the implementation block
@property (nonatomic,readonly) unsigned long long metalContextPriority; 
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(/*function pointer*/void*)faceDescriptorCreator;
+(CGRect)faceBoundingBox:(id)arg1 ;
+(CVBufferRef)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(CGRect)arg2 error:(id*)arg3 ;
+(1)frontalizer;
+(/*function pointer*/void*)getFaceJunkClassifier;
+(BOOL)shouldDumpDebugIntermediates;
-(unsigned long long)length;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(unsigned long long)metalContextPriority;
-(BOOL)isFaceprinterCompatibleWithFaceprinterCreatedWithOptions:(id)arg1 ;
-(void)printDebugInfoFor:(CVBufferRef)arg1 imageBuffer:(id)arg2 originalImageLumaCrop:(vImage_Buffer*)arg3 faceBBoxInLumaCropCoordinates:(CGRect)arg4 magnifiedBBoxInLumaCropCoordinates:(Geometry2D_rect2D_)arg5 ;
-(BOOL)useLowPriorityMode;
@end

