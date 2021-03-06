/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSCNNArithmetic.h>

@interface MPSNNCompare : MPSCNNArithmetic {

	float _threshold;
	unsigned long long _comparisonType;

}

@property (assign,nonatomic) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (assign,nonatomic) float threshold;                                //@synthesize threshold=_threshold - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(float)threshold;
-(void)setComparisonType:(unsigned long long)arg1 ;
-(unsigned long long)comparisonType;
-(void)setThreshold:(float)arg1 ;
@end

