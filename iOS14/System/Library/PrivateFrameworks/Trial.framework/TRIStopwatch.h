/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

