/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@protocol MPSCNNInstanceNormalizationDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels; 
@optional
+(BOOL)supportsSecureCoding;
-(BOOL)load;
-(void)encodeWithCoder:(id)arg1;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id)initWithCoder:(id)arg1;
-(float)epsilon;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg1 instanceNormalizationStateBatch:(id)arg2;
-(BOOL)updateGammaAndBetaWithInstanceNormalizationStateBatch:(id)arg1;
-(void)purge;

@required
-(float*)beta;
-(unsigned long long)numberOfFeatureChannels;
-(float*)gamma;
-(id)label;

@end

