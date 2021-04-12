/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@class NSData, MPSImage;

@interface MPSCNNLossLabels : MPSState {

	MPSImageCoordinate _lossImageSize;
	BOOL _isScalarLoss;
	unsigned long long _numNonZeroWeights;
	NSData* _userData;
	unsigned long long _userDataLayout;
	unsigned long long _numFeatureChannels_labels;
	unsigned long long _numFeatureChannels_loss;
	MPSImage* _userLabelsImage;
	MPSImage* _userWeightsImage;

}
-(id)init;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsImage:(id)arg3 weightsImage:(id)arg4 ;
-(id)lossImage;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2 ;
-(id)labelsImage;
-(id)weightsImage;
@end

