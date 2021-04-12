/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class NSSet;

@interface VNEspressoModelClassifier : VNDetector {

	shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>* mDescriptorProcessor;
	shared_ptr<vision::mod::ImageClassifierAbstract>* mClassifier;
	NSSet* _blacklistedIdentifiers;

}
+(shared_ptr<vision::mod::ImageClassifierAbstract>*)createClassifierWithDescriptor:(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)arg1 classifierAbsolutePath:(const char*)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char*)arg5 options:(Options)arg6 ;
+(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)createDescriprorProcessorWithModelPath:(const char*)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(Options)arg5 ;
+(id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1 ;
+(id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2 ;
+(void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2 ;
+(shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>*)createHierarchicalModelForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(void)convertRelationships:(id)arg1 toStdRelationships:(vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > > >*)arg2 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(id)calculateImageDescriptors:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 error:(id*)arg5 ;
-(BOOL)_calculateImageDescriptors:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 descriptorBuffer:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg5 debugIntermediatesDumpPath:(id)arg6 outputDebugDictionary:(id)arg7 error:(id*)arg8 ;
-(id)getLabels;
-(id)blacklistedIdentifiers;
@end

