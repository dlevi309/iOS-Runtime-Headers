/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricKitCore.framework/MetricKitCore
*/

#import <libobjc.A.dylib/MXSourceXPCServer.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, NSFileManager, NSXPCListener, NSString;

@interface MXSource : NSObject <MXSourceXPCServer, NSXPCListenerDelegate> {

	NSObject*<OS_os_log> _MXSourceLogHandle;
	NSFileManager* _fileManager;
	NSXPCListener* _xpcListener;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _iVarQueue;

}

@property (retain) NSObject*<OS_os_log> MXSourceLogHandle;                           //@synthesize MXSourceLogHandle=_MXSourceLogHandle - In the implementation block
@property (retain) NSFileManager * fileManager;                                      //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                            //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> iVarQueue;                 //@synthesize iVarQueue=_iVarQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSource;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)bundleIDFromPid:(int)arg1 ;
-(id)bundleIDFromURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)iVarQueue;
-(void)setIVarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_os_log>)MXSourceLogHandle;
-(void)writeMetricDataWithPayload:(id)arg1 ;
-(void)deliverDummyPayloadForClient:(id)arg1 ;
-(BOOL)validatePayload:(id)arg1 ;
-(id)setupSourceDirectoryForSource:(id)arg1 ;
-(BOOL)validatePowerlogData:(id)arg1 ;
-(void)setMXSourceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

