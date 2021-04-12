/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol MPSCNNConvolutionDataSource <NSCopying,NSObject>
@optional
-(id*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(unsigned)weightsLayout;

@required
-(BOOL)load;
-(id)label;
-(unsigned)dataType;
-(void*)weights;
-(id)descriptor;
-(float*)biasTerms;
-(void)purge;

@end

