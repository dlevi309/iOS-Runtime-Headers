/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@class NSArray, NSString, NSDictionary, MLProbabilityDictionary, NSObject, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLClassifier, MLRegressor, MLModelSpecificationLoader, MLCompiledModelLoader> {

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
	unsigned long long _numInputs;
	unsigned long long _numOutputs;
	void* _plan;
	void* _context;
	MLProbabilityDictionary* _probDict;
	NSString* _modelFilePath;
	NSObject*<OS_dispatch_semaphore> _bufferSemaphore;
	NSObject*<OS_dispatch_queue> _espressoQueue;
	NSObject*<OS_dispatch_queue> _predictionsQueue;
	NSObject*<OS_dispatch_semaphore> _submitSemaphore;
	NSDictionary* _blobNameToRank;
	SCD_Struct_ML7* _network;
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

}

@property (nonatomic,readonly) unsigned long long numInputs;                                               //@synthesize numInputs=_numInputs - In the implementation block
@property (nonatomic,readonly) unsigned long long numOutputs;                                              //@synthesize numOutputs=_numOutputs - In the implementation block
@property (assign,nonatomic) vector<std::__1::map<std::__1::basic_string<char> inputBuffers;               //@synthesize inputBuffers=_inputBuffers - In the implementation block
@property (assign,nonatomic) vector<std::__1::map<std::__1::basic_string<char> outputBuffers;              //@synthesize outputBuffers=_outputBuffers - In the implementation block
@property (assign,nonatomic) BOOL usingCPU;                                                                //@synthesize usingCPU=_usingCPU - In the implementation block
@property (assign,nonatomic) void* plan;                                                                   //@synthesize plan=_plan - In the implementation block
@property (assign,nonatomic) SCD_Struct_ML7* network;                                                      //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> params;                                      //@synthesize params=_params - In the implementation block
@property (assign,nonatomic) int precision;                                                                //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) int engine;                                                                   //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int qos;                                                                      //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) void* context;                                                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isEspresoBiasPreprocessingShared;                                        //@synthesize isEspresoBiasPreprocessingShared=_isEspresoBiasPreprocessingShared - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> widths;                                      //@synthesize widths=_widths - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> heights;                                     //@synthesize heights=_heights - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> ks;                                          //@synthesize ks=_ks - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> batches;                                     //@synthesize batches=_batches - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> sequences;                                   //@synthesize sequences=_sequences - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> ranks;                                       //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,retain) NSArray * classLabels;                                                        //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,retain) NSString * classScoreVectorName;                                              //@synthesize classScoreVectorName=_classScoreVectorName - In the implementation block
@property (nonatomic,retain) MLProbabilityDictionary * probDict;                                           //@synthesize probDict=_probDict - In the implementation block
@property (nonatomic,retain) NSString * modelFilePath;                                                     //@synthesize modelFilePath=_modelFilePath - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> optionalInputTypes;                          //@synthesize optionalInputTypes=_optionalInputTypes - In the implementation block
@property (assign,nonatomic) BOOL hasBidirectionalLayer;                                                   //@synthesize hasBidirectionalLayer=_hasBidirectionalLayer - In the implementation block
@property (assign,nonatomic) BOOL hasOptionalInputSequenceConcat;                                          //@synthesize hasOptionalInputSequenceConcat=_hasOptionalInputSequenceConcat - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> bufferSemaphore;                                       //@synthesize bufferSemaphore=_bufferSemaphore - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> espressoQueue;                                             //@synthesize espressoQueue=_espressoQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> predictionsQueue;                                          //@synthesize predictionsQueue=_predictionsQueue - In the implementation block
@property (assign) vector<bool bufferAvailable;                                                            //@synthesize bufferAvailable=_bufferAvailable - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> submitSemaphore;                                       //@synthesize submitSemaphore=_submitSemaphore - In the implementation block
@property (assign) BOOL isGPUPathForbidden;                                                                //@synthesize isGPUPathForbidden=_isGPUPathForbidden - In the implementation block
@property (assign) BOOL isANEPathForbidden;                                                                //@synthesize isANEPathForbidden=_isANEPathForbidden - In the implementation block
@property (assign) set<std::__1::basic_string<char> flexibleShapesConfigNamesInNet;                        //@synthesize flexibleShapesConfigNamesInNet=_flexibleShapesConfigNamesInNet - In the implementation block
@property (assign) basic_string<char currentConfigurationName;                                             //@synthesize currentConfigurationName=_currentConfigurationName - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> OutputBlobIsDynamic;                         //@synthesize OutputBlobIsDynamic=_OutputBlobIsDynamic - In the implementation block
@property (assign,nonatomic) BOOL ndArrayInterpretation;                                                   //@synthesize ndArrayInterpretation=_ndArrayInterpretation - In the implementation block
@property (nonatomic,retain) NSDictionary * imagePreprocessingParameters;                                  //@synthesize imagePreprocessingParameters=_imagePreprocessingParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * blobNameToRank;                                                //@synthesize blobNameToRank=_blobNameToRank - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputLayers;                                               //@synthesize inputLayers=_inputLayers - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outputLayers;                                              //@synthesize outputLayers=_outputLayers - In the implementation block
@property (assign,nonatomic) BOOL hardwareFallbackDetected;                                                //@synthesize hardwareFallbackDetected=_hardwareFallbackDetected - In the implementation block
@property (nonatomic,retain) NSDictionary * espressoInputShapes;                                           //@synthesize espressoInputShapes=_espressoInputShapes - In the implementation block
@property (nonatomic,retain) NSDictionary * espressoInputStrides;                                          //@synthesize espressoInputStrides=_espressoInputStrides - In the implementation block
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)neuralNetworkFromContainer:(id)arg1 error:(id*)arg2 ;
+(id)neuralNetworkFromContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)neuralNetworkFromContainer:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(int)qos;
-(void*)context;
-(int)engine;
-(void)setContext:(void*)arg1 ;
-(SCD_Struct_ML7*)network;
-(unsigned long long)numInputs;
-(unsigned long long)numOutputs;
-(void)setNetwork:(SCD_Struct_ML7*)arg1 ;
-(void*)plan;
-(NSArray *)classLabels;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSString *)modelFilePath;
-(void)setModelFilePath:(NSString *)arg1 ;
-(BOOL)hasBidirectionalLayer;
-(void)setHasBidirectionalLayer:(BOOL)arg1 ;
-(BOOL)hasOptionalInputSequenceConcat;
-(void)setHasOptionalInputSequenceConcat:(BOOL)arg1 ;
-(void)setClassLabels:(NSArray *)arg1 ;
-(NSString *)classScoreVectorName;
-(void)setClassScoreVectorName:(NSString *)arg1 ;
-(BOOL)ndArrayInterpretation;
-(void)setNdArrayInterpretation:(BOOL)arg1 ;
-(int)precision;
-(void)setPrecision:(int)arg1 ;
-(void)setEngine:(int)arg1 ;
-(map<std::__1::basic_string<char>)optionalInputTypes;
-(void)setOptionalInputTypes:(map<std::__1::basic_string<char>)arg1 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)evaluate:(id)arg1 error:(id*)arg2 ;
-(BOOL)usingEspressoConfigurations;
-(BOOL)sequenceConcatConsumesOptionalInputNamed:(id)arg1 ;
-(int)sequenceNamed:(id)arg1 ;
-(id)convertPredictionToClassifierResult:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(id)addClassifierInformationToOutput:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)availableOutputBlobList;
-(BOOL)_matchEngineToOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithContainer:(id)arg1 error:(id*)arg2 ;
-(void)collectParametersFromContainer:(id)arg1 configuration:(id)arg2 ;
-(id)initWithContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(BOOL)fillInInitialShapeFromEspressoNet:(id*)arg1 ;
-(BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(BOOL)arg2 error:(id*)arg3 ;
-(id)verifyInputs:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)obtainBuffer;
-(void)releaseBuffer:(unsigned long long)arg1 ;
-(BOOL)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char> > >*)arg2 bufferIndex:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)unlockCVPixelBuffers:(id)arg1 error:(id*)arg2 ;
-(id)evaluateNoAutoRelease:(id)arg1 error:(id*)arg2 ;
-(id)populateOutputs:(unsigned long long)arg1 error:(id*)arg2 ;
-(CVBufferRef)_pixelBufferFromEbuf:(SCD_Struct_ML35*)arg1 description:(id)arg2 error:(id*)arg3 ;
-(void)_deallocContextAndPlan;
-(id)sortBatchByShape:(id)arg1 withMap:(id*)arg2 error:(id*)arg3 ;
-(BOOL)resetSizes:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSizesWithEspressoConfigurations:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSizesNoAutoRelease:(id)arg1 error:(id*)arg2 ;
-(BOOL)rebuildPlan:(id*)arg1 ;
-(id)evaluateBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dumpTestVectorsToPath:(id)arg1 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(NSArray *)inputLayers;
-(NSArray *)outputLayers;
-(BOOL)hardwareFallbackDetected;
-(void)setHardwareFallbackDetected:(BOOL)arg1 ;
-(NSDictionary *)imagePreprocessingParameters;
-(void)setImagePreprocessingParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)espressoInputShapes;
-(void)setEspressoInputShapes:(NSDictionary *)arg1 ;
-(NSDictionary *)espressoInputStrides;
-(void)setEspressoInputStrides:(NSDictionary *)arg1 ;
-(vector<std::__1::map<std::__1::basic_string<char>)inputBuffers;
-(void)setInputBuffers:(vector<std::__1::map<std::__1::basic_string<char>)arg1 ;
-(vector<std::__1::map<std::__1::basic_string<char>)outputBuffers;
-(void)setOutputBuffers:(vector<std::__1::map<std::__1::basic_string<char>)arg1 ;
-(BOOL)usingCPU;
-(void)setUsingCPU:(BOOL)arg1 ;
-(void)setPlan:(void*)arg1 ;
-(map<std::__1::basic_string<char>)params;
-(void)setParams:(map<std::__1::basic_string<char>)arg1 ;
-(void)setQos:(int)arg1 ;
-(BOOL)isEspresoBiasPreprocessingShared;
-(void)setIsEspresoBiasPreprocessingShared:(BOOL)arg1 ;
-(map<std::__1::basic_string<char>)widths;
-(void)setWidths:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)heights;
-(void)setHeights:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)ks;
-(void)setKs:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)batches;
-(void)setBatches:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)sequences;
-(void)setSequences:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)ranks;
-(void)setRanks:(map<std::__1::basic_string<char>)arg1 ;
-(MLProbabilityDictionary *)probDict;
-(void)setProbDict:(MLProbabilityDictionary *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)bufferSemaphore;
-(void)setBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)espressoQueue;
-(void)setEspressoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)predictionsQueue;
-(void)setPredictionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(vector<bool)bufferAvailable;
-(void)setBufferAvailable:(vector<bool)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)submitSemaphore;
-(void)setSubmitSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)isGPUPathForbidden;
-(void)setIsGPUPathForbidden:(BOOL)arg1 ;
-(BOOL)isANEPathForbidden;
-(void)setIsANEPathForbidden:(BOOL)arg1 ;
-(set<std::__1::basic_string<char>)flexibleShapesConfigNamesInNet;
-(void)setFlexibleShapesConfigNamesInNet:(set<std::__1::basic_string<char>)arg1 ;
-(basic_string<char)currentConfigurationName;
-(void)setCurrentConfigurationName:(basic_string<char)arg1 ;
-(map<std::__1::basic_string<char>)OutputBlobIsDynamic;
-(void)setOutputBlobIsDynamic:(map<std::__1::basic_string<char>)arg1 ;
-(NSDictionary *)blobNameToRank;
-(void)setBlobNameToRank:(NSDictionary *)arg1 ;
@end

