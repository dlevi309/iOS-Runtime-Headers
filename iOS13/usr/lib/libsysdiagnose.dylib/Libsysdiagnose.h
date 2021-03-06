/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libsysdiagnose.dylib
*/


#import <libsysdiagnose.dylib/libsysdiagnose.dylib-Structs.h>
@interface Libsysdiagnose : NSObject
+(id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 ;
+(id)setupConnection;
+(id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 ;
+(BOOL)isSysdiagnoseInProgressWithError:(id*)arg1 ;
+(BOOL)cancelActiveSysdiagnoseWithError:(id*)arg1 ;
+(int)addErrorString:(id)arg1 WithCode:(id)arg2 forError:(id*)arg3 ;
+(BOOL)verifyReply:(id)arg1 withExpectedType:(xpc_type_sRef)arg2 forError:(id*)arg3 ;
+(void)createMetrics:(id*)arg1 fromResponse:(id)arg2 ;
+(id)getSysdiagnoseCrashLog;
+(id)createSysdiagnoseRequest:(id)arg1 ;
+(id)sendSysdiagnoseRequest:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(/*^block*/id)arg4 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(/*^block*/id)arg4 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressCallback:(/*^block*/id)arg4 ;
+(id)fetchRemoteDiagnosticIDsWithError:(id*)arg1 ;
+(void)sysdiagnoseWithMetadata:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 andProgressHandler:(/*^block*/id)arg3 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 withProgressHandler:(/*^block*/id)arg3 ;
+(id)fetchDiagnosticIDFromDeviceSource:(unsigned long long)arg1 WithMaxCount:(unsigned long long)arg2 withError:(id*)arg3 ;
@end

