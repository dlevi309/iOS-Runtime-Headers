/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)debugQuickLookObject;
-(id)debugDescription;
-(id)initWithSourceImages:(id)arg1 sourceStates:(id)arg2 paddingPolicy:(id)arg3 ;
-(FilterGraphNodeRef)newFilterNode;
-(id)gradientFilterWithSource:(id)arg1 ;
-(Class)gradientClass;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)gradientFiltersWithSources:(id)arg1 ;
-(MPSNNImageNode *)resultImage;
-(id)sourceStates;
-(void)setLabel:(NSString *)arg1 ;
-(id)sourceImages;
-(id<MPSNNPadding>)paddingPolicy;
-(id)resultStatesNoAllocate;
-(id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(/*^block*/id)arg2 ;
-(id)gradientFiltersWithSource:(id)arg1 ;
-(void)setPaddingPolicy:(id<MPSNNPadding>)arg1 ;
-(NSArray *)resultStates;
-(MPSNNStateNode *)resultState;
-(NSString *)label;
-(void)dealloc;
@end

