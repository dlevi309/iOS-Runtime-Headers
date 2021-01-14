/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@class FuseRemixShaders;

@interface FusionRemixStageShared : NSObject {

	FuseRemixShaders* _fuseRemixShaders[4][2][2][2][2];

}
+(id)sharedInstance;
-(id)getShaders:(id)arg1 fusionType:(int)arg2 fp16:(BOOL)arg3 staticOIS:(BOOL)arg4 reduceOisGhosting:(BOOL)arg5 fusionAlignment:(int)arg6 ;
@end

