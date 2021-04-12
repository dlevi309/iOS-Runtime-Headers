/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@protocol MPSCNNBatchNormalizationDataSource <NSObject,NSCopying>
@optional
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2;
-(id)initWithCoder:(id)arg1;
-(id)updateMeanAndVarianceWithCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2;
-(BOOL)updateGammaAndBetaWithBatchNormalizationState:(id)arg1;
-(BOOL)updateMeanAndVarianceWithBatchNormalizationState:(id)arg1;
-(float)epsilon;

@required
-(BOOL)load;
-(float*)mean;
-(float*)beta;
-(float*)variance;
-(unsigned long long)numberOfFeatureChannels;
-(float*)gamma;
-(id)label;
-(void)purge;

@end

