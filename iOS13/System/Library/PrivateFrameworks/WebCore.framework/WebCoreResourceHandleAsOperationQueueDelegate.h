/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSString;

@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate> {

	ResourceHandle* m_handle;
	BinarySemaphore m_semaphore;
	RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::DumbPtrTraits<WebCore::SynchronousLoaderMessageQueue> >* m_messageQueue;
	RetainPtr<NSURLRequest>* m_requestResult;
	Lock m_mutex;
	RetainPtr<NSCachedURLResponse>* m_cachedResponseResult;
	Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > >* m_scheduledPairs;
	BOOL m_boolResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
-(id)initWithHandle:(ResourceHandle*)arg1 messageQueue:(RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::DumbPtrTraits<WebCore::SynchronousLoaderMessageQueue> >*)arg2 ;
-(void)detachHandle;
-(void)callFunctionOnMainThread:(Function<void ()>*)arg1 ;
@end

