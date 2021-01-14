/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
*/

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MXReportCrashService : MXService {

	NSMutableArray* _reportCrashDataPaths;
	NSMutableArray* _unarchivedReportCrashData;
	NSObject*<OS_os_log> _MXReportCrashServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * reportCrashDataPaths;                            //@synthesize reportCrashDataPaths=_reportCrashDataPaths - In the implementation block
@property (retain) NSMutableArray * unarchivedReportCrashData;                       //@synthesize unarchivedReportCrashData=_unarchivedReportCrashData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXReportCrashServiceLogHandle;               //@synthesize MXReportCrashServiceLogHandle=_MXReportCrashServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedReportCrashService;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(BOOL)startService;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)stopService;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)_updateService;
-(void)unarchiveReportCrashDataForDateString:(id)arg1 ;
-(NSMutableArray *)reportCrashDataPaths;
-(void)setReportCrashDataPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unarchivedReportCrashData;
-(void)setUnarchivedReportCrashData:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)MXReportCrashServiceLogHandle;
-(void)setMXReportCrashServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

