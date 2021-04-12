/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADExecutorParameters.h>

@class ADJasperColorStillsPipelineParameters;

@interface ADJasperColorStillsExecutorParameters : ADExecutorParameters {

	BOOL _performJasperToColorTransformCorrection;
	ADJasperColorStillsPipelineParameters* _pipelineParameters;

}

@property (nonatomic,retain,readonly) ADJasperColorStillsPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
@property (assign,nonatomic) BOOL performJasperToColorTransformCorrection;                                     //@synthesize performJasperToColorTransformCorrection=_performJasperToColorTransformCorrection - In the implementation block
-(ADJasperColorStillsPipelineParameters *)pipelineParameters;
-(id)initForPipeline:(id)arg1 ;
-(BOOL)performJasperToColorTransformCorrection;
-(void)setPerformJasperToColorTransformCorrection:(BOOL)arg1 ;
@end

