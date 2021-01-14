/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKMultiTypeQueryCursor;

@interface HDMultiTypeSampleQueryServer : HDQueryServer {

	unsigned long long _deliveredResultCount;
	HKMultiTypeQueryCursor* _queryCursor;
	unsigned long long _limit;

}
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(BOOL)supportsAnchorBasedAuthorization;
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_handleBatchedQueryResult:(long long)arg1 error:(id)arg2 ;
-(void)_queue_deliverSamples:(id)arg1 queryCursor:(id)arg2 deliverResults:(BOOL)arg3 ;
-(long long)batchObjectsWithError:(id*)arg1 batchHandler:(/*^block*/id)arg2 ;
-(id)queryCursorWithState:(id)arg1 ;
-(id)queryClient;
-(BOOL)isQueryingForHealthRecordsTypes;
@end

