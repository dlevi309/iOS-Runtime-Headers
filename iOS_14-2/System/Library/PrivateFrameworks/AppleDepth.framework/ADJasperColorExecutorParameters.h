/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADExecutorParameters.h>

@class ADJasperColorPipelineParameters;

@interface ADJasperColorExecutorParameters : ADExecutorParameters {

	BOOL _doTemporalConsistency;
	BOOL _useAlphaMapForTemporalConsistency;
	BOOL _doComputeNormals;
	ADJasperColorPipelineParameters* _pipelineParameters;
	unsigned long long _temporalConsistencyMethod;

}

@property (nonatomic,retain,readonly) ADJasperColorPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
@property (assign,nonatomic) BOOL doTemporalConsistency;                                                 //@synthesize doTemporalConsistency=_doTemporalConsistency - In the implementation block
@property (assign,nonatomic) BOOL useAlphaMapForTemporalConsistency;                                     //@synthesize useAlphaMapForTemporalConsistency=_useAlphaMapForTemporalConsistency - In the implementation block
@property (assign,nonatomic) BOOL doComputeNormals;                                                      //@synthesize doComputeNormals=_doComputeNormals - In the implementation block
@property (assign,nonatomic) unsigned long long temporalConsistencyMethod;                               //@synthesize temporalConsistencyMethod=_temporalConsistencyMethod - In the implementation block
-(ADJasperColorPipelineParameters *)pipelineParameters;
-(id)initForPipeline:(id)arg1 ;
-(void)setDoTemporalConsistency:(BOOL)arg1 ;
-(BOOL)doTemporalConsistency;
-(BOOL)useAlphaMapForTemporalConsistency;
-(void)setUseAlphaMapForTemporalConsistency:(BOOL)arg1 ;
-(BOOL)doComputeNormals;
-(void)setDoComputeNormals:(BOOL)arg1 ;
-(unsigned long long)temporalConsistencyMethod;
-(void)setTemporalConsistencyMethod:(unsigned long long)arg1 ;
@end

