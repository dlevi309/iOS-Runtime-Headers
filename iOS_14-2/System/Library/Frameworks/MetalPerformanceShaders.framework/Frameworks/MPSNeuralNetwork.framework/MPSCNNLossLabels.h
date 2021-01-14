/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@class NSData, MPSImage;

@interface MPSCNNLossLabels : MPSState {

	MPSImageCoordinate _lossImageSize;
	BOOL _isScalarLoss;
	NSData* _userData;
	unsigned long long _userDataLayout;
	unsigned long long _numFeatureChannels_labels;
	unsigned long long _numFeatureChannels_loss;
	MPSImage* _userLabelsImage;
	MPSImage* _userWeightsImage;
	BOOL _hasStateWeights;
	BOOL _computeNonZeroWeights;

}
-(id)init;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsImage:(id)arg3 weightsImage:(id)arg4 ;
-(id)labelsImage;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2 ;
-(id)weightsImage;
-(id)lossImage;
-(void)dealloc;
@end

