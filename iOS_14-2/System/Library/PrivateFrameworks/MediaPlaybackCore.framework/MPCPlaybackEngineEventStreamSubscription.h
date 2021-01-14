/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlaybackEngineEventStreamSubscription <NSObject>
@required
-(void)flushEventsWithCompletion:(/*^block*/id)arg1;
-(void)subscribeToEventType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)subscribeToEventType:(id)arg1 options:(unsigned long long)arg2 handler:(/*^block*/id)arg3;
-(void)cancelSubscription;

@end

