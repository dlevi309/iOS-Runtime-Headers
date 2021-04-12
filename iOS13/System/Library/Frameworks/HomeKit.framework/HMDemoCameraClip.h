/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraClip.h>

@class NSURL;

@interface HMDemoCameraClip : HMCameraClip {

	NSURL* _clipURL;

}

@property (copy,readonly) NSURL * clipURL;              //@synthesize clipURL=_clipURL - In the implementation block
-(id)initWithClipURL:(id)arg1 startDate:(id)arg2 duration:(double)arg3 significantEvents:(id)arg4 ;
-(id)initWithCameraProfile:(id)arg1 clipURL:(id)arg2 startDate:(id)arg3 duration:(double)arg4 significantEvents:(id)arg5 ;
-(NSURL *)clipURL;
@end

