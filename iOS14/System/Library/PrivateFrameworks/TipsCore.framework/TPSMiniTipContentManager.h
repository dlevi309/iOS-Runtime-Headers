/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol OS_dispatch_queue;
@class TPSServiceConnection, NSObject;

@interface TPSMiniTipContentManager : NSObject {

	TPSServiceConnection* _serviceProxy;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,retain) TPSServiceConnection * serviceProxy;                   //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(id)init;
-(/*^block*/id)_contentWithContentIDCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)contentWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performWithProxyHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)validateAndPrepareContentForDisplay:(id)arg1 bundleID:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performSyncWithProxyHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)personalizationFailedForContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
-(void)hintDisplayedForIdentifier:(id)arg1 context:(id)arg2 ;
-(void)hintDismissedByUserForIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
-(void)hintDismissedByPerformedOutcomeForIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
-(void)setServiceProxy:(TPSServiceConnection *)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(TPSServiceConnection *)serviceProxy;
@end

