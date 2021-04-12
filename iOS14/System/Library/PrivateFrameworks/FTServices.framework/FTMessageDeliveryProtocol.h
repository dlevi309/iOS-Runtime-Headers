/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)busy;
-(BOOL)sendMessage:(id)arg1;
-(long long)maxMessageSize;
-(void)cancelMessage:(id)arg1;
-(NSArray *)queuedMessages;
-(void)invalidate;
-(void)networkStateChanged;
-(NSString *)userAgent;
-(NSArray *)allMessages;
-(BOOL)logToRegistration;
-(IDSBaseMessage *)currentMessage;
-(BOOL)hasQueuedItems;
-(void)setLogToRegistration:(BOOL)arg1;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1;
-(BOOL)retryInAirplaneMode;
-(void)setRetryInAirplaneMode:(BOOL)arg1;
-(void)setUserAgent:(id)arg1;
-(long long)maxLargeMessageSize;

@end

