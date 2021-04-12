/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSURLCredential, NSURLSession, NSArray, NSMutableArray, NSString;

@interface CRKDownloadResourcesOperation : CATOperation <NSURLSessionDownloadDelegate> {

	NSURLCredential* mCredential;
	NSURLSession* mSession;
	NSArray* mDownloadTasks;
	NSMutableArray* mFileURLs;
	NSMutableArray* mCompletedUnitCounts;
	NSArray* _resources;

}

@property (nonatomic,copy,readonly) NSArray * resources;              //@synthesize resources=_resources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(NSArray *)resources;
-(void)operationWillFinish;
-(id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedCertificates:(id)arg3 ;
-(void)cancelIfNeeded;
-(id)moveURLToNonEphemeralLocation:(id)arg1 withFileName:(id)arg2 error:(id*)arg3 ;
-(void)unzipOperationDidFinish:(id)arg1 forRequestURL:(id)arg2 ;
-(void)finalizeDownloadedItem:(id)arg1 forRequestURL:(id)arg2 ;
-(id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 ;
@end

