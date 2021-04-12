/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

@class NSString, IDSBaseMessage, NSArray;


@protocol FTMessageDeliveryProtocol <NSObject>
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
@optional
-(void)invalidate;
-(BOOL)sendMessage:(id)arg1;
-(NSString *)userAgent;
-(void)setUserAgent:(id)arg1;
-(void)cancelMessage:(id)arg1;
-(BOOL)busy;
-(void)networkStateChanged;
-(NSArray *)queuedMessages;
-(BOOL)logToRegistration;
-(long long)maxMessageSize;
-(IDSBaseMessage *)currentMessage;
-(NSArray *)allMessages;
-(BOOL)hasQueuedItems;
-(long long)maxLargeMessageSize;
-(void)setLogToRegistration:(BOOL)arg1;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1;
-(BOOL)retryInAirplaneMode;
-(void)setRetryInAirplaneMode:(BOOL)arg1;

@end

