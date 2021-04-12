/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
*/

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, MXSourceXPCPayload, NSObject;

@interface MXPowerlogService : MXService {

	NSMutableArray* _powerlogDataPaths;
	MXSourceXPCPayload* _unarchivedPowerlogData;
	NSObject*<OS_os_log> _MXPowerLogServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * powerlogDataPaths;                               //@synthesize powerlogDataPaths=_powerlogDataPaths - In the implementation block
@property (retain) MXSourceXPCPayload * unarchivedPowerlogData;                      //@synthesize unarchivedPowerlogData=_unarchivedPowerlogData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXPowerLogServiceLogHandle;                  //@synthesize MXPowerLogServiceLogHandle=_MXPowerLogServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedPowerlogService;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(BOOL)startService;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)stopService;
-(BOOL)metricsSupported;
-(BOOL)metricsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)_updateService;
-(NSMutableArray *)powerlogDataPaths;
-(void)setPowerlogDataPaths:(NSMutableArray *)arg1 ;
-(MXSourceXPCPayload *)unarchivedPowerlogData;
-(void)setUnarchivedPowerlogData:(MXSourceXPCPayload *)arg1 ;
-(NSObject*<OS_os_log>)MXPowerLogServiceLogHandle;
-(void)setMXPowerLogServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

