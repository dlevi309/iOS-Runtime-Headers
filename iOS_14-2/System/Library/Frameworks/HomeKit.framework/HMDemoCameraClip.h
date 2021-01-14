/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraClip.h>

@class NSURL;

@interface HMDemoCameraClip : HMCameraClip {

	NSURL* _clipURL;

}

@property (copy,readonly) NSURL * clipURL;              //@synthesize clipURL=_clipURL - In the implementation block
-(NSURL *)clipURL;
-(id)initWithClipURL:(id)arg1 startDate:(id)arg2 duration:(double)arg3 significantEvents:(id)arg4 ;
-(id)initWithCameraProfile:(id)arg1 clipURL:(id)arg2 startDate:(id)arg3 duration:(double)arg4 significantEvents:(id)arg5 ;
@end

