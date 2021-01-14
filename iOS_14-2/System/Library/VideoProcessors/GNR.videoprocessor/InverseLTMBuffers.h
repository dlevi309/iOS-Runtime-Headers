/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface InverseLTMBuffers : NSObject {

	id<MTLTexture> inverseLtmTex;
	id<MTLTexture> inverseGlobalLtmTex;
	id<MTLTexture> inverseGtcTex;

}
-(id)initWithMetal:(id)arg1 ;
-(int)setToneCurves:(ltmCurves*)arg1 ;
@end

