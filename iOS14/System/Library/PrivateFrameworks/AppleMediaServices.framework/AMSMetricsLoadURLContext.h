/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagProtocol;
@class NSError, AMSProcessInfo, NSData, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics, NSDictionary;

@interface AMSMetricsLoadURLContext : NSObject {

	id<AMSBagProtocol> _bag;
	NSError* _error;
	AMSProcessInfo* _processInfo;
	NSData* _responseBody;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	NSURLSessionTaskMetrics* _taskMetrics;
	NSDictionary* _decodedResponseBody;

}

@property (nonatomic,retain) NSDictionary * decodedResponseBody;                 //@synthesize decodedResponseBody=_decodedResponseBody - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;                       //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSData * responseBody;                              //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                            //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
-(AMSProcessInfo *)processInfo;
-(void)setTaskMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(NSURLSessionTaskMetrics *)taskMetrics;
-(NSURLSessionTask *)task;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(id)initWithTask:(id)arg1 metrics:(id)arg2 ;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(NSURLSession *)session;
-(void)setError:(NSError *)arg1 ;
-(id)bagContract;
-(id<AMSBagProtocol>)bag;
-(NSError *)error;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)setResponseBody:(NSData *)arg1 ;
-(void)setDecodedResponseBody:(NSDictionary *)arg1 ;
-(id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2 ;
-(void)setBagContract:(id)arg1 ;
-(NSDictionary *)decodedResponseBody;
-(NSData *)responseBody;
@end

