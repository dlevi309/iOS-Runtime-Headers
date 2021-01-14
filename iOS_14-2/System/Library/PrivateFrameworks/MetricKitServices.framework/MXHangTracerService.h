/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
*/

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MXHangTracerService : MXService {

	NSMutableArray* _hangTracerDataPaths;
	NSMutableArray* _unarchivedHangTracerData;
	NSObject*<OS_os_log> _MXHangTracerServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * hangTracerDataPaths;                             //@synthesize hangTracerDataPaths=_hangTracerDataPaths - In the implementation block
@property (retain) NSMutableArray * unarchivedHangTracerData;                        //@synthesize unarchivedHangTracerData=_unarchivedHangTracerData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXHangTracerServiceLogHandle;                //@synthesize MXHangTracerServiceLogHandle=_MXHangTracerServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedHangTracerService;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(BOOL)startService;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)stopService;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)_updateService;
-(void)unarchiveHangTracerDataForDateString:(id)arg1 ;
-(NSMutableArray *)hangTracerDataPaths;
-(void)setHangTracerDataPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unarchivedHangTracerData;
-(void)setUnarchivedHangTracerData:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)MXHangTracerServiceLogHandle;
-(void)setMXHangTracerServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end
