/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@protocol MPSCNNConvolutionDataSource <NSCopying,NSObject>
@optional
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2;
-(unsigned)kernelWeightsDataType;
-(unsigned)weightsLayout;

@required
-(unsigned)dataType;
-(BOOL)load;
-(id)descriptor;
-(void*)weights;
-(float*)biasTerms;
-(id)label;
-(void)purge;

@end

