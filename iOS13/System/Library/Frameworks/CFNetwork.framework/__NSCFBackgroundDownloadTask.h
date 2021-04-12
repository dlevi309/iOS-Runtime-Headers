/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {

	BOOL _finished;

}

@property (assign) BOOL finished;              //@synthesize finished=_finished - In the implementation block
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2 ;
-(void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
@end

