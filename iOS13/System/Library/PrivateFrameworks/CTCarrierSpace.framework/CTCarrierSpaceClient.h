/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/


@protocol CTCarrierSpaceClientDelegate;
#import <CTCarrierSpace/CTCarrierSpace-Structs.h>
@class NSXPCConnection, NSXPCListenerEndpoint, CTCarrierSpaceClientDelegateProxy;

@interface CTCarrierSpaceClient : NSObject {

	NSXPCConnection* _connection;
	queue* _queue;
	queue* _callbackQueue;
	NSXPCListenerEndpoint* _endpoint;
	CTCarrierSpaceClientDelegateProxy* _delegateProxy;
	id<CTCarrierSpaceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CTCarrierSpaceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<CTCarrierSpaceClientDelegate>)delegate;
-(void)setDelegate:(id<CTCarrierSpaceClientDelegate>)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)_connect_sync;
-(void)_ensureConnected_sync;
-(void)ping:(/*^block*/id)arg1 ;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)refreshUsageInfo:(/*^block*/id)arg1 ;
-(void)refreshPlansInfo:(/*^block*/id)arg1 ;
-(void)refreshAppsInfo:(/*^block*/id)arg1 ;
-(void)setUserInAuthFlow:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticationDidComplete:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticationDidFail:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDidAcceptPlanTerms:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAuthenticationContext:(/*^block*/id)arg1 ;
-(void)getCapabilities:(/*^block*/id)arg1 ;
-(void)getUserConsentFlowInfo:(/*^block*/id)arg1 ;
-(void)setUserConsent:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchUsageInfo:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPlansInfo:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppsInfo:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshAllInfo:(/*^block*/id)arg1 ;
-(void)purchasePlan:(id)arg1 authInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDataPlanMetrics:(/*^block*/id)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 andListenerEndpoint:(id)arg2 ;
-(void)testMode:(BOOL)arg1 config:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUsageInfo:(/*^block*/id)arg1 ;
-(void)fetchPlansInfo:(/*^block*/id)arg1 ;
-(void)fetchAppsInfo:(/*^block*/id)arg1 ;
-(void)purchasePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

