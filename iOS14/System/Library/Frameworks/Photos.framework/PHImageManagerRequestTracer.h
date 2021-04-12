/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHImageManagerRequestTracer : NSObject
+(void)initialize;
+(void)_inq_recordRequestID:(long long)arg1 ;
+(id)_currentTimestampString;
+(void)_inq_trimToMostRecentImageManagerMessages;
+(int)requestIDFromTaskIdentifier:(id)arg1 ;
+(void)setTracingDisabled:(BOOL)arg1 ;
+(void)registerRequestID:(int)arg1 withAssetUUID:(id)arg2 ;
+(void)traceMessageForRequestID:(int)arg1 message:(id)arg2 ;
+(id)recentMessagesSummaryForAssetUUID:(id)arg1 ;
@end

