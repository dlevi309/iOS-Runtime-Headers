/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_completeOperation;
-(id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

