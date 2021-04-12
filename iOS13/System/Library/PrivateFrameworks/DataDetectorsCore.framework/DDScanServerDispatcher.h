/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancelJob:(long long)arg1 ;
-(id)reportQueue;
-(id)scannerListForConfiguration:(id)arg1 ;
-(BOOL)reachedMaxSimultaneousTask;
-(long long)emptyIdentifier;
-(long long)scannerConf:(id)arg1 sync:(BOOL)arg2 shortTask:(BOOL)arg3 runTask:(/*^block*/id)arg4 ;
-(void)recycleScanner:(id)arg1 fromList:(id)arg2 sameQueue:(BOOL)arg3 ;
@end

