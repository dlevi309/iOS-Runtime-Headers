/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@protocol MLBatchProvider;
@class MLNeuralNetworkEngine, NSString;

@interface _MLBatchDataSource : NSObject <ETDataProvider> {

	BOOL _useForPrediction;
	id<MLBatchProvider> _batchProvider;
	MLNeuralNetworkEngine* _nnEngine;

}

@property (nonatomic,readonly) id<MLBatchProvider> batchProvider;              //@synthesize batchProvider=_batchProvider - In the implementation block
@property (nonatomic,readonly) MLNeuralNetworkEngine * nnEngine;               //@synthesize nnEngine=_nnEngine - In the implementation block
@property (nonatomic,readonly) BOOL useForPrediction;                          //@synthesize useForPrediction=_useForPrediction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MLBatchProvider>)batchProvider;
-(BOOL)useForPrediction;
-(id)initWithMLBatchProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)numberOfDataPoints;
-(MLNeuralNetworkEngine *)nnEngine;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
@end

