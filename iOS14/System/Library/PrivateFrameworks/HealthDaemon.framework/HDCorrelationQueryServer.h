/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

