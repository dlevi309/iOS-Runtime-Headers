/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHImageManagerRequestTracer : NSObject
+(void)initialize;
+(id)_currentTimestampString;
+(void)_inq_recordRequestID:(long long)arg1 ;
+(void)_inq_trimToMostRecentImageManagerMessages;
+(int)requestIDFromTaskIdentifier:(id)arg1 ;
+(void)registerRequestID:(int)arg1 withAssetUUID:(id)arg2 ;
+(void)traceMessageForRequestID:(int)arg1 message:(id)arg2 ;
+(id)recentMessagesSummaryForAssetUUID:(id)arg1 ;
+(void)setTracingDisabled:(BOOL)arg1 ;
@end

