/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@class DenoiseRemixShaders;

@interface DenoiseRemixStageShared : NSObject {

	DenoiseRemixShaders* _denoiseShaders[2][2][2];

}
+(id)sharedInstance;
-(id)getShaders:(id)arg1 lumaFP16:(BOOL)arg2 chromaFP16:(BOOL)arg3 lGAAlgorithm:(int)arg4 ;
@end

