/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableData, NSURLSession, NSURLSessionDataTask, NSString;

@interface VCPDownloadManager : NSObject <NSURLSessionTaskDelegate> {

	NSObject*<OS_dispatch_semaphore> _mutex;
	NSMutableData* _buffer;
	NSURLSession* _session;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSURLSessionDataTask* _dataTask;
	/*^block*/id _cancel;

}

@property (nonatomic,copy) id cancel;                               //@synthesize cancel=_cancel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(unsigned long long)maxSizeBytes;
-(id)init;
-(id)cancel;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)flush;
-(void)setCancel:(id)arg1 ;
-(id)requestDownloadFromURL:(id)arg1 ;
-(id)requestDownloadOfResource:(id)arg1 ;
@end

