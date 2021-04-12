/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<ICSuzeLeaseSessionDelegate>)delegate;
-(void)setDelegate:(id<ICSuzeLeaseSessionDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(ICSuzeLeaseSessionConfiguration *)configuration;
-(void)_updateRenewalTimer;
-(id)_newSuzeLeaseRequestWithType:(long long)arg1 clientData:(id)arg2 ;
-(void)_updateRenewalTimerWithResponse:(id)arg1 ;
-(void)_renewLeaseTimerAction;
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(void)startLeaseSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopLeaseSessionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

