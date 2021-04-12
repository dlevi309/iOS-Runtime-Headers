/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
*/


@interface BMCoreAnalyticsEvents : NSObject
+(void)sendBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3 ;
+(void)sendUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned)arg3 ;
+(void)sendAppLaunchEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(void)sendIntentEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(void)sendPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned)arg3 ;
+(void)sendUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3 ;
+(id)dictionaryWithUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3 ;
+(void)sendEvent:(id)arg1 payload:(id)arg2 ;
+(id)dictionaryWithAppLaunchEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(id)dictionaryWithIntentEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(id)dictionaryWithPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned)arg3 ;
+(id)dictionaryWithBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3 ;
+(id)dictionaryWithUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned)arg3 ;
@end

