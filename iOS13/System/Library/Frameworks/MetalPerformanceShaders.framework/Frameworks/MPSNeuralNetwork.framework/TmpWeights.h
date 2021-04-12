/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _parentObj;
	MPSCNNConvolutionDescriptor* _convDesc;
	BOOL _hasBias;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned)dataType;
-(void*)weights;
-(id)descriptor;
-(float*)biasTerms;
-(void)purge;
-(id)initWithWeights:(id)arg1 useBias:(BOOL)arg2 desc:(id)arg3 ;
@end

