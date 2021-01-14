/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
*/


@class APOrderedMutableDictionary, NSOperationQueue, APProxySessionConfigurationProvider, APUnfairRecursiveLock;

@interface APNSURLSessionDemultiplexerManager : NSObject {

	APOrderedMutableDictionary* _sessionDemultiplexerForIdentifier;
	NSOperationQueue* _sessionSharedDelegateQueue;
	APProxySessionConfigurationProvider* _sessionConfigProvider;
	APUnfairRecursiveLock* _lock;

}

@property (nonatomic,retain) APOrderedMutableDictionary * sessionDemultiplexerForIdentifier;              //@synthesize sessionDemultiplexerForIdentifier=_sessionDemultiplexerForIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * sessionSharedDelegateQueue;                               //@synthesize sessionSharedDelegateQueue=_sessionSharedDelegateQueue - In the implementation block
@property (nonatomic,retain) APProxySessionConfigurationProvider * sessionConfigProvider;                 //@synthesize sessionConfigProvider=_sessionConfigProvider - In the implementation block
@property (nonatomic,retain) APUnfairRecursiveLock * lock;                                                //@synthesize lock=_lock - In the implementation block
-(void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1 ;
-(APOrderedMutableDictionary *)sessionDemultiplexerForIdentifier;
-(APUnfairRecursiveLock *)lock;
-(void)setLock:(APUnfairRecursiveLock *)arg1 ;
-(long long)pretapRequestCountForIdentifier:(id)arg1 ;
-(void)setSessionDemultiplexerForIdentifier:(APOrderedMutableDictionary *)arg1 ;
-(id)_getSessionDemultiplexerForId:(id)arg1 maximumRequestCount:(long long)arg2 ;
-(APProxySessionConfigurationProvider *)sessionConfigProvider;
-(NSOperationQueue *)sessionSharedDelegateQueue;
-(void)_unregisterOldSessionIfRequired;
-(void)_unregisterSessionDemultiplexerWithIdentifier:(id)arg1 ;
-(id)initWithProxySessionConfigProvider:(id)arg1 ;
-(id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2 ;
-(void)setSessionSharedDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)setSessionConfigProvider:(APProxySessionConfigurationProvider *)arg1 ;
@end

