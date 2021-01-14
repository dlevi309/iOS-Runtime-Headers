/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLNeuralNetwork.h>
#import <libobjc.A.dylib/MLClassifier.h>
#import <libobjc.A.dylib/MLRegressor.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLCompiledModelLoader.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSArray, NSString, NSDictionary, MLVersionInfo, MLProbabilityDictionary, NSObject, NSMutableDictionary, EspressoProfilingNetworkInfo, MLNeuralNetworkContainer, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLClassifier, MLRegressor, MLModelSpecificationLoader, MLCompiledModelLoader> {

	vector<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > >, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > > >* _inputBuffers;
	vector<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > >, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > > >* _outputBuffers;
	map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > >* _params;
	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _widths;
	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _heights;
	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _ks;
	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _batches;
	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _sequences;
	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _ranks;
	map<std::__1::basic_string<char>, MLOptionalNNInputType, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MLOptionalNNInputType> > >* _optionalInputTypes;
	vector<bool, std::__1::allocator<bool> >* _bufferAvailable;
	set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >* _flexibleShapesConfigNamesInNet;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _currentConfigurationName;
	map<std::__1::basic_string<char>, bool, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, bool> > >* _OutputBlobIsDynamic;
	BOOL _hardwareFallbackDetected;
	BOOL _ndArrayInterpretation;
	BOOL _usingCPU;
	BOOL _isEspresoBiasPreprocessingShared;
	BOOL _hasBidirectionalLayer;
	BOOL _hasOptionalInputSequenceConcat;
	BOOL _isGPUPathForbidden;
	BOOL _isANEPathForbidden;
	int _precision;
	int _engine;
	int _qos;
	NSArray* _classLabels;
	NSString* _classScoreVectorName;
	NSArray* _inputLayers;
	NSArray* _outputLayers;
	NSDictionary* _imagePreprocessingParameters;
	NSDictionary* _espressoInputShapes;
	NSDictionary* _espressoInputStrides;
	MLVersionInfo* _modelVersionInfo;
	unsigned long long _numInputs;
	unsigned long long _numOutputs;
	void* _plan;
	void* _context;
	MLProbabilityDictionary* _probDict;
	NSString* _modelFilePath;
	NSDictionary* _defaultOptionalValues;
	NSObject*<OS_dispatch_semaphore> _bufferSemaphore;
	NSObject*<OS_dispatch_queue> _espressoQueue;
	NSObject*<OS_dispatch_queue> _predictionsQueue;
	NSObject*<OS_dispatch_semaphore> _submitSemaphore;
	NSMutableDictionary* _blobNameToLastPtrFlags;
	EspressoProfilingNetworkInfo* _espressoProfileInfo;
	MLNeuralNetworkContainer* _container;
	SCD_Struct_ML34* _network;

}

@property (nonatomic,readonly) unsigned long long numInputs;                                  //@synthesize numInputs=_numInputs - In the implementation block
@property (nonatomic,readonly) unsigned long long numOutputs;                                 //@synthesize numOutputs=_numOutputs - In the implementation block
@property (assign,nonatomic) BOOL usingCPU;                                                   //@synthesize usingCPU=_usingCPU - In the implementation block
@property (assign,nonatomic) void* plan;                                                      //@synthesize plan=_plan - In the implementation block
@property (assign,nonatomic) SCD_Struct_ML34* network;                                        //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) int precision;                                                   //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) int engine;                                                      //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int qos;                                                         //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) void* context;                                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isEspresoBiasPreprocessingShared;                           //@synthesize isEspresoBiasPreprocessingShared=_isEspresoBiasPreprocessingShared - In the implementation block
@property (nonatomic,retain) NSArray * classLabels;                                           //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,retain) NSString * classScoreVectorName;                                 //@synthesize classScoreVectorName=_classScoreVectorName - In the implementation block
@property (nonatomic,retain) MLProbabilityDictionary * probDict;                              //@synthesize probDict=_probDict - In the implementation block
@property (nonatomic,retain) NSString * modelFilePath;                                        //@synthesize modelFilePath=_modelFilePath - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultOptionalValues;                            //@synthesize defaultOptionalValues=_defaultOptionalValues - In the implementation block
@property (assign,nonatomic) BOOL hasBidirectionalLayer;                                      //@synthesize hasBidirectionalLayer=_hasBidirectionalLayer - In the implementation block
@property (assign,nonatomic) BOOL hasOptionalInputSequenceConcat;                             //@synthesize hasOptionalInputSequenceConcat=_hasOptionalInputSequenceConcat - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> bufferSemaphore;                          //@synthesize bufferSemaphore=_bufferSemaphore - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> espressoQueue;                                //@synthesize espressoQueue=_espressoQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> predictionsQueue;                             //@synthesize predictionsQueue=_predictionsQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> submitSemaphore;                          //@synthesize submitSemaphore=_submitSemaphore - In the implementation block
@property (assign) BOOL isGPUPathForbidden;                                                   //@synthesize isGPUPathForbidden=_isGPUPathForbidden - In the implementation block
@property (assign) BOOL isANEPathForbidden;                                                   //@synthesize isANEPathForbidden=_isANEPathForbidden - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * blobNameToLastPtrFlags;                  //@synthesize blobNameToLastPtrFlags=_blobNameToLastPtrFlags - In the implementation block
@property (assign,nonatomic) BOOL ndArrayInterpretation;                                      //@synthesize ndArrayInterpretation=_ndArrayInterpretation - In the implementation block
@property (nonatomic,retain) NSDictionary * imagePreprocessingParameters;                     //@synthesize imagePreprocessingParameters=_imagePreprocessingParameters - In the implementation block
@property (nonatomic,retain) EspressoProfilingNetworkInfo * espressoProfileInfo;              //@synthesize espressoProfileInfo=_espressoProfileInfo - In the implementation block
@property (assign,nonatomic,__weak) MLNeuralNetworkContainer * container;                     //@synthesize container=_container - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputLayers;                                  //@synthesize inputLayers=_inputLayers - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outputLayers;                                 //@synthesize outputLayers=_outputLayers - In the implementation block
@property (assign,nonatomic) BOOL hardwareFallbackDetected;                                   //@synthesize hardwareFallbackDetected=_hardwareFallbackDetected - In the implementation block
@property (nonatomic,retain) NSDictionary * espressoInputShapes;                              //@synthesize espressoInputShapes=_espressoInputShapes - In the implementation block
@property (nonatomic,retain) NSDictionary * espressoInputStrides;                             //@synthesize espressoInputStrides=_espressoInputStrides - In the implementation block
@property (nonatomic,readonly) MLVersionInfo * modelVersionInfo;                              //@synthesize modelVersionInfo=_modelVersionInfo - In the implementation block
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)neuralNetworkFromContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(Class)containerClass;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)neuralNetworkFromContainer:(id)arg1 error:(id*)arg2 ;
+(id)neuralNetworkFromContainer:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id*)arg4 ;
-(void)setQos:(int)arg1 ;
-(int)qos;
-(void)setNdArrayInterpretation:(BOOL)arg1 ;
-(int)precision;
-(void*)plan;
-(NSString *)classScoreVectorName;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSArray *)classLabels;
-(int)engine;
-(void)setClassLabels:(NSArray *)arg1 ;
-(void)setEspressoProfileInfo:(EspressoProfilingNetworkInfo *)arg1 ;
-(void)setClassScoreVectorName:(NSString *)arg1 ;
-(MLVersionInfo *)modelVersionInfo;
-(void)setPrecision:(int)arg1 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)setHasBidirectionalLayer:(BOOL)arg1 ;
-(BOOL)updateDynamicOutputBlobIndicatorCacheAndReturnError:(id*)arg1 ;
-(void)setEngine:(int)arg1 ;
-(BOOL)_matchEngineToOptions:(id)arg1 error:(id*)arg2 ;
-(NSArray *)inputLayers;
-(unsigned long long)numOutputs;
-(void)setProbDict:(MLProbabilityDictionary *)arg1 ;
-(BOOL)bindDynamicOutputBuffers:(const map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > >*)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)submitSemaphore;
-(void)setHasOptionalInputSequenceConcat:(BOOL)arg1 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)numInputs;
-(id)convertPredictionToClassifierResult:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(id)populateOutputs:(unsigned long long)arg1 outputBackings:(id)arg2 error:(id*)arg3 ;
-(BOOL)_setMultiArrayOutputBacking:(id)arg1 forOutputFeatureName:(id)arg2 toEbuf:(SCD_Struct_ML35*)arg3 error:(id*)arg4 ;
-(SCD_Struct_ML34*)network;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetSizesNoAutoRelease:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSizes:(id)arg1 error:(id*)arg2 ;
-(void)dumpTestVectorsToPath:(id)arg1 ;
-(EspressoProfilingNetworkInfo *)espressoProfileInfo;
-(void)setEspressoInputShapes:(NSDictionary *)arg1 ;
-(BOOL)resetSizesWithEspressoConfigurations:(id)arg1 error:(id*)arg2 ;
-(void)setEspressoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completeOutputBackings:(id)arg1 automaticOutputBackingMode:(id)arg2 error:(id*)arg3 ;
-(void)collectParametersFromContainer:(id)arg1 configuration:(id)arg2 ;
-(BOOL)hasBidirectionalLayer;
-(BOOL)fillInInitialShapeFromEspressoNet:(id*)arg1 ;
-(void*)context;
-(NSObject*<OS_dispatch_semaphore>)bufferSemaphore;
-(id)imageFeatureValueFromEbuf:(SCD_Struct_ML35*)arg1 backingCVPixelBuffer:(CVBufferRef)arg2 description:(id)arg3 error:(id*)arg4 ;
-(void)setDefaultOptionalValues:(NSDictionary *)arg1 ;
-(void)setPlan:(void*)arg1 ;
-(void)setModelFilePath:(NSString *)arg1 ;
-(BOOL)usingEspressoConfigurations;
-(BOOL)bindInputFeatures:(id)arg1 bufferIndex:(unsigned long long)arg2 allocatedImageData:(vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char> > >*)arg3 error:(id*)arg4 ;
-(id)initWithContainer:(id)arg1 error:(id*)arg2 ;
-(void)setHardwareFallbackDetected:(BOOL)arg1 ;
-(void)setContainer:(MLNeuralNetworkContainer *)arg1 ;
-(BOOL)tryToSetOutputBacking:(id)arg1 forFeature:(id)arg2 toEbuf:(SCD_Struct_ML35*)arg3 reportPointerFlags:(int*)arg4 error:(id*)arg5 ;
-(CVBufferRef)_pixelBufferFromEbuf:(SCD_Struct_ML35*)arg1 description:(id)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)predictionsQueue;
-(BOOL)executePlan:(void*)arg1 error:(id*)arg2 ;
-(BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)copyEbuf:(const SCD_Struct_ML35*)arg1 ofPixelType:(unsigned long long)arg2 toPixelBuffer:(CVBufferRef)arg3 error:(id*)arg4 ;
-(id)executionSchedule;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(BOOL)arg2 error:(id*)arg3 ;
-(void)populateMultiArrayShape:(id*)arg1 strides:(id*)arg2 forEbuf:(SCD_Struct_ML35*)arg3 featureDescription:(id)arg4 ndArrayInterpretation:(BOOL)arg5 ;
-(MLProbabilityDictionary *)probDict;
-(void)setPredictionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)bindOutputBuffers:(const map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > >*)arg1 outputBackings:(id)arg2 automaticOutputBackingMode:(id)arg3 error:(id*)arg4 ;
-(BOOL)unlockCVPixelBuffers:(id)arg1 error:(id*)arg2 ;
-(id)evaluateBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)multiArrayFeatureValueFromEbuf:(SCD_Struct_ML35*)arg1 backingMultiArray:(id)arg2 description:(id)arg3 outputName:(id)arg4 error:(id*)arg5 ;
-(id)evaluate:(id)arg1 error:(id*)arg2 ;
-(BOOL)isANEPathForbidden;
-(void)setIsANEPathForbidden:(BOOL)arg1 ;
-(BOOL)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char> > >*)arg2 bufferIndex:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)ndArrayInterpretation;
-(void)releaseBuffer:(unsigned long long)arg1 ;
-(void)setEspressoInputStrides:(NSDictionary *)arg1 ;
-(id)initWithContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(BOOL)isGPUPathForbidden;
-(NSDictionary *)espressoInputStrides;
-(NSDictionary *)espressoInputShapes;
-(NSObject*<OS_dispatch_queue>)espressoQueue;
-(BOOL)usingCPU;
-(NSDictionary *)defaultOptionalValues;
-(BOOL)sequenceConcatConsumesOptionalInputNamed:(id)arg1 ;
-(NSString *)modelFilePath;
-(int)_espressoDeviceForConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)sortBatchByShape:(id)arg1 withMap:(id*)arg2 error:(id*)arg3 ;
-(BOOL)isEspresoBiasPreprocessingShared;
-(void)setUsingCPU:(BOOL)arg1 ;
-(void)_deallocContextAndPlan;
-(BOOL)hasOptionalInputSequenceConcat;
-(BOOL)_espressoOutputShapeForFeatureName:(id)arg1 matchesShapeOfMLMultiArray:(id)arg2 ;
-(NSDictionary *)imagePreprocessingParameters;
-(void)setIsEspresoBiasPreprocessingShared:(BOOL)arg1 ;
-(void)setSubmitSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setImagePreprocessingParameters:(NSDictionary *)arg1 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)setBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSArray *)outputLayers;
-(NSMutableDictionary *)blobNameToLastPtrFlags;
-(BOOL)rebuildPlan:(id*)arg1 ;
-(unsigned long long)obtainBuffer;
-(MLNeuralNetworkContainer *)container;
-(BOOL)hardwareFallbackDetected;
-(id)verifyInputs:(id)arg1 error:(id*)arg2 ;
-(id)evaluateInputs:(id)arg1 bufferIndex:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)setIsGPUPathForbidden:(BOOL)arg1 ;
-(void)setNetwork:(SCD_Struct_ML34*)arg1 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(int)sequenceNamed:(id)arg1 ;
-(id)evaluateInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)addClassifierInformationToOutput:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)availableOutputBlobList;
-(void)setContext:(void*)arg1 ;
@end

