/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <Foundation/NSOperation.h>

@class NSURLSessionDownloadTask, SFStartNetworkSearchFeedback, NSURLRequest;

@interface STSImageDownloadOperation : NSOperation {

	NSURLSessionDownloadTask* _task;
	/*^block*/id _begin;
	/*^block*/id _progress;
	/*^block*/id _completion;
	SFStartNetworkSearchFeedback* _feedback;
	double _startTime;
	BOOL _finished;
	BOOL _executing;
	NSURLRequest* _request;

}

@property (assign,getter=isFinished,nonatomic) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;                       //@synthesize request=_request - In the implementation block
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(NSURLRequest *)request;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)main;
-(BOOL)isExecuting;
-(void)cancel;
-(void)_markAsCompleted;
-(id)initWithRequest:(id)arg1 session:(id)arg2 begin:(/*^block*/id)arg3 progress:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updateProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2 ;
-(void)completedWithResponse:(id)arg1 location:(id)arg2 timingData:(id)arg3 error:(id)arg4 ;
@end

