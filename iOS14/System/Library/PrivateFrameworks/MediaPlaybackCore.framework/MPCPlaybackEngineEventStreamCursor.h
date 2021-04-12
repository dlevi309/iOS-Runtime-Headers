/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlaybackEngineEventStreamCursor <NSObject>
@required
-(id)findPreviousEventWithType:(id)arg1 matchingPayload:(id)arg2;
-(id)findPreviousEventWithTypes:(id)arg1 matchingPayload:(id)arg2;
-(id)cursorUntilEvent:(id)arg1;
-(long long)countOfPreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2;
-(void)enumeratePreviousEventsWithType:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)cursorFromEvent:(id)arg1 untilEvent:(id)arg2;
-(void)enumeratePreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(void)enumeratePreviousEventsWithTypes:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(long long)countOfPreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2;
-(void)enumeratePreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 usingBlock:(/*^block*/id)arg3;

@end

