/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADExecutorParameters.h>

@class ADMonocularPipelineParameters;

@interface ADMonocularExecutorParameters : ADExecutorParameters {

	ADMonocularPipelineParameters* _pipelineParameters;

}

@property (nonatomic,retain,readonly) ADMonocularPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(ADMonocularPipelineParameters *)pipelineParameters;
-(id)initForPipeline:(id)arg1 ;
@end

