/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol OS_dispatch_queue;
@class TPSServiceConnection, NSObject;

@interface TPSFullTipContentManager : NSObject {

	TPSServiceConnection* _serviceProxy;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,retain) TPSServiceConnection * serviceProxy;                   //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)init;
-(void)_performWithProxyHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)setServiceProxy:(TPSServiceConnection *)arg1 ;
-(void)tipsAppActive;
-(void)contentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)markTipViewed:(id)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(TPSServiceConnection *)serviceProxy;
@end

