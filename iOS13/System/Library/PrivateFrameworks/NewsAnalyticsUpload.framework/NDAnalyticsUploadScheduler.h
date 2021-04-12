/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol NDAnalyticsUploadSchedulerDelegate, FCOperationThrottler;
@class NFMutexLock, FCDateRange, FCAsyncSerialQueue, NSOperationQueue, NSURLSession, FCBalancedCounter, NSString;

@interface NDAnalyticsUploadScheduler : NSObject <FCOperationThrottlerDelegate, NSURLSessionTaskDelegate> {

	id<NDAnalyticsUploadSchedulerDelegate> _delegate;
	NFMutexLock* _lock;
	FCDateRange* _deliveryWindow;
	id<FCOperationThrottler> _schedulingAndForegroundUploadThrottler;
	FCAsyncSerialQueue* _uploadQueue;
	NSOperationQueue* _backgroundSessionQueue;
	NSURLSession* _backgroundSession;
	FCBalancedCounter* _backgroundSessionLaunchEventCounter;

}

@property (nonatomic,retain) NFMutexLock * lock;                                                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) FCDateRange * deliveryWindow;                                                   //@synthesize deliveryWindow=_deliveryWindow - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> schedulingAndForegroundUploadThrottler;              //@synthesize schedulingAndForegroundUploadThrottler=_schedulingAndForegroundUploadThrottler - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * uploadQueue;                                             //@synthesize uploadQueue=_uploadQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundSessionQueue;                                    //@synthesize backgroundSessionQueue=_backgroundSessionQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * backgroundSession;                                             //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (nonatomic,retain) FCBalancedCounter * backgroundSessionLaunchEventCounter;                      //@synthesize backgroundSessionLaunchEventCounter=_backgroundSessionLaunchEventCounter - In the implementation block
@property (assign,nonatomic,__weak) id<NDAnalyticsUploadSchedulerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NDAnalyticsUploadSchedulerDelegate>)delegate;
-(void)setDelegate:(id<NDAnalyticsUploadSchedulerDelegate>)arg1 ;
-(NFMutexLock *)lock;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setLock:(NFMutexLock *)arg1 ;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id)initWithURLSessionQueue:(id)arg1 ;
-(void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleUploadInWindow:(id)arg1 withForegroundUploadCompletion:(/*^block*/id)arg2 ;
-(FCAsyncSerialQueue *)uploadQueue;
-(void)setUploadQueue:(FCAsyncSerialQueue *)arg1 ;
-(FCBalancedCounter *)backgroundSessionLaunchEventCounter;
-(void)setDeliveryWindow:(FCDateRange *)arg1 ;
-(id<FCOperationThrottler>)schedulingAndForegroundUploadThrottler;
-(FCDateRange *)deliveryWindow;
-(void)_uploadWithCompletion:(/*^block*/id)arg1 ;
-(void)_scheduleBackgroundUploadInWindow:(id)arg1 ;
-(NSURLSession *)backgroundSession;
-(void)setSchedulingAndForegroundUploadThrottler:(id<FCOperationThrottler>)arg1 ;
-(NSOperationQueue *)backgroundSessionQueue;
-(void)setBackgroundSessionQueue:(NSOperationQueue *)arg1 ;
-(void)setBackgroundSessionLaunchEventCounter:(FCBalancedCounter *)arg1 ;
@end

