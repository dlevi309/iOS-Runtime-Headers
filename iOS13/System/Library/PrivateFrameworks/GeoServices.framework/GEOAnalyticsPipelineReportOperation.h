/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOAnalyticsPipelineRemoteProxy;

@interface GEOAnalyticsPipelineReportOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	id _transaction;
	NSObject*<OS_dispatch_queue> _runQueue;
	GEOAnalyticsPipelineRemoteProxy* _remoteProxy;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completionBlock;

}
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_completeOperation;
@end

