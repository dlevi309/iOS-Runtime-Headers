/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

