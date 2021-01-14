/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface DDScanServerDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _reportQueue;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	BOOL _memoryWarningInProgress;
	NSMutableDictionary* _scanners;
	BOOL _tearDownRequested;
	unsigned long long _jobIdentifier;

}
-(id)init;
-(void)cancelJob:(long long)arg1 ;
-(id)reportQueue;
-(id)scannerListForConfiguration:(id)arg1 ;
-(BOOL)reachedMaxSimultaneousTask;
-(long long)emptyIdentifier;
-(long long)scannerConf:(id)arg1 sync:(BOOL)arg2 shortTask:(BOOL)arg3 runTask:(/*^block*/id)arg4 ;
-(void)recycleScanner:(id)arg1 fromList:(id)arg2 sameQueue:(BOOL)arg3 ;
-(void)dealloc;
@end

