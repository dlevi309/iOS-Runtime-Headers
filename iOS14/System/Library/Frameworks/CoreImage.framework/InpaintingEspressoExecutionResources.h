/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString, NSArray;

@interface InpaintingEspressoExecutionResources : NSObject {

	SCD_Struct_In65* _network;
	void* _plan;
	void* _context;
	NSString* _modelResourceDescriptor;
	NSString* _modelResourceFileName;
	NSString* _configurationName;
	NSArray* _inputBlobNames;
	NSArray* _outputBlobNames;
	int _filterUsageCount;
	int _modelInputPixelFormat;
	int _modelOutputPixelFormat;
	BOOL _membraneModel;

}

@property (readonly) SCD_Struct_In65* network;                        //@synthesize network=_network - In the implementation block
@property (readonly) void* plan;                                      //@synthesize plan=_plan - In the implementation block
@property (readonly) void* context;                                   //@synthesize context=_context - In the implementation block
@property (readonly) NSString * modelResourceDescriptor;              //@synthesize modelResourceDescriptor=_modelResourceDescriptor - In the implementation block
@property (readonly) NSString * modelResourceFileName;                //@synthesize modelResourceFileName=_modelResourceFileName - In the implementation block
@property (retain) NSString * modelConfigurationName;                 //@synthesize configurationName=_configurationName - In the implementation block
@property (readonly) NSArray * inputBlobNames;                        //@synthesize inputBlobNames=_inputBlobNames - In the implementation block
@property (readonly) NSArray * outputBlobNames;                       //@synthesize outputBlobNames=_outputBlobNames - In the implementation block
@property (readonly) BOOL membraneModel;                              //@synthesize membraneModel=_membraneModel - In the implementation block
@property (readonly) int modelInputPixelFormat;                       //@synthesize modelInputPixelFormat=_modelInputPixelFormat - In the implementation block
@property (readonly) int modelOutputPixelFormat;                      //@synthesize modelOutputPixelFormat=_modelOutputPixelFormat - In the implementation block
@property (readonly) int filterUsageCount;                            //@synthesize filterUsageCount=_filterUsageCount - In the implementation block
+(void)tearDownEspressoContext:(void*)arg1 andPlan:(void*)arg2 ;
-(void*)plan;
-(BOOL)isModelInitialized;
-(void)updateWithModelResourceDescriptor:(id)arg1 modelResourceFileName:(id)arg2 network:(SCD_Struct_In65*)arg3 plan:(void*)arg4 context:(void*)arg5 inputBlobNames:(id)arg6 outputBlobNames:(id)arg7 membraneModel:(BOOL)arg8 modelInputPixelFormat:(int)arg9 modelOutputPixelFormat:(int)arg10 ;
-(BOOL)initializeModelForResourceDescriptor:(id)arg1 resourceFileName:(id)arg2 inputBlobNames:(id)arg3 outputBlobNames:(id)arg4 cpuOnlyModel:(BOOL)arg5 membraneModel:(BOOL)arg6 modelInputPixelFormat:(int)arg7 modelOutputPixelFormat:(int)arg8 error:(id*)arg9 ;
-(BOOL)parseModelResourceDescriptor:(id)arg1 extractMembraneInfo:(BOOL*)arg2 inputPixelFormat:(int*)arg3 outputPixelFormat:(int*)arg4 andResourceFileName:(id*)arg5 error:(id*)arg6 ;
-(id)init;
-(NSString *)modelResourceDescriptor;
-(BOOL)initializeInpaintingModelForResourceDescriptor:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_In65*)network;
-(BOOL)descriptorIsAMembraneModel:(id)arg1 error:(id*)arg2 ;
-(void)freeEspressoResources;
-(NSString *)modelResourceFileName;
-(NSString *)modelConfigurationName;
-(void)setModelConfigurationName:(NSString *)arg1 ;
-(NSArray *)inputBlobNames;
-(NSArray *)outputBlobNames;
-(int)filterUsageCount;
-(int)modelInputPixelFormat;
-(int)modelOutputPixelFormat;
-(BOOL)membraneModel;
-(void*)context;
-(id)description;
-(id)CIImageProcessorDigestObject;
-(void)registerFilterUsage;
-(void)deregisterFilterUsage;
-(void)releaseModelIfNoLongerNeeded;
-(void)dealloc;
@end

