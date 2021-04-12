/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)invalidate;
-(BOOL)sendMessage:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(id)initWithPreferedType:(long long)arg1 ;
-(NSArray *)queuedMessages;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(BOOL)_isInBackoffMode;
-(long long)_randomPercentageChanceForDualDelivery;
-(void)dequeueMessageIfNeeded;
-(BOOL)_shouldUseDualDeliveryForMessage:(id)arg1 ;
-(void)handleTranslationAndDeliveryOnAPS:(id)arg1 ;
-(void)_enterBackOffMode;
@end

