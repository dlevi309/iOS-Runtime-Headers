/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@protocol MLBatchProvider;
@class MLNeuralNetworkEngine;

@interface _MLBatchDataSource : NSObject <ETDataProvider> {

	BOOL _useForPrediction;
	id<MLBatchProvider> _batchProvider;
	MLNeuralNetworkEngine* _nnEngine;

}

@property (nonatomic,readonly) id<MLBatchProvider> batchProvider;              //@synthesize batchProvider=_batchProvider - In the implementation block
@property (nonatomic,readonly) MLNeuralNetworkEngine * nnEngine;               //@synthesize nnEngine=_nnEngine - In the implementation block
@property (nonatomic,readonly) BOOL useForPrediction;                          //@synthesize useForPrediction=_useForPrediction - In the implementation block
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfDataPoints;
-(id)initWithMLBatchProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
-(id<MLBatchProvider>)batchProvider;
-(MLNeuralNetworkEngine *)nnEngine;
-(BOOL)useForPrediction;
@end

