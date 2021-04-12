/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@class NSURL, NSURLSessionDownloadTask;

@interface _TVURLSessionDownloadTaskWrapper : NSObject {

	NSURL* _url;
	NSURLSessionDownloadTask* _downloadTask;
	long long _downloadTaskID;
	long long _state;

}

@property (nonatomic,readonly) long long state; 
-(id)initWithURL:(id)arg1 ;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)state;
-(void)cancel;
@end

