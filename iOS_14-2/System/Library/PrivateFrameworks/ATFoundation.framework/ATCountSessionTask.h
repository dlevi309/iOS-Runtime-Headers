/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <AirTraffic/ATSessionTask.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface ATCountSessionTask : ATSessionTask {

	unsigned long long _maxCount;
	unsigned long long _count;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)start;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
@end

