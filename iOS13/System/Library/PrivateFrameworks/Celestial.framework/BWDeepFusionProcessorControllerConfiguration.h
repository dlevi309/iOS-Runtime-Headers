/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _outputFormat;
	BOOL _semanticRenderingEnabled;

}

@property (nonatomic,retain) BWVideoFormat * outputFormat;               //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;              //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(BWVideoFormat *)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
@end

