/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXFileUtil : NSObject
+(BOOL)shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 ;
+(BOOL)_shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 currentTime:(double)arg3 ;
+(double)cacheAgeForConsumerType:(unsigned char)arg1 ;
+(double)cacheAgeForConsumerType:(unsigned char)arg1 basePath:(id)arg2 ;
+(double)_cacheAgeForCache:(id)arg1 withCurrentTime:(double)arg2 ;
+(BOOL)cachesAreValidForConsumerSubTypes:(id)arg1 ;
+(BOOL)cachesAreValidForBasePath:(id)arg1 consumerSubTypes:(id)arg2 ;
@end

