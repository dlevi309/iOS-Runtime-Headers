/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETTaskContext.h>

@class ETVariablesDefinition, ETModelDefinition, ETOptimizerDefinition, ETTaskState, NSArray;

@interface ETTaskDefinition : NSObject <ETTaskContext> {

	unordered_map<std::__1::basic_string<char>, unsigned long, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* inference_layer_index;
	ETVariablesDefinition* varsDef;
	unsigned long long runtimePlatform;
	int precision;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > training_control_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > training_control_end_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > gradient_control_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > gradient_control_end_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > optimizer_control_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > optimizer_control_end_name;
	ETModelDefinition* _inferenceModel;
	ETOptimizerDefinition* _optimizer;
	unsigned long long _platform;
	ETTaskState* _taskState;
	unsigned long long _batchSize;
	NSArray* _outputNames;
	shared_ptr<Espresso::net>* _inferenceGraphNetPtr;
	shared_ptr<Espresso::net>* _trainingGraphNetPtr;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _non_batches;
	unordered_map<std::__1::basic_string<char>, Espresso::layer_shape, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, Espresso::layer_shape> > >* _blobShapes;

}

@property (assign) shared_ptr<Espresso::net>* inferenceGraphNetPtr;                    //@synthesize inferenceGraphNetPtr=_inferenceGraphNetPtr - In the implementation block
@property (assign) shared_ptr<Espresso::net>* trainingGraphNetPtr;                     //@synthesize trainingGraphNetPtr=_trainingGraphNetPtr - In the implementation block
@property (assign) unsigned long long batchSize;                                       //@synthesize batchSize=_batchSize - In the implementation block
@property (retain) NSArray * outputNames;                                              //@synthesize outputNames=_outputNames - In the implementation block
@property (assign) unordered_map<std::__1::basic_string<char> blobShapes;              //@synthesize blobShapes=_blobShapes - In the implementation block
@property (assign) vector<std::__1::basic_string<char> non_batches;                    //@synthesize non_batches=_non_batches - In the implementation block
@property (nonatomic,retain) ETModelDefinition * inferenceModel;                       //@synthesize inferenceModel=_inferenceModel - In the implementation block
@property (nonatomic,retain) ETOptimizerDefinition * optimizer;                        //@synthesize optimizer=_optimizer - In the implementation block
@property (assign,nonatomic) unsigned long long platform;                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) ETTaskState * taskState;                                  //@synthesize taskState=_taskState - In the implementation block
-(id)description;
-(unsigned long long)platform;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(ETOptimizerDefinition *)optimizer;
-(void)setOptimizer:(ETOptimizerDefinition *)arg1 ;
-(id)initWithModelDefinition:(id)arg1 lossDefinition:(id)arg2 variablesDefinition:(id)arg3 optimizerDefinition:(id)arg4 forPlatform:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)getParameterOfType:(unsigned long long)arg1 forLayerNamed:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveNetwork:(id)arg1 inplace:(BOOL)arg2 error:(id*)arg3 ;
-(id)getTensorNamed:(id)arg1 ;
-(BOOL)setTensorNamed:(id)arg1 withValue:(id)arg2 error:(id*)arg3 ;
-(ETTaskState *)taskState;
-(BOOL)doTrainingOnData:(id)arg1 forNumberOfEpochs:(unsigned long long)arg2 withCallback:(id)arg3 error:(id*)arg4 ;
-(id)doInferenceOnData:(id)arg1 error:(id*)arg2 ;
-(void)setPlatform:(unsigned long long)arg1 ;
-(void)setTaskState:(ETTaskState *)arg1 ;
-(NSArray *)outputNames;
-(void)reloadOnRuntinePlatform:(id*)arg1 ;
-(void)shareWeights;
-(id)namesVectorToFoundationArray:(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 ;
-(BOOL)saveInferenceNetwork:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)dataTypeForParameterOfType:(unsigned long long)arg1 fromLayerNamed:(id)arg2 ;
-(unsigned long long)platformForLayerNamed:(id)arg1 error:(id*)arg2 ;
-(ETModelDefinition *)inferenceModel;
-(void)setInferenceModel:(ETModelDefinition *)arg1 ;
-(shared_ptr<Espresso::net>*)inferenceGraphNetPtr;
-(void)setInferenceGraphNetPtr:(shared_ptr<Espresso::net>*)arg1 ;
-(shared_ptr<Espresso::net>*)trainingGraphNetPtr;
-(void)setTrainingGraphNetPtr:(shared_ptr<Espresso::net>*)arg1 ;
-(void)setOutputNames:(NSArray *)arg1 ;
-(void)setBlobShapes:(unordered_map<std::__1::basic_string<char>)arg1 ;
-(vector<std::__1::basic_string<char>)non_batches;
-(void)setNon_batches:(vector<std::__1::basic_string<char>)arg1 ;
-(unordered_map<std::__1::basic_string<char>)blobShapes;
@end

