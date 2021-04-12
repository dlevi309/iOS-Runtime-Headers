/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADPipelineParameters.h>

@class ADJasperPointCloudFilterParamaters, ADAggregationParameters;

@interface ADJasperColorPipelineParameters : ADPipelineParameters {

	float _confidenceBucketingLowThreshold;
	float _confidenceBucketingHighThreshold;
	float _defaultAlphaForDepthWarping;
	ADJasperPointCloudFilterParamaters* _pointCloudFilter;
	ADAggregationParameters* _aggregationParameters;
	unsigned long long _confidenceUnits;

}

@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilter;              //@synthesize pointCloudFilter=_pointCloudFilter - In the implementation block
@property (nonatomic,retain) ADAggregationParameters * aggregationParameters;                    //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
@property (assign,nonatomic) unsigned long long confidenceUnits;                                 //@synthesize confidenceUnits=_confidenceUnits - In the implementation block
@property (assign,nonatomic) float confidenceBucketingLowThreshold;                              //@synthesize confidenceBucketingLowThreshold=_confidenceBucketingLowThreshold - In the implementation block
@property (assign,nonatomic) float confidenceBucketingHighThreshold;                             //@synthesize confidenceBucketingHighThreshold=_confidenceBucketingHighThreshold - In the implementation block
@property (assign,nonatomic) float defaultAlphaForDepthWarping;                                  //@synthesize defaultAlphaForDepthWarping=_defaultAlphaForDepthWarping - In the implementation block
-(id)init;
-(ADAggregationParameters *)aggregationParameters;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilter;
-(void)setPointCloudFilter:(ADJasperPointCloudFilterParamaters *)arg1 ;
-(void)setAggregationParameters:(ADAggregationParameters *)arg1 ;
-(unsigned long long)confidenceUnits;
-(void)setConfidenceUnits:(unsigned long long)arg1 ;
-(float)confidenceBucketingLowThreshold;
-(void)setConfidenceBucketingLowThreshold:(float)arg1 ;
-(float)confidenceBucketingHighThreshold;
-(void)setConfidenceBucketingHighThreshold:(float)arg1 ;
-(float)defaultAlphaForDepthWarping;
-(void)setDefaultAlphaForDepthWarping:(float)arg1 ;
@end

