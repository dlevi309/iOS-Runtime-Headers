/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)runBackgroundActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundActionRunnerSuccess:(BOOL)arg1 ;
-(void)_handleBackgroundAction:(id)arg1 onDispatchGroup:(id)arg2 ;
-(BOOL)backgroundActionRunnerSuccess;
-(void)_handleBackgroundActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)runningLocally;
-(void)setRunningLocally:(BOOL)arg1 ;
@end

