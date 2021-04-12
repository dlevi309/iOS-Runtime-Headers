/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputFormat;
	int _semanticRenderingVersion;
	int _semanticDevelopmentVersion;
	BOOL _redEyeReductionEnabled;

}

@property (nonatomic,retain) BWVideoFormat * inputFormat;                 //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) int semanticRenderingVersion;                //@synthesize semanticRenderingVersion=_semanticRenderingVersion - In the implementation block
@property (assign,nonatomic) int semanticDevelopmentVersion;              //@synthesize semanticDevelopmentVersion=_semanticDevelopmentVersion - In the implementation block
@property (assign,nonatomic) BOOL redEyeReductionEnabled;                 //@synthesize redEyeReductionEnabled=_redEyeReductionEnabled - In the implementation block
-(BWVideoFormat *)inputFormat;
-(int)semanticDevelopmentVersion;
-(int)semanticRenderingVersion;
-(void)setSemanticDevelopmentVersion:(int)arg1 ;
-(void)setSemanticRenderingVersion:(int)arg1 ;
-(BOOL)redEyeReductionEnabled;
-(void)setRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(void)dealloc;
@end

