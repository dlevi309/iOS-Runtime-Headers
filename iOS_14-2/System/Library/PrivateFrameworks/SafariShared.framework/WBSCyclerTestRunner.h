/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;
@class NSMutableArray;

@interface WBSCyclerTestRunner : NSObject {

	BOOL _stopRequested;
	NSMutableArray* _pendingRequestQueue;
	NSMutableArray* _pendingRequestCompletionHandlerQueue;
	BOOL _running;
	id<WBSCyclerTestSuite> _testSuite;
	id<WBSCyclerTestTarget> _target;

}

@property (nonatomic,readonly) id<WBSCyclerTestSuite> testSuite;              //@synthesize testSuite=_testSuite - In the implementation block
@property (nonatomic,readonly) id<WBSCyclerTestTarget> target;                //@synthesize target=_target - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                 //@synthesize running=_running - In the implementation block
-(id)init;
-(void)requestStop;
-(void)handleRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTestSuite:(id)arg1 target:(id)arg2 ;
-(void)_performNextIterationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleNextPendingRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(id)_errorWithCode:(long long)arg1 ;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_stop;
-(BOOL)isRunning;
-(id<WBSCyclerTestTarget>)target;
-(id<WBSCyclerTestSuite>)testSuite;
-(void)dealloc;
@end

