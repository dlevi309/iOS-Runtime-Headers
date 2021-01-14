/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, AXDispatchTimer;

@interface AXRedirectedEventDetector : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _recentEvents;
	AXDispatchTimer* _flushEventsTimer;

}

@property (nonatomic,retain) NSMutableArray * recentEvents;                   //@synthesize recentEvents=_recentEvents - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * flushEventsTimer;              //@synthesize flushEventsTimer=_flushEventsTimer - In the implementation block
+(void)flushEvents;
+(void)setFlushEventsTimerDelay:(double)arg1 ;
-(void)addEvent:(id)arg1 ;
-(id)init;
-(NSMutableArray *)recentEvents;
-(void)_flushEventsIfNecessary;
-(AXDispatchTimer *)flushEventsTimer;
-(double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(BOOL)isRedirectedEvent:(id)arg1 ;
-(void)setRecentEvents:(NSMutableArray *)arg1 ;
-(void)setFlushEventsTimer:(AXDispatchTimer *)arg1 ;
@end

