/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@class NSOperationQueue, NSURLSessionConfiguration, NSString;

@interface WebCoreNSURLSession : NSObject {

	RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader> >* _loader;
	RetainPtr<id<NSURLSessionDelegate> >* _delegate;
	RetainPtr<NSOperationQueue>* _queue;
	RetainPtr<NSString>* _sessionDescription;
	HashSet<WTF::RetainPtr<const void *>, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > >* _dataTasks;
	HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > >* _origins;
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
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSURLSessionTaskDelegate>)delegate;
-(void)setDelegate:(id<NSURLSessionTaskDelegate>)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(NSOperationQueue *)delegateQueue;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)streamTaskWithHostName:(id)arg1 port:(long long)arg2 ;
-(void)getAllTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(id)streamTaskWithNetService:(id)arg1 ;
-(NSString *)sessionDescription;
-(void)setSessionDescription:(NSString *)arg1 ;
-(id)initWithResourceLoader:(PlatformMediaResourceLoader*)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(BOOL)didPassCORSAccessChecks;
-(BOOL)wouldTaintOrigin:(const SecurityOrigin*)arg1 ;
-(void)addDelegateOperation:(Function<void ()>*)arg1 ;
-(void)taskCompleted:(id)arg1 ;
-(void)task:(id)arg1 didReceiveCORSAccessCheckResult:(BOOL)arg2 ;
-(void)task:(id)arg1 didReceiveResponseFromOrigin:(Ref<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >*)arg2 ;
-(PlatformMediaResourceLoader*)loader;
@end

