/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

