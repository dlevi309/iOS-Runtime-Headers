/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADPipelineParameters.h>

@class ADJasperPointCloudFilterParamaters, ADAggregationParameters;

@interface ADJasperColorPipelineParameters : ADPipelineParameters {

	ADJasperPointCloudFilterParamaters* _pointCloudFilter;
	ADAggregationParameters* _aggregationParameters;

}

@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilter;              //@synthesize pointCloudFilter=_pointCloudFilter - In the implementation block
@property (nonatomic,retain) ADAggregationParameters * aggregationParameters;                    //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
-(id)init;
-(ADAggregationParameters *)aggregationParameters;
-(void)setAggregationParameters:(ADAggregationParameters *)arg1 ;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilter;
-(void)setPointCloudFilter:(ADJasperPointCloudFilterParamaters *)arg1 ;
@end

