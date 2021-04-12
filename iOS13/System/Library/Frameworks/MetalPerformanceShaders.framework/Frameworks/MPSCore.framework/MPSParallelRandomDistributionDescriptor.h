/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSParallelRandomDistributionDescriptor : NSObject <NSCopying> {

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
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)minimum;
-(void)setMinimum:(float)arg1 ;
-(float)maximum;
-(void)setMaximum:(float)arg1 ;
-(float)standardDeviation;
-(void)setStandardDeviation:(float)arg1 ;
-(float)mean;
-(void)setMean:(float)arg1 ;
-(unsigned long long)distributionType;
-(void)setDistributionType:(unsigned long long)arg1 ;
@end

