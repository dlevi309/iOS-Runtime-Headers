/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDFPSCounter.h>

@class NSTimer;

@interface TSDFPSCACounter : TSDFPSCounter {

	unsigned mCAFrameCount;
	NSTimer* mTimer;

}
-(void)reset;
-(void)stopLoggingFPS;
-(void)p_updateFrameCount;
-(void)startLoggingFPS;
@end

