/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPTimeMeasurement : NSObject {

	mach_timebase_info _timebase;
	unsigned long long _start;
	BOOL _started;
	double _elapsedTimeSeconds;

}

@property (readonly) double elapsedTimeSeconds;              //@synthesize elapsedTimeSeconds=_elapsedTimeSeconds - In the implementation block
-(id)init;
-(int)stop;
-(int)start;
-(void)reset;
-(double)elapsedTimeSeconds;
@end

