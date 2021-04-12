/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class FuseRemixShaders;

@interface FusionRemixStageShared : NSObject {

	FuseRemixShaders* _fuseRemixShaders[2];

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)getSharedInstanceOrRelease:(BOOL)arg1 ;
-(id)getShaders:(id)arg1 fp16:(BOOL)arg2 ;
@end

