/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CFBackgroundActionRunner : NSObject {

	BOOL _runningLocally;
	BOOL _backgroundActionRunnerSuccess;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL backgroundActionRunnerSuccess;              //@synthesize backgroundActionRunnerSuccess=_backgroundActionRunnerSuccess - In the implementation block
@property (assign) BOOL runningLocally;                             //@synthesize runningLocally=_runningLocally - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)runBackgroundActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundActionRunnerSuccess:(BOOL)arg1 ;
-(void)_handleBackgroundAction:(id)arg1 onDispatchGroup:(id)arg2 ;
-(BOOL)backgroundActionRunnerSuccess;
-(void)_handleBackgroundActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)runningLocally;
-(void)setRunningLocally:(BOOL)arg1 ;
@end

