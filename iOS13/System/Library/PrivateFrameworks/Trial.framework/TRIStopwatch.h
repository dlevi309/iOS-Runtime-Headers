/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


#import <Trial/Trial-Structs.h>
@interface TRIStopwatch : NSObject {

	unsigned long long _start_time;
	mach_timebase_info _time_info;

}
+(id)start;
-(id)init;
-(unsigned)elapsed_ms;
@end

