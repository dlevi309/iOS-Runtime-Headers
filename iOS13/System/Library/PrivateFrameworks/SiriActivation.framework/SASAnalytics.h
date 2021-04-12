/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface SASAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _analyticsEventQueue;
	BOOL _shouldLogAnalyticsEvents;
	NSMutableArray* _pendingAnalyticsEventQueue;

}

@property (assign,nonatomic) BOOL shouldLogAnalyticsEvents;                            //@synthesize shouldLogAnalyticsEvents=_shouldLogAnalyticsEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAnalyticsEventQueue;              //@synthesize pendingAnalyticsEventQueue=_pendingAnalyticsEventQueue - In the implementation block
+(id)new;
+(id)analytics;
-(id)init;
-(id)_init;
-(void)_enqueueAnalyticsEvent:(id)arg1 ;
-(BOOL)shouldLogAnalyticsEvents;
-(void)flushPendingAnalyticsEventQueue;
-(NSMutableArray *)pendingAnalyticsEventQueue;
-(void)setPendingAnalyticsEventQueue:(NSMutableArray *)arg1 ;
-(void)enqueueCurrentAnalyticsEventWithType:(long long)arg1 context:(id)arg2 ;
-(void)setShouldLogAnalyticsEvents:(BOOL)arg1 ;
@end

