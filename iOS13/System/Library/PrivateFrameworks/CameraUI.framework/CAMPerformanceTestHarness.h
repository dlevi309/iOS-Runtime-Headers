/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSString;

@interface CAMPerformanceTestHarness : NSObject {

	NSString* _testName;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isRunningTest,nonatomic,readonly) BOOL runningTest; 
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isRunningTest;
-(NSString *)testName;
-(void)startTesting;
-(void)stopTesting;
-(void)startSubtestWithName:(id)arg1 ;
-(void)stopSubtestWithName:(id)arg1 ;
-(id)initWithTestName:(id)arg1 ;
-(void)failedTestwithReason:(id)arg1 ;
@end

