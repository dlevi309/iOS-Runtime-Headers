/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateWiFiAssertions;
-(BOOL)busy;
-(BOOL)sendMessage:(id)arg1 ;
-(id)init;
-(BOOL)sendMessageAtTopOfTheQueue:(id)arg1 ;
-(id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3 ;
-(BOOL)_tryRetryMessageWithTimeInterval:(double)arg1 ;
-(id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 mobileNetworkManager:(id)arg4 retryBackoffProvider:(/*^block*/id)arg5 ;
-(void)_cleanupURLConnection;
-(void)_clearRetryTimer;
-(void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithIDSServerBag:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(void)invalidate;
-(void)networkStateChanged;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_dequeueIfNeeded;
-(void)_notifyDelegateAboutError:(id)arg1 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4 ;
-(void)dealloc;
@end

