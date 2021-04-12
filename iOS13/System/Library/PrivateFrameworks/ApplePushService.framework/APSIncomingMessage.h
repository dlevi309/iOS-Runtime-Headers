/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/

#import <ApplePushService/APSMessage.h>

@class APSIncomingMessageCheckpointTrace, NSDate, NSData;

@interface APSIncomingMessage : APSMessage {

	APSIncomingMessageCheckpointTrace* _checkpointTrace;

}

@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSData * token; 
@property (assign,getter=wasFromStorage,nonatomic) BOOL fromStorage; 
@property (assign,getter=wasLastMessageFromStorage,nonatomic) BOOL lastMessageFromStorage; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,retain) APSIncomingMessageCheckpointTrace * checkpointTrace;                       //@synthesize checkpointTrace=_checkpointTrace - In the implementation block
@property (assign,getter=isTracingEnabled,nonatomic) BOOL tracingEnabled; 
@property (nonatomic,copy) NSData * tracingUUID; 
@property (assign,nonatomic) unsigned long long pushType; 
@property (assign,nonatomic) unsigned pushFlags; 
-(NSData *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(APSIncomingMessageCheckpointTrace *)checkpointTrace;
-(BOOL)isTracingEnabled;
-(NSData *)tracingUUID;
-(void)setCheckpointTrace:(APSIncomingMessageCheckpointTrace *)arg1 ;
-(unsigned long long)pushType;
-(void)setPushType:(unsigned long long)arg1 ;
-(unsigned)pushFlags;
-(void)setPushFlags:(unsigned)arg1 ;
-(BOOL)wasFromStorage;
-(void)setFromStorage:(BOOL)arg1 ;
-(BOOL)wasLastMessageFromStorage;
-(void)setLastMessageFromStorage:(BOOL)arg1 ;
-(void)setTracingEnabled:(BOOL)arg1 ;
-(void)setTracingUUID:(NSData *)arg1 ;
@end

