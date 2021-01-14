/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADPipelineParameters.h>

@class ADJasperPointCloudFilterParamaters;

@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters {

	ADJasperPointCloudFilterParamaters* _pointCloudFilter;
	ADJasperPointCloudFilterParamaters* _pointCloudFilterForTransformCorrection;

}

@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilter;                                    //@synthesize pointCloudFilter=_pointCloudFilter - In the implementation block
@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilterForTransformCorrection;              //@synthesize pointCloudFilterForTransformCorrection=_pointCloudFilterForTransformCorrection - In the implementation block
-(id)init;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilter;
-(void)setPointCloudFilter:(ADJasperPointCloudFilterParamaters *)arg1 ;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilterForTransformCorrection;
-(void)setPointCloudFilterForTransformCorrection:(ADJasperPointCloudFilterParamaters *)arg1 ;
@end

