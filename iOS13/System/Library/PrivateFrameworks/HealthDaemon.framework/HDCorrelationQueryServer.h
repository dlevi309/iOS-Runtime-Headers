/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSDictionary;

@interface HDCorrelationQueryServer : HDBatchedQueryServer {

	BOOL _permitPartiallyFilteredCorrelations;
	BOOL _suspended;
	NSDictionary* _dataFilters;

}

@property (nonatomic,readonly) NSDictionary * dataFilters;              //@synthesize dataFilters=_dataFilters - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(NSDictionary *)dataFilters;
@end

