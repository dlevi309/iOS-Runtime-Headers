/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXActionResponseCache : NSObject
+(BOOL)unexpiredCacheExistsForConsumerSubType:(unsigned char)arg1 cacheAgeOut:(double*)arg2 ;
+(void)restartFeedbackTimers;
+(id)retrieveActionResponseWithConsumerSubType:(unsigned char)arg1 cacheAgeOut:(double*)arg2 unlink:(BOOL)arg3 ;
+(BOOL)storeActionResponseAndStartTimer:(id)arg1 ;
+(BOOL)storeActionResponse:(id)arg1 ;
+(id)retrieveActionResponseFromCachePath:(id)arg1 maxValidCacheAge:(double)arg2 cacheAgeOut:(double*)arg3 unlink:(BOOL)arg4 ;
+(BOOL)storeActionResponse:(id)arg1 cachePath:(id)arg2 ;
@end

