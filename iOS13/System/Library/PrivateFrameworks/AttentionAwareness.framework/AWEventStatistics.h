/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate, NSMutableDictionary;

@interface AWEventStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _timerResumed;
	unsigned long long _lastLogTime;
	NSDate* _lastLogDate;
	NSMutableDictionary* _stats;

}
+(id)sharedStatistics;
-(id)init;
-(void)logEvent:(unsigned long long)arg1 ;
@end

