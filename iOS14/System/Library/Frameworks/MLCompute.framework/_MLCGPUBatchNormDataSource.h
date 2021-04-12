/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSCNNBatchNormalizationDataSource.h>

@class MLCTensor, NSString;

@interface _MLCGPUBatchNormDataSource : NSObject <MPSCNNBatchNormalizationDataSource> {

	float _varianceEpsilon;
	unsigned long long _channels;
	MLCTensor* _means;
	MLCTensor* _variances;
	MLCTensor* _betas;
	MLCTensor* _gammas;

}

@property (nonatomic,readonly) unsigned long long channels;               //@synthesize channels=_channels - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * means;                  //@synthesize means=_means - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * variances;              //@synthesize variances=_variances - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * betas;                  //@synthesize betas=_betas - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * gammas;                 //@synthesize gammas=_gammas - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                     //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)datasourceWithChannels:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 epsilon:(float)arg6 ;
-(BOOL)load;
-(float*)mean;
-(float*)beta;
-(MLCTensor *)betas;
-(MLCTensor *)means;
-(float*)variance;
-(MLCTensor *)gammas;
-(unsigned long long)numberOfFeatureChannels;
-(unsigned long long)channels;
-(float)epsilon;
-(float*)gamma;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
-(float)varianceEpsilon;
-(id)initWithChannels:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 epsilon:(float)arg6 ;
-(MLCTensor *)variances;
@end

