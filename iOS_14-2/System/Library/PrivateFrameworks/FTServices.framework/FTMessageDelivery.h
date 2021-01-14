/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTMessageQueueDelegate.h>

@class FTMessageQueue, NSString, IMTimer, NSNumber, IDSBaseMessage, NSArray;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {

	unsigned _retries;
	FTMessageQueue* _queue;
	NSString* _userAgent;
	unsigned long long _maxConcurrentMessages;
	BOOL _retryInAirplaneMode;
	BOOL _logToRegistration;
	IMTimer* _timer;
	BOOL _disallowRetry;

}

@property (copy) NSString * userAgent;                                    //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) NSNumber * protocolVersion; 
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode;                              //@synthesize retryInAirplaneMode=_retryInAirplaneMode - In the implementation block
@property (assign) BOOL logToRegistration;                                //@synthesize logToRegistration=_logToRegistration - In the implementation block
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) long long maxMessageSize; 
@property (readonly) long long maxLargeMessageSize; 
@property (assign) unsigned long long maxConcurrentMessages;              //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
@property (assign,nonatomic) BOOL disallowRetry;                          //@synthesize disallowRetry=_disallowRetry - In the implementation block
+(id)alloc;
+(id)_errorForTDMessageDeliveryStatus:(long long)arg1 userInfo:(id)arg2 ;
+(Class)HTTPMessageDeliveryClass;
+(Class)APNSMessageDeliveryClass;
-(BOOL)busy;
-(BOOL)sendMessage:(id)arg1 ;
-(id)init;
-(id)_queue;
-(void)setProtocolVersion:(NSNumber *)arg1 ;
-(NSNumber *)protocolVersion;
-(void)_clearRetryTimer;
-(long long)maxMessageSize;
-(void)cancelMessage:(id)arg1 ;
-(NSArray *)queuedMessages;
-(void)invalidate;
-(void)networkStateChanged;
-(NSString *)userAgent;
-(NSArray *)allMessages;
-(BOOL)logToRegistration;
-(void)_retryTimerHit:(id)arg1 ;
-(IDSBaseMessage *)currentMessage;
-(BOOL)hasQueuedItems;
-(BOOL)disallowRetry;
-(void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(long long)arg4 ;
-(void)_setRetryTimer:(double)arg1 ;
-(void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5 ;
-(void)setLogToRegistration:(BOOL)arg1 ;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1 ;
-(BOOL)retryInAirplaneMode;
-(void)setDisallowRetry:(BOOL)arg1 ;
-(void)setRetryInAirplaneMode:(BOOL)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(long long)maxLargeMessageSize;
-(void)dealloc;
@end

