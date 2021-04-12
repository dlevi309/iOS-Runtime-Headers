/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat, BWInferenceScheduler;

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputFormat;
	unsigned _figThreadPriority;
	BOOL _semanticRenderingEnabled;
	BOOL _redEyeReductionEnabled;
	BWInferenceScheduler* _inferenceScheduler;

}

@property (nonatomic,retain) BWVideoFormat * inputFormat;                            //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                             //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;                          //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
@property (assign,nonatomic) BOOL redEyeReductionEnabled;                            //@synthesize redEyeReductionEnabled=_redEyeReductionEnabled - In the implementation block
@property (nonatomic,retain) BWInferenceScheduler * inferenceScheduler;              //@synthesize inferenceScheduler=_inferenceScheduler - In the implementation block
-(void)dealloc;
-(BOOL)redEyeReductionEnabled;
-(BWVideoFormat *)inputFormat;
-(void)setFigThreadPriority:(unsigned)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
-(void)setInferenceScheduler:(BWInferenceScheduler *)arg1 ;
-(void)setRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(unsigned)figThreadPriority;
-(BWInferenceScheduler *)inferenceScheduler;
@end

