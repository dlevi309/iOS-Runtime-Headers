/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/C2RequestDelegate.h>

@protocol OS_dispatch_queue, OS_os_activity;
@class CKStreamingAsset, NSObject, NSURLSessionDataTask, NSString;

@interface CKStreamingAssetAppendContext : NSObject <C2RequestDelegate> {

	BOOL _appending;
	BOOL _currentAppendCancelled;
	BOOL _fakeMissingUploadReceipt;
	CKStreamingAsset* _streamingAsset;
	NSObject*<OS_dispatch_queue> _appendQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _currentSegmentLength;
	NSURLSessionDataTask* _dataTask;
	NSString* _requestUUID;
	NSObject*<OS_os_activity> _osActivity;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CKStreamingAsset * streamingAsset;                                        //@synthesize streamingAsset=_streamingAsset - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> appendQueue;                                 //@synthesize appendQueue=_appendQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,getter=isAppending,nonatomic) BOOL appending;                                        //@synthesize appending=_appending - In the implementation block
@property (assign,getter=isCurrentAppendCancelled,nonatomic) BOOL currentAppendCancelled;              //@synthesize currentAppendCancelled=_currentAppendCancelled - In the implementation block
@property (assign,nonatomic) unsigned long long currentSegmentLength;                                  //@synthesize currentSegmentLength=_currentSegmentLength - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;                                          //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSString * requestUUID;                                                   //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> osActivity;                                     //@synthesize osActivity=_osActivity - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL fakeMissingUploadReceipt;                                            //@synthesize fakeMissingUploadReceipt=_fakeMissingUploadReceipt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestToAppendSegmentData:(id)arg1 uploadURL:(id)arg2 requestUUID:(id)arg3 offset:(unsigned long long)arg4 ;
-(void)abort;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setRequestUUID:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(NSString *)requestUUID;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setOsActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)appendQueue;
-(BOOL)isAppending;
-(void)setAppending:(BOOL)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(CKStreamingAsset *)streamingAsset;
-(BOOL)appendSegmentWithData:(id)arg1 newStreamingAsset:(id*)arg2 error:(id*)arg3 ;
-(void)appendSegmentWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentAppendCancelled:(BOOL)arg1 ;
-(void)setCurrentSegmentLength:(unsigned long long)arg1 ;
-(BOOL)fakeMissingUploadReceipt;
-(BOOL)isCurrentAppendCancelled;
-(unsigned long long)currentSegmentLength;
-(id)initWithStreamingAsset:(id)arg1 ;
-(BOOL)appendSegmentWithData:(id)arg1 error:(id*)arg2 ;
-(void)setStreamingAsset:(CKStreamingAsset *)arg1 ;
-(void)setAppendQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFakeMissingUploadReceipt:(BOOL)arg1 ;
-(id)completionHandler;
-(NSURLSessionDataTask *)dataTask;
-(NSString *)description;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSObject*<OS_os_activity>)osActivity;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

