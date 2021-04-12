/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelClassifier.h>

@interface VNSmartCamClassifier : VNEspressoModelClassifier
+(shared_ptr<vision::mod::ImageClassifierAbstract>*)createClassifierWithDescriptor:(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)arg1 classifierAbsolutePath:(const char*)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char*)arg5 options:(Options)arg6 ;
+(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)createDescriprorProcessorWithModelPath:(const char*)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(Options)arg5 ;
+(id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1 ;
+(Class)espressoModelImageprintClass;
+(id)returnAllResultsOptionKey;
+(id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2 ;
+(void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
@end

