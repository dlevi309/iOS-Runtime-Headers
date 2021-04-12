/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTMessageDelivery.h>
#import <FTServices/FTMessageQueueDelegate.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol FTMessageDeliveryAPSConnection, FTMessageDeliveryAPSMobileNetworkManager;
@class NSMutableArray, NSMutableDictionary, NSString;

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate> {

	id<FTMessageDeliveryAPSConnection> _connection;
	id<FTMessageDeliveryAPSMobileNetworkManager> _mobileNetworkManager;
	Class _APSOutgoingMessageClass;
	NSMutableArray* _enabledTopics;
	NSMutableDictionary* _ftMessageMap;
	NSMutableDictionary* _startDateMap;
	NSMutableDictionary* _bodyMap;
	NSMutableDictionary* _apsMessageMap;
	NSMutableDictionary* _timerMap;
	NSMutableDictionary* _deathTimerMap;
	NSMutableDictionary* _retriesMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_updateTopics;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)_currentTimers;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(id)initWithAPSConnection:(id)arg1 mobileNetworkManager:(id)arg2 ;
-(id)_currentAPSMessages;
-(void)_setMapForMessage:(id)arg1 apsMessage:(id)arg2 messageBody:(id)arg3 timeoutTime:(double)arg4 timeoutSelector:(SEL)arg5 retries:(id)arg6 ;
-(BOOL)busy;
-(BOOL)sendMessage:(id)arg1 ;
-(id)init;
-(void)_sendMessage:(id)arg1 ftMessage:(id)arg2 ;
-(void)_powerLogEvent:(id)arg1 dictionary:(id)arg2 ;
-(id)_currentMessages;
-(void)_noteMessageSent:(id)arg1 ftMessage:(id)arg2 body:(id)arg3 ;
-(id)_apsMessageBodyForMessage:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)_notifyDelegateAboutError:(id)arg1 resultCode:(long long)arg2 forMessage:(id)arg3 ;
-(id)_bodyForMessage:(id)arg1 ;
-(void)_messageACKTimedOut:(id)arg1 ;
-(BOOL)_fillMessageParameters:(id*)arg1 ftMessage:(id*)arg2 ;
-(id)connection;
-(id)_apsOutgoingMessageForFTMessage:(id)arg1 ;
-(id)_apsMessageForMessage:(id)arg1 body:(id)arg2 ;
-(void)_setEnabledTopics:(id)arg1 ;
-(void)_invalidateDeathTimerForMessageID:(id)arg1 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(id)_messageForAPSOutgoingMessage:(id)arg1 ;
-(void)_noteMessageSucceeded:(id)arg1 ftMessage:(id)arg2 error:(id)arg3 result:(id)arg4 resultCode:(long long)arg5 ;
-(void)_messageCompletelyTimedOut:(id)arg1 ;
-(void)_noteMessageFailed:(id)arg1 ftMessage:(id)arg2 allowRetry:(BOOL)arg3 error:(id)arg4 ;
-(long long)maxMessageSize;
-(BOOL)_isBusyWithMessage:(id)arg1 ;
-(long long)_retryCountForMessage:(id)arg1 ;
-(void)_invalidateTimerForMessageID:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(void)invalidate;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_dequeueIfNeeded;
-(id)allMessages;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)_messageNeedsRetry:(id)arg1 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)_clearMapForMessageID:(id)arg1 ;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)_noteMessageACKd:(id)arg1 ftMessage:(id)arg2 ;
-(void)_messageSendTimedOut:(id)arg1 ;
-(long long)maxLargeMessageSize;
-(id)_requiredTopics;
-(void)dealloc;
-(BOOL)_shouldSendSOSForFailure:(id)arg1 ;
@end

