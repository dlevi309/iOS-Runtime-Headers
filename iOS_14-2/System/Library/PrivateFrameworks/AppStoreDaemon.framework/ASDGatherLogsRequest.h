/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDGatherLogsRequestOptions;

@interface ASDGatherLogsRequest : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _connection;
	ASDGatherLogsRequestOptions* _options;

}
+(long long)requestType;
+(void)_clearHARFiles;
+(id)_harLogsDirectory;
+(void)clearHARFiles;
-(id)initWithOptions:(id)arg1 ;
-(void)_sendRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendHarFileRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendGatherRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_combineAllLogs;
-(void)_combineLogs:(id)arg1 toDir:(id)arg2 ;
-(void)_copyDB:(id)arg1 fullSourcePath:(id)arg2 toDir:(id)arg3 datbaseBase:(id)arg4 ;
-(id)_appstoredContainerPath;
-(id)_zippedDataForURL:(id)arg1 ;
-(id)_createCombinedHarFile;
-(void)createLogFileArchiveWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)createHARFileArchiveWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)gatherLogsWithCompletionBlock:(/*^block*/id)arg1 ;
@end

