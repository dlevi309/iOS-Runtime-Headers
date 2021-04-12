/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLNeuralNetworkEngine.h>
#import <libobjc.A.dylib/MLUpdatable.h>

@protocol OS_dispatch_queue;
@class ETTaskState, ETTaskDefinition, NSString, NSDictionary, MLUpdateProgressHandlers, NSObject, MLShufflingBatchProvider, MLParameterContainer;

@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkEngine <MLUpdatable> {

	BOOL _continueWithUpdate;
	ETTaskState* _snapshot;
	ETTaskDefinition* _task;
	NSString* _lossTargetName;
	NSDictionary* _classLabelToIndexMap;
	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _progressHandlersDispatchQueue;
	NSDictionary* _coreMLToEspressoParamsMap;
	NSString* _lossOutputName;
	MLShufflingBatchProvider* _shuffableTrainingData;
	MLParameterContainer* _parameterContainer;

}

@property (nonatomic,retain) MLUpdateProgressHandlers * progressHandlers;                             //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> progressHandlersDispatchQueue;              //@synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * coreMLToEspressoParamsMap;                                //@synthesize coreMLToEspressoParamsMap=_coreMLToEspressoParamsMap - In the implementation block
@property (nonatomic,retain) NSString * lossOutputName;                                               //@synthesize lossOutputName=_lossOutputName - In the implementation block
@property (nonatomic,retain) NSString * lossTargetName;                                               //@synthesize lossTargetName=_lossTargetName - In the implementation block
@property (assign,nonatomic) BOOL continueWithUpdate;                                                 //@synthesize continueWithUpdate=_continueWithUpdate - In the implementation block
@property (nonatomic,retain) MLShufflingBatchProvider * shuffableTrainingData;                        //@synthesize shuffableTrainingData=_shuffableTrainingData - In the implementation block
@property (nonatomic,retain) MLParameterContainer * parameterContainer;                               //@synthesize parameterContainer=_parameterContainer - In the implementation block
@property (nonatomic,retain) ETTaskState * snapshot;                                                  //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) ETTaskDefinition * task;                                                 //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSDictionary * classLabelToIndexMap;                                   //@synthesize classLabelToIndexMap=_classLabelToIndexMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)createCoreMLToEspressoParamsMap;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)stringForDataType:(unsigned long long)arg1 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)updateModelWithData:(id)arg1 ;
-(void)resumeUpdateWithParameters:(id)arg1 ;
-(void)resumeUpdate;
-(void)cancelUpdate;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)setProgressHandlers:(MLUpdateProgressHandlers *)arg1 ;
-(NSObject*<OS_dispatch_queue>)progressHandlersDispatchQueue;
-(void)setProgressHandlersDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)updateParameters;
-(BOOL)continueWithUpdate;
-(void)setContinueWithUpdate:(BOOL)arg1 ;
-(MLParameterContainer *)parameterContainer;
-(void)setParameterContainer:(MLParameterContainer *)arg1 ;
-(ETTaskDefinition *)task;
-(void)setTask:(ETTaskDefinition *)arg1 ;
-(id)createEspressoTaskFrom:(id)arg1 updateParameters:(NetworkUpdateParameters*)arg2 lossInputName:(id)arg3 lossTargetName:(id)arg4 lossOutputName:(id)arg5 updatableLayerNames:(id)arg6 configuration:(id)arg7 error:(id*)arg8 ;
-(BOOL)loadUpdateParameters:(NetworkUpdateParameters*)arg1 fromCompiledArchive:(MLModelInputArchiver*)arg2 error:(id*)arg3 ;
-(void)loadLossInputName:(id*)arg1 updatableLayerNames:(id*)arg2 fromCompiledArchive:(MLModelInputArchiver*)arg3 ;
-(void)loadLossTargetName:(id*)arg1 lossOutputName:(id*)arg2 fromUpdateParameters:(NetworkUpdateParameters*)arg3 ;
-(id)initWithCompiledArchive:(MLModelInputArchiver*)arg1 nnContainer:(id)arg2 configuration:(id)arg3 error:(id*)arg4 ;
-(void)createClassLabelToIndexMap;
-(void)loadParameterDescriptionsAndContainerFromUpdateParameters:(const NetworkUpdateParameters*)arg1 ;
-(BOOL)updateLearningRateWithTaskContext:(id)arg1 isInCallBack:(BOOL)arg2 error:(id*)arg3 ;
-(id)collectMetricsFromTaskContext:(id)arg1 isInCallBack:(BOOL)arg2 error:(id*)arg3 ;
-(id)parameterValueForKey:(id)arg1 ;
-(id)paramsForLayer:(id)arg1 parameterType:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)weightsForLayer:(id)arg1 error:(id*)arg2 ;
-(id)biasForLayer:(id)arg1 error:(id*)arg2 ;
-(ETTaskState *)snapshot;
-(void)setSnapshot:(ETTaskState *)arg1 ;
-(NSString *)lossTargetName;
-(void)setLossTargetName:(NSString *)arg1 ;
-(NSDictionary *)classLabelToIndexMap;
-(NSDictionary *)coreMLToEspressoParamsMap;
-(void)setCoreMLToEspressoParamsMap:(NSDictionary *)arg1 ;
-(NSString *)lossOutputName;
-(void)setLossOutputName:(NSString *)arg1 ;
-(MLShufflingBatchProvider *)shuffableTrainingData;
-(void)setShuffableTrainingData:(MLShufflingBatchProvider *)arg1 ;
@end

