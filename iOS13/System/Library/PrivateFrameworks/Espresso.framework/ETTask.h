/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class ETModelDef, ETOptimizerDef, ETImageDescriptorExtractor;

@interface ETTask : NSObject {

	shared_ptr<Espresso::net>* network;
	BOOL _dumpData;
	ETModelDef* _model;
	ETOptimizerDef* _optimizer;
	ETImageDescriptorExtractor* _extractor;

}

@property (nonatomic,retain) ETModelDef * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) ETOptimizerDef * optimizer;                          //@synthesize optimizer=_optimizer - In the implementation block
@property (nonatomic,retain) ETImageDescriptorExtractor * extractor;              //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) BOOL dumpData;                                       //@synthesize dumpData=_dumpData - In the implementation block
-(id)init;
-(ETModelDef *)model;
-(void)setModel:(ETModelDef *)arg1 ;
-(ETOptimizerDef *)optimizer;
-(void)setOptimizer:(ETOptimizerDef *)arg1 ;
-(id)evaluate:(id)arg1 ;
-(void)setExtractor:(ETImageDescriptorExtractor *)arg1 ;
-(ETImageDescriptorExtractor *)extractor;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(BOOL)arg4 ;
-(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)reinitializeVariables;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3 extractor:(id)arg4 ;
-(float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(/*^block*/id)arg3 ;
-(float)fit:(id)arg1 numberOfBatches:(unsigned)arg2 withProgress:(/*^block*/id)arg3 ;
-(BOOL)runBatches:(id)arg1 numberOfBatches:(unsigned)arg2 outputNames:(id)arg3 batchCallback:(/*^block*/id)arg4 ;
-(BOOL)fit:(id)arg1 numberOfBatches:(unsigned)arg2 outputNames:(id)arg3 batchCallback:(/*^block*/id)arg4 ;
-(BOOL)fit:(id)arg1 numberOfEpochs:(int)arg2 outputNames:(id)arg3 batchCallback:(/*^block*/id)arg4 ;
-(BOOL)runInference:(id)arg1 outputNames:(id)arg2 batchCallback:(/*^block*/id)arg3 ;
-(void)saveNetwork:(id)arg1 ;
-(void)saveNetwork:(id)arg1 revertToInferenceMode:(BOOL)arg2 ;
-(BOOL)moveToGPU:(int)arg1 error:(id*)arg2 ;
-(BOOL)dumpData;
-(void)setDumpData:(BOOL)arg1 ;
@end

