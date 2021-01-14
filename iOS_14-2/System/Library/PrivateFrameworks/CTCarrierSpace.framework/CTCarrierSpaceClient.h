/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)ping:(/*^block*/id)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)refreshUsageInfo:(/*^block*/id)arg1 ;
-(id)init;
-(void)refreshAllInfo:(/*^block*/id)arg1 ;
-(id<CTCarrierSpaceClientDelegate>)delegate;
-(void)_connect_sync;
-(void)authenticationDidComplete:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPlansInfo:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDataPlanMetrics:(/*^block*/id)arg1 ;
-(void)getUserConsentFlowInfo:(/*^block*/id)arg1 ;
-(void)authenticationDidFail:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshAppsInfo:(/*^block*/id)arg1 ;
-(void)fetchUsageInfo:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPlansInfo:(/*^block*/id)arg1 ;
-(void)getAuthenticationContext:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<CTCarrierSpaceClientDelegate>)arg1 ;
-(void)purchasePlan:(id)arg1 authInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)refreshPlansInfo:(/*^block*/id)arg1 ;
-(void)setUserInAuthFlow:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 andListenerEndpoint:(id)arg2 ;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)fetchAppsInfo:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserConsent:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDidAcceptPlanTerms:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)testMode:(BOOL)arg1 config:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAppsInfo:(/*^block*/id)arg1 ;
-(void)_ensureConnected_sync;
-(void)purchasePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCapabilities:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)fetchUsageInfo:(/*^block*/id)arg1 ;
@end

