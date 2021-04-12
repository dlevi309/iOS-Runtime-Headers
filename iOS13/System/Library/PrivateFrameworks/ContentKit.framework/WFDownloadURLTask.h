/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSURLRequest, NSString;

@interface WFDownloadURLTask : NSObject <NSURLSessionDownloadDelegate> {

	NSURLRequest* _request;
	/*^block*/id _expectedByteCountHandler;
	/*^block*/id _writtenByteCountHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSURLRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id expectedByteCountHandler;              //@synthesize expectedByteCountHandler=_expectedByteCountHandler - In the implementation block
@property (nonatomic,copy) id writtenByteCountHandler;               //@synthesize writtenByteCountHandler=_writtenByteCountHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(NSURLRequest *)request;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)expectedByteCountHandler;
-(void)setExpectedByteCountHandler:(id)arg1 ;
-(id)writtenByteCountHandler;
-(void)setWrittenByteCountHandler:(id)arg1 ;
@end

