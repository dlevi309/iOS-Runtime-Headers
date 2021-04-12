/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSMutableData, NSError, NSURLSessionTaskMetrics, AMSURLRequestProperties, AMSURLAction, NSURLResponse, AMSURLSession, NSURLSessionTask, NSObject, NSMutableDictionary;

@interface AMSURLTaskInfo : NSObject {

	NSMutableData* _data;
	NSError* _error;
	NSURLSessionTaskMetrics* _metrics;
	AMSURLRequestProperties* _properties;
	AMSURLAction* _receivedAction;
	NSURLResponse* _response;
	long long _retryCount;
	AMSURLSession* _session;
	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _taskQueue;
	NSMutableDictionary* _userInfo;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSMutableData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;                     //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) AMSURLRequestProperties * properties;                  //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) AMSURLAction * receivedAction;                         //@synthesize receivedAction=_receivedAction - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                              //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) long long retryCount;                                  //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                               //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> taskQueue;              //@synthesize taskQueue=_taskQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)taskInfoForTask:(id)arg1 ;
+(void)removeTaskInfoForTask:(id)arg1 ;
+(id)createTaskInfoForTask:(id)arg1 ;
+(id)sharedTaskQueue;
+(id)sharedTaskStore;
-(NSMutableDictionary *)userInfo;
-(NSMutableData *)data;
-(NSError *)error;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(AMSURLRequestProperties *)properties;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(NSURLSessionTaskMetrics *)metrics;
-(NSURLResponse *)response;
-(void)setProperties:(AMSURLRequestProperties *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)taskQueue;
-(AMSURLAction *)receivedAction;
-(void)setReceivedAction:(AMSURLAction *)arg1 ;
-(void)migrateFromTaskInfo:(id)arg1 ;
@end

