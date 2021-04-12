/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MLPNetwork.h>
#import <libobjc.A.dylib/MLPLearningRateDecayHandlerDelegate.h>

@class MLPLearningRateDecayHandler, NSString;

@interface MLPSeqNetwork : MLPNetwork <MLPLearningRateDecayHandlerDelegate> {

	MLPLearningRateDecayHandler* _seqLearningRateDecayHandler;

}

@property (retain) MLPLearningRateDecayHandler * seqLearningRateDecayHandler;              //@synthesize seqLearningRateDecayHandler=_seqLearningRateDecayHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLayers:(id)arg1 ;
-(void)setOptimizerParams:(id)arg1 ;
-(void)createLayerKernels;
-(void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(/*^block*/id)arg4 semaphore:(id)arg5 ;
-(unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4 ;
-(id)computeInference:(id)arg1 ;
-(void)setSeqLearningRateDecayHandler:(MLPLearningRateDecayHandler *)arg1 ;
-(MLPLearningRateDecayHandler *)seqLearningRateDecayHandler;
-(float)computeLoss:(id)arg1 ;
-(void)decayHandler:(id)arg1 didUpdateLearningRate:(float)arg2 ;
@end

