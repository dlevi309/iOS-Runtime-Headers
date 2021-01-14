/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@class NSOperationQueue, NSURLSessionConfiguration, NSString;

@interface WebCoreNSURLSession : NSObject {

	RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader> >* _loader;
	WeakObjCPtr<id<NSURLSessionDelegate> > _delegate;
	RetainPtr<NSOperationQueue>* _queue;
	RetainPtr<NSString>* _sessionDescription;
	HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> > >* _dataTasks;
	HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > >* _origins;
	Lock _dataTasksLock;
	BOOL _invalidated;
	unsigned long long _nextTaskIdentifier;
	OSObjectPtr<NSObject<OS_dispatch_queue> *> _internalQueue;
	int _corsResults;

}

@property (readonly) PlatformMediaResourceLoader* loader; 
@property (retain) id<NSURLSessionTaskDelegate> delegate; 
@property (retain,readonly) NSOperationQueue * delegateQueue; 
@property (copy,readonly) NSURLSessionConfiguration * configuration; 
@property (copy) NSString * sessionDescription; 
@property (readonly) BOOL didPassCORSAccessChecks; 
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(PlatformMediaResourceLoader*)loader;
-(void)getAllTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(id<NSURLSessionTaskDelegate>)delegate;
-(id)streamTaskWithHostName:(id)arg1 port:(long long)arg2 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)streamTaskWithNetService:(id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(void)setSessionDescription:(NSString *)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(NSString *)sessionDescription;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)sendH2Ping:(id)arg1 pongHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<NSURLSessionTaskDelegate>)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(void)addDelegateOperation:(Function<void ()>*)arg1 ;
-(void)taskCompleted:(id)arg1 ;
-(void)task:(id)arg1 didReceiveCORSAccessCheckResult:(BOOL)arg2 ;
-(void)task:(id)arg1 didReceiveResponseFromOrigin:(Ref<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >*)arg2 ;
-(NSOperationQueue *)delegateQueue;
-(BOOL)wouldTaintOrigin:(const SecurityOrigin*)arg1 ;
-(id)initWithResourceLoader:(PlatformMediaResourceLoader*)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(BOOL)didPassCORSAccessChecks;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

