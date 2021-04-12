/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTMessageDeliveryProtocol.h>
#import <FTServices/FTMessageQueueDelegate.h>

@class NSString, IDSBaseMessage, NSArray, FTMessageDelivery, FTMessageQueue;

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate> {

	FTMessageDelivery* _httpDelivery;
	FTMessageDelivery* _apsDelivery;
	FTMessageQueue* _dualModeQueue;
	NSString* _userAgentString;

}

@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode; 
@property (assign) BOOL logToRegistration; 
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) long long maxMessageSize; 
@property (readonly) long long maxLargeMessageSize; 
@property (assign) unsigned long long maxConcurrentMessages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)sendMessage:(id)arg1 ;
-(void)dequeueMessageIfNeeded;
-(id)initWithPreferedType:(long long)arg1 ;
-(BOOL)_isInBackoffMode;
-(void)handleTranslationAndDeliveryOnAPS:(id)arg1 ;
-(long long)_randomPercentageChanceForDualDelivery;
-(void)cancelMessage:(id)arg1 ;
-(NSArray *)queuedMessages;
-(void)invalidate;
-(BOOL)_shouldUseDualDeliveryForMessage:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)_enterBackOffMode;
@end

