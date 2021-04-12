/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADExecutorParameters.h>

@class ADJasperColorPipelineParameters;

@interface ADJasperColorExecutorParameters : ADExecutorParameters {

	BOOL _doTemporalConsistency;
	BOOL _doComputeNormals;
	ADJasperColorPipelineParameters* _pipelineParameters;

}

@property (nonatomic,retain,readonly) ADJasperColorPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
@property (assign,nonatomic) BOOL doTemporalConsistency;                                                 //@synthesize doTemporalConsistency=_doTemporalConsistency - In the implementation block
@property (assign,nonatomic) BOOL doComputeNormals;                                                      //@synthesize doComputeNormals=_doComputeNormals - In the implementation block
-(ADJasperColorPipelineParameters *)pipelineParameters;
-(id)initForPipeline:(id)arg1 ;
-(BOOL)doTemporalConsistency;
-(void)setDoTemporalConsistency:(BOOL)arg1 ;
-(BOOL)doComputeNormals;
-(void)setDoComputeNormals:(BOOL)arg1 ;
@end

