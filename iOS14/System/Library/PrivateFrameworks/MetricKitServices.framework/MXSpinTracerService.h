/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
*/

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MXSpinTracerService : MXService {

	NSMutableArray* _spinTracerDataPaths;
	NSMutableArray* _unarchivedSpinTracerData;
	NSObject*<OS_os_log> _MXSpinTracerServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * spinTracerDataPaths;                             //@synthesize spinTracerDataPaths=_spinTracerDataPaths - In the implementation block
@property (retain) NSMutableArray * unarchivedSpinTracerData;                        //@synthesize unarchivedSpinTracerData=_unarchivedSpinTracerData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXSpinTracerServiceLogHandle;                //@synthesize MXSpinTracerServiceLogHandle=_MXSpinTracerServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedSpinTracerService;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(BOOL)startService;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)stopService;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)_updateService;
-(void)unarchiveSpinTracerDataForDateString:(id)arg1 ;
-(NSMutableArray *)spinTracerDataPaths;
-(void)setSpinTracerDataPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unarchivedSpinTracerData;
-(void)setUnarchivedSpinTracerData:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)MXSpinTracerServiceLogHandle;
-(void)setMXSpinTracerServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

