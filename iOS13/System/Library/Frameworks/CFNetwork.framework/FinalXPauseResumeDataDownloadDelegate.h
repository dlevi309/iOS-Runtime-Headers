/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface FinalXPauseResumeDataDownloadDelegate : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDelegate> {

	long long sizeOfEntity;
	long long sizeDownloadedAtFinish;
	NSObject*<OS_dispatch_semaphore> _wait;
	BOOL result;
	long long _totalBytesWritten;

}

@property (assign,nonatomic) long long totalBytesWritten;              //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(id)getWaiter;
-(long long)getSizeOfEntity;
-(BOOL)didTestPass;
-(long long)getSizeDownloadedAtFinish;
-(long long)totalBytesWritten;
-(void)setTotalBytesWritten:(long long)arg1 ;
@end

