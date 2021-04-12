/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/


@protocol MPSNNPadding;
#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
@class NSMutableArray, MPSNNImageNode, NSString, MPSNNStateNode, NSArray;

@interface MPSNNFilterNode : NSObject {

	NSMutableArray* _sourceImages;
	NSMutableArray* _sourceStates;
	MPSNNImageNode* _resultImage;
	NSMutableArray* _resultStates;
	id<MPSNNPadding> _paddingPolicy;
	NSString* _label;

}

@property (nonatomic,readonly) MPSNNImageNode * resultImage;              //@synthesize resultImage=_resultImage - In the implementation block
@property (nonatomic,readonly) MPSNNStateNode * resultState; 
@property (nonatomic,readonly) NSArray * resultStates; 
@property (nonatomic,retain) id<MPSNNPadding> paddingPolicy;              //@synthesize paddingPolicy=_paddingPolicy - In the implementation block
@property (copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithSourceImages:(id)arg1 sourceStates:(id)arg2 paddingPolicy:(id)arg3 ;
-(FilterGraphNodeRef)newFilterNode;
-(id)gradientFilterWithSource:(id)arg1 ;
-(Class)gradientClass;
-(MPSNNStateNode *)resultState;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)gradientFiltersWithSources:(id)arg1 ;
-(id)sourceImages;
-(id)sourceStates;
-(id<MPSNNPadding>)paddingPolicy;
-(MPSNNImageNode *)resultImage;
-(id)resultStatesNoAllocate;
-(id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(/*^block*/id)arg2 ;
-(id)gradientFiltersWithSource:(id)arg1 ;
-(void)setPaddingPolicy:(id<MPSNNPadding>)arg1 ;
-(NSArray *)resultStates;
@end

