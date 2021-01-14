/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSMatrixRandomDistributionDescriptor : NSObject <NSCopying> {

	float _minimum;
	float _maximum;
	float _mean;
	float _standardDeviation;
	unsigned long long _distributionType;

}

@property (assign,nonatomic) unsigned long long distributionType;              //@synthesize distributionType=_distributionType - In the implementation block
@property (assign,nonatomic) float minimum;                                    //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) float maximum;                                    //@synthesize maximum=_maximum - In the implementation block
@property (assign,nonatomic) float mean;                                       //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) float standardDeviation;                          //@synthesize standardDeviation=_standardDeviation - In the implementation block
+(id)uniformDistributionDescriptorWithMinimum:(float)arg1 maximum:(float)arg2 ;
+(id)defaultDistributionDescriptor;
+(id)normalDistributionDescriptorWithMean:(float)arg1 standardDeviation:(float)arg2 ;
+(id)normalDistributionDescriptorWithMean:(float)arg1 standardDeviation:(float)arg2 minimum:(float)arg3 maximum:(float)arg4 ;
-(float)maximum;
-(float)minimum;
-(float)mean;
-(void)setMinimum:(float)arg1 ;
-(void)setMaximum:(float)arg1 ;
-(unsigned long long)distributionType;
-(void)setStandardDeviation:(float)arg1 ;
-(void)setMean:(float)arg1 ;
-(void)setDistributionType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)standardDeviation;
@end

