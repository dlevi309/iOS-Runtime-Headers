/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKMultiTypeQueryCursor;

@interface HDMultiTypeSampleQueryServer : HDQueryServer {

	unsigned long long _deliveredResultCount;
	HKMultiTypeQueryCursor* _queryCursor;
	unsigned long long _limit;

}
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(BOOL)supportsAnchorBasedAuthorization;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_handleBatchedQueryResult:(long long)arg1 error:(id)arg2 ;
-(void)_queue_deliverSamples:(id)arg1 queryCursor:(id)arg2 deliverResults:(BOOL)arg3 ;
-(long long)batchObjectsWithError:(id*)arg1 batchHandler:(/*^block*/id)arg2 ;
-(id)queryCursorWithState:(id)arg1 ;
-(id)queryClient;
-(BOOL)isQueryingForHealthRecordsTypes;
@end

