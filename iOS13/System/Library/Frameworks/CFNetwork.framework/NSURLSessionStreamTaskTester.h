/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionStreamDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURLSession, NSURLSessionStreamTask, NSInputStream, NSOutputStream, NSError, NSString;

@interface NSURLSessionStreamTaskTester : NSObject <NSURLSessionStreamDelegate, NSStreamDelegate> {

	StreamTaskTestConfig _testConfig;
	NSObject*<OS_dispatch_queue> _queue;
	NSURLSession* _session;
	NSURLSessionStreamTask* _streamTask;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	/*^block*/id _completion;
	NSError* _inputStreamError;
	NSError* _outputStreamError;
	long long _bytesRead;
	long long _bytesWritten;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(id)initWithTestConfig:(StreamTaskTestConfig)arg1 ;
-(void)resumeWithTestBlock:(/*^block*/id)arg1 ;
-(void)cleanupInputStream;
-(void)cleanupOutputStream;
@end

