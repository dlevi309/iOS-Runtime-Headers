/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue, OS_dispatch_source, ICMusicSubscriptionLeaseSessionDelegate;
@class NSObject, ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, NSDate;

@interface ICMusicSubscriptionLeaseSession : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _automaticRefreshCount;
	NSObject*<OS_dispatch_source> _automaticRefreshTimerSource;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _isPerformingAutomaticRefresh;
	ICMusicSubscriptionLeaseStatus* _leaseStatus;
	long long _pendingLeaseAcquisitionRevisionID;
	BOOL _delegatedLeaseSession;
	ICStoreRequestContext* _requestContext;
	id<ICMusicSubscriptionLeaseSessionDelegate> _delegate;
	NSDate* _leaseExpirationDate;

}

@property (nonatomic,__weak,readonly) id<ICMusicSubscriptionLeaseSessionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate;                                                    //@synthesize leaseExpirationDate=_leaseExpirationDate - In the implementation block
@property (getter=isDelegatedLeaseSession,nonatomic,readonly) BOOL delegatedLeaseSession;                            //@synthesize delegatedLeaseSession=_delegatedLeaseSession - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;                                          //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy,readonly) ICMusicSubscriptionLeaseStatus * leaseStatus; 
@property (getter=isAutomaticallyRefreshingLease,nonatomic,readonly) BOOL automaticallyRefreshingLease; 
+(id)_sharedOperationQueue;
-(id<ICMusicSubscriptionLeaseSessionDelegate>)delegate;
-(void)_handlePlaybackLeaseDidEndPushNotification;
-(ICStoreRequestContext *)requestContext;
-(NSDate *)leaseExpirationDate;
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(id)description;
-(ICMusicSubscriptionLeaseStatus *)leaseStatus;
-(void)_updateAutomaticRefreshProperties;
-(id)_newOperationForPlaybackRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performAutomaticRefresh;
-(void)_onQueue_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2 ;
-(id)_initWithRequestContext:(id)arg1 isDelegatedLeaseSession:(BOOL)arg2 delegate:(id)arg3 leaseStatus:(id)arg4 ;
-(BOOL)isAutomaticallyRefreshingLease;
-(void)reloadFairPlayKeyStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isDelegatedLeaseSession;
-(void)_handleRemoteServerDidBecomeLikelyReachable;
-(void)_receivedUserInteractionEvent;
-(void)_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2 ;
-(id)performPlaybackRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

