/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@class RegPyrFusionShaders;

@interface RegPyrFusionShared : NSObject {

	RegPyrFusionShaders* _shaders;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)getSharedInstanceOrRelease:(BOOL)arg1 ;
-(id)getShaders:(id)arg1 ;
@end

