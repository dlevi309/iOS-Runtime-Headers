/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTMessageDelivery.h>
#import <FTServices/FTMessageQueueDelegate.h>

@protocol FTMessageDeliveryRemoteURLConnectionFactory, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryHTTPMobileNetworkManager;
@class IDSServerBag;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {

	id<FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
	id<FTMessageDeliveryRemoteURLConnection> _remoteConnection;
	id<FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
	BOOL _pendingRetryAfterAirplaneMode;
	double _retryTimeAfterAirplaneMode;
	/*^block*/id _retryBackoffProvider;
	IDSServerBag* _idsServerBag;
	IDSServerBag* _iMessageServerBag;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)sendMessage:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(BOOL)busy;
-(void)networkStateChanged;
-(void)_clearRetryTimer;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 mobileNetworkManager:(id)arg4 retryBackoffProvider:(/*^block*/id)arg5 ;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_cleanupURLConnection;
-(void)_dequeueIfNeeded;
-(BOOL)_tryRetryMessageWithTimeInterval:(double)arg1 ;
-(void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4 ;
-(id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3 ;
-(void)_notifyDelegateAboutError:(id)arg1 ;
-(void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_updateWiFiAssertions;
-(BOOL)sendMessageAtTopOfTheQueue:(id)arg1 ;
@end

