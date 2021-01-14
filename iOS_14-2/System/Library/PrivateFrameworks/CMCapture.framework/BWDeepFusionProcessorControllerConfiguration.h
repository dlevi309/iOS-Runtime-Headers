/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputFormat;
	BOOL _semanticRenderingEnabled;
	int _stillImageFusionScheme;

}

@property (nonatomic,retain) BWVideoFormat * inputFormat;                //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;              //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
@property (assign,nonatomic) int stillImageFusionScheme;                 //@synthesize stillImageFusionScheme=_stillImageFusionScheme - In the implementation block
-(void)setStillImageFusionScheme:(int)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
-(BWVideoFormat *)inputFormat;
-(int)stillImageFusionScheme;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(void)dealloc;
@end

