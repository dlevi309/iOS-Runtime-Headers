/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol SSVPlaybackLeaseDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSData, NSString, SSVPlaybackLeaseConfiguration, NSObject, SSVFairPlaySubscriptionController, SSVPlaybackLeaseRequest, NSDate, SSVRefreshSubscriptionRequest, SSVBarrierOperationQueue, SSURLBag;

@interface SSVPlaybackLease : NSObject {

	NSMutableArray* _assetOperations;
	NSData* _certificateData;
	NSString* _certificateURLBagKey;
	SSVPlaybackLeaseConfiguration* _configuration;
	id<SSVPlaybackLeaseDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	SSVFairPlaySubscriptionController* _fairPlaySubscriptionController;
	unsigned long long _kdMovieIdentifier;
	SSVPlaybackLeaseRequest* _lastKDLeaseRequest;
	int _leaseDidEndNotificationToken;
	NSDate* _leaseExpirationDate;
	long long _leaseType;
	SSVRefreshSubscriptionRequest* _offlineSlotRequest;
	SSVBarrierOperationQueue* _operationQueue;
	BOOL _refreshesAutomatically;
	NSObject*<OS_dispatch_source> _refreshTimer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSURLBag* _urlBag;

}

@property (__weak) id<SSVPlaybackLeaseDelegate> delegate; 
@property (assign) BOOL refreshesAutomatically; 
@property (copy) NSData * certificateData; 
@property (copy) NSString * certificateURLBagKey; 
-(id)init;
-(id<SSVPlaybackLeaseDelegate>)delegate;
-(NSData *)certificateData;
-(void)setDelegate:(id<SSVPlaybackLeaseDelegate>)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(void)refreshLeaseWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_initSSVPlaybackLease;
-(id)initWithURLBag:(id)arg1 leaseType:(long long)arg2 ;
-(id)_addOperationWithRequest:(id)arg1 configurationURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getCertificateDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_startRefreshTimerIfNecessary;
-(void)_cancelRefreshTimer;
-(void)_updateWithLeaseResponseError:(id)arg1 ;
-(void)_updateForLeaseResponse:(id)arg1 error:(id)arg2 ;
-(void)_fireRefreshTimer;
-(void)endLease;
-(BOOL)_shouldEndLeaseForError:(id)arg1 returningEndReasonType:(unsigned long long*)arg2 ;
-(void)_sendLeaseDidEndWithEndReasonType:(unsigned long long)arg1 ;
-(id)initWithLeaseConfiguration:(id)arg1 ;
-(void)cancelAllAssetRequests;
-(void)beginLeaseWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getAssetWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)preheatLeaseRequestsWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)refreshesAutomatically;
-(void)setRefreshesAutomatically:(BOOL)arg1 ;
-(void)updateWithExternalLeaseResponseError:(id)arg1 ;
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
-(id)initWithURLBag:(id)arg1 ;
-(void)_endLease;
-(void)dealloc;
@end

