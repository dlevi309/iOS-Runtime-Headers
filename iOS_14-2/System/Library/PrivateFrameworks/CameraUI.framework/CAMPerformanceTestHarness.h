/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(id)arg1 ;
-(void)stopTesting;
-(id)completionHandler;
-(BOOL)isRunningTest;
-(void)failedTestwithReason:(id)arg1 ;
-(void)startTesting;
-(NSString *)testName;
-(void)startSubtestWithName:(id)arg1 ;
-(void)stopSubtestWithName:(id)arg1 ;
-(id)initWithTestName:(id)arg1 ;
@end

