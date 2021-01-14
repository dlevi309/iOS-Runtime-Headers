/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMPerformanceTestHarness.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@class CUCaptureController, NSString, NSMutableDictionary, CAMCaptureRequestIntervalometer;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate> {

	CUCaptureController* _captureController;
	BOOL _performWarmupCapture;
	BOOL _waitingOnWarmupCapture;
	NSString* _finalRequestPersistenceUUID;
	long long _mode;
	NSMutableDictionary* _numberOfResponsesForRequest;
	unsigned long long _expectedNumberOfResponsesPerRequest;
	double _delayBetweenCaptures;
	double _lastCaptureCompletionTime;
	CAMCaptureRequestIntervalometer* _testIntervalometer;

}

@property (nonatomic,retain) CAMCaptureRequestIntervalometer * testIntervalometer;              //@synthesize testIntervalometer=_testIntervalometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForPersistenceUUID:(id)arg1 failureReason:(id*)arg2 ;
-(id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(unsigned long long)arg2 captureController:(id)arg3 performingWarmupCapture:(BOOL)arg4 forCaptureMode:(long long)arg5 delayBetweenCaptures:(double)arg6 ;
-(void)stopTesting;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)failedTestwithReason:(id)arg1 ;
-(BOOL)_allowOverlappingCaptures;
-(CAMCaptureRequestIntervalometer *)testIntervalometer;
-(BOOL)_shouldDelayBeforeCapturing;
-(void)intervalometer:(id)arg1 didReachMaximumCountWithRequest:(id)arg2 ;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(void)startTesting;
-(void)setTestIntervalometer:(CAMCaptureRequestIntervalometer *)arg1 ;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForRequestsWithFailureReason:(id*)arg1 ;
@end

