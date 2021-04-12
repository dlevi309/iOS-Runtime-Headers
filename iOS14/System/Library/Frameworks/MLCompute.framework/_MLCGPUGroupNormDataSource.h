/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSCNNGroupNormalizationDataSource.h>

@class MLCTensor, NSString;

@interface _MLCGPUGroupNormDataSource : NSObject <MPSCNNGroupNormalizationDataSource> {

	float _varianceEpsilon;
	unsigned long long _numberOfFeatureChannels;
	unsigned long long _numberOfGroups;
	MLCTensor* _betas;
	MLCTensor* _gammas;

}

@property (nonatomic,__weak,readonly) MLCTensor * betas;                                //@synthesize betas=_betas - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * gammas;                               //@synthesize gammas=_gammas - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                                   //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels;              //@synthesize numberOfFeatureChannels=_numberOfFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfGroups;                         //@synthesize numberOfGroups=_numberOfGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)datasourceWithChannels:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 epsilon:(float)arg5 ;
-(BOOL)load;
-(float*)beta;
-(MLCTensor *)betas;
-(MLCTensor *)gammas;
-(unsigned long long)numberOfFeatureChannels;
-(float)epsilon;
-(void)setNumberOfGroups:(unsigned long long)arg1 ;
-(float*)gamma;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
-(unsigned long long)numberOfGroups;
-(id)initWithChannels:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 epsilon:(float)arg5 ;
-(float)varianceEpsilon;
@end

