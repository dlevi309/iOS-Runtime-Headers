/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSCharacterSet, CVNLPCaptionRuntimeParameters;

@interface CVNLPCaptionPostProcessingHandler : NSObject {

	NSCharacterSet* _trimSet;
	CVNLPCaptionRuntimeParameters* _runtimeParameters;

}

@property (readonly) NSCharacterSet * trimSet;                                              //@synthesize trimSet=_trimSet - In the implementation block
@property (__weak,readonly) CVNLPCaptionRuntimeParameters * runtimeParameters;              //@synthesize runtimeParameters=_runtimeParameters - In the implementation block
-(NSCharacterSet *)trimSet;
-(id)_excludeGenderReplacements:(id)arg1 genderOption:(int)arg2 error:(id*)arg3 ;
-(id)_excludeGenderTriggers:(id)arg1 genderOption:(int)arg2 error:(id*)arg3 ;
-(id)_replacements:(id)arg1 genderOption:(int)arg2 ;
-(id)_checkForBlockingTokens:(id)arg1 visionObservations:(id)arg2 ;
-(id)_filterVisionObservations:(id)arg1 ;
-(CVNLPCaptionRuntimeParameters *)runtimeParameters;
-(BOOL)_checkAboveThreshold:(id)arg1 observationConfidence:(double)arg2 difference:(id*)arg3 ;
-(id)_checkForBlockingTokens:(id)arg1 blockingTokens:(id)arg2 ;
-(id)initWithOptions:(id)arg1 runtimeParameters:(id)arg2 ;
-(id)postProcessCaptions:(id)arg1 genderOption:(int)arg2 error:(id*)arg3 ;
-(id)postProcessCaptions:(id)arg1 visionObservations:(id)arg2 ;
@end

