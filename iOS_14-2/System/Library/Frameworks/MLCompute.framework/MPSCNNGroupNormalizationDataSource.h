/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@protocol MPSCNNGroupNormalizationDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels; 
@property (assign,nonatomic) unsigned long long numberOfGroups; 
@optional
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id)initWithCoder:(id)arg1;
-(float)epsilon;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg1 groupNormalizationStateBatch:(id)arg2;
-(BOOL)updateGammaAndBetaWithGroupNormalizationStateBatch:(id)arg1;

@required
-(float*)beta;
-(unsigned long long)numberOfFeatureChannels;
-(void)setNumberOfGroups:(unsigned long long)arg1;
-(float*)gamma;
-(id)label;
-(unsigned long long)numberOfGroups;

@end

