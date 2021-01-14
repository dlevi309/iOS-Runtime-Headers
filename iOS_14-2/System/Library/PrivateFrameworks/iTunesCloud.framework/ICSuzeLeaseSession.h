/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue, OS_dispatch_source, ICSuzeLeaseSessionDelegate;
@class NSObject, NSDate, ICFPLeaseSyncSession, NSOperationQueue, ICSuzeLeaseSessionConfiguration;

@interface ICSuzeLeaseSession : NSObject {

	long long _automaticRefreshCount;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _isRunning;
	NSDate* _leaseExpirationDate;
	NSObject*<OS_dispatch_source> _leaseRenewTimer;
	ICFPLeaseSyncSession* _leaseSyncSession;
	NSOperationQueue* _operationQueue;
	ICSuzeLeaseSessionConfiguration* _configuration;
	id<ICSuzeLeaseSessionDelegate> _delegate;

}

@property (nonatomic,copy,readonly) ICSuzeLeaseSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<ICSuzeLeaseSessionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
-(id<ICSuzeLeaseSessionDelegate>)delegate;
-(void)_updateRenewalTimer;
-(id)_newSuzeLeaseRequestWithType:(long long)arg1 clientData:(id)arg2 ;
-(void)_updateRenewalTimerWithResponse:(id)arg1 ;
-(void)_renewLeaseTimerAction;
-(void)beginAutomaticallyRefreshingLease;
-(id)initWithConfiguration:(id)arg1 ;
-(void)endAutomaticallyRefreshingLease;
-(void)startLeaseSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopLeaseSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<ICSuzeLeaseSessionDelegate>)arg1 ;
-(ICSuzeLeaseSessionConfiguration *)configuration;
-(void)dealloc;
@end

