/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) BOOL started;                           //@synthesize started=_started - In the implementation block
-(id)init;
-(int)start;
-(BOOL)started;
-(int)stop;
-(double)elapsedTimeSeconds;
-(void)reset;
@end

