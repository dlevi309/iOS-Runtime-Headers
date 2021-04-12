/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol OS_dispatch_queue, CDPStateUIProviderInternal, CDPDCircleDelegate, CDPDCircleProxy;
@class CDPDCircleStateObserver, NSObject, NSArray;

@interface CDPDCircleController : NSObject {

	CDPDCircleStateObserver* _circleJoinObserver;
	NSObject*<OS_dispatch_queue> _requestSynchronizationQueue;
	NSObject*<OS_dispatch_queue> _retryQueue;
	unsigned long long _cliqueStatusRetryCount;
	NSArray* _retryIntervals;
	id<CDPStateUIProviderInternal> _uiProvider;
	NSObject*<CDPDCircleDelegate> _delegate;
	id<CDPDCircleProxy> _circleProxy;

}

@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                  //@synthesize uiProvider=_uiProvider - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CDPDCircleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;                            //@synthesize circleProxy=_circleProxy - In the implementation block
-(void)dealloc;
-(NSObject*<CDPDCircleDelegate>)delegate;
-(void)setDelegate:(NSObject*<CDPDCircleDelegate>)arg1 ;
-(id)peerID;
-(unsigned long long)circleStatus;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(void)joinCircleWithCompletion:(/*^block*/id)arg1 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(BOOL)synchronizeCircleViews;
-(id<CDPDCircleProxy>)circleProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
-(id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3 ;
-(void)useCircleInfoToUpdateNameForDevices:(id)arg1 ;
-(void)applyToJoinCircleWithJoinHandler:(/*^block*/id)arg1 ;
-(void)cancelApplicationToJoinCircle;
-(void)prepareCircleStateForRecovery;
-(void)joinCircleIgnoringBackups:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_joinCircleIgnoringBackups:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_peerCount;
-(void)_requestToJoinAndWaitForSuccessWithHandler:(/*^block*/id)arg1 ;
-(void)promptForCredentials:(/*^block*/id)arg1 ;
-(BOOL)canRetryCliqueStatus;
-(long long)nextRetryInterval;
-(id)_peerDeviceNamesByPeerID;
-(void)_requestToJoinWithObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestToJoinWithRequestBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetCircleIncludingCloudKitData:(BOOL)arg1 cloudKitResetReasonDescription:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(/*^block*/id)arg1 ;
@end

