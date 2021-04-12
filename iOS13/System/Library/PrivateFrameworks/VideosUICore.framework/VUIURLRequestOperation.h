/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSURLRequest, NSData, NSURLResponse, NSError, NSURLSession, NSURLSessionDataTask;

@interface VUIURLRequestOperation : VUIAsynchronousOperation {

	NSURLRequest* _request;
	NSData* _data;
	NSURLResponse* _response;
	NSError* _error;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	unsigned long long _taskStartTime;

}

@property (nonatomic,retain) NSURLRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSData * data;                                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURLResponse * response;                                      //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSURLSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSURLSessionDataTask * task;                                   //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) unsigned long long taskStartTime;                            //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long elapsedTimeInMilliseconds; 
-(id)init;
-(NSData *)data;
-(NSError *)error;
-(void)cancel;
-(void)setData:(NSData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)setTaskStartTime:(unsigned long long)arg1 ;
-(unsigned long long)taskStartTime;
-(void)executionDidBegin;
-(id)initWithRequest:(id)arg1 session:(id)arg2 ;
-(void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3 ;
-(unsigned long long)elapsedTimeInMilliseconds;
@end

