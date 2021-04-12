/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/

#import <ApplePushService/APSMessage.h>

@class APSOutgoingMessageCheckpointTrace, NSString;

@interface APSOutgoingMessage : APSMessage {

	APSOutgoingMessageCheckpointTrace* _checkpointTrace;
	BOOL _ackReceived;

}

@property (assign,nonatomic) unsigned long long timeout; 
@property (assign,getter=isCritical,nonatomic) BOOL critical; 
@property (assign,nonatomic) unsigned long long payloadFormat; 
@property (assign,nonatomic) unsigned long long payloadLength; 
@property (nonatomic,copy) NSString * senderTokenName; 
@property (nonatomic,retain) APSOutgoingMessageCheckpointTrace * checkpointTrace;              //@synthesize checkpointTrace=_checkpointTrace - In the implementation block
@property (assign,nonatomic) BOOL sendRetried; 
@property (assign,nonatomic) BOOL ackReceived;                                                 //@synthesize ackReceived=_ackReceived - In the implementation block
@property (assign,nonatomic) unsigned long long ackTimestamp; 
-(id)eagernessTimeoutTime;
-(unsigned long long)_effectiveSendTimeout;
-(id)sendTimeoutTime;
-(id)rawTimeoutTime;
-(long long)sendInterface;
-(void)setSendInterface:(long long)arg1 ;
-(BOOL)hasTimedOut;
-(void)setTimedOut:(BOOL)arg1 ;
-(unsigned long long)payloadFormat;
-(void)setPushType:(unsigned long long)arg1 ;
-(NSString *)senderTokenName;
-(BOOL)sendRetried;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setSenderTokenName:(NSString *)arg1 ;
-(void)setSentTimestamp:(id)arg1 ;
-(id)sentTimestamp;
-(void)setSendRetried:(BOOL)arg1 ;
-(unsigned)pushFlags;
-(void)setPushFlags:(unsigned)arg1 ;
-(BOOL)ackReceived;
-(void)setAckReceived:(BOOL)arg1 ;
-(void)setMessageID:(unsigned long long)arg1 ;
-(APSOutgoingMessageCheckpointTrace *)checkpointTrace;
-(id)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)timeout;
-(BOOL)isEager;
-(BOOL)wasSent;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wasCancelled;
-(void)setPayloadLength:(unsigned long long)arg1 ;
-(unsigned long long)payloadLength;
-(id)originator;
-(void)setSent:(BOOL)arg1 ;
-(unsigned long long)pushType;
-(void)setPayloadFormat:(unsigned long long)arg1 ;
-(unsigned long long)ackTimestamp;
-(unsigned long long)messageID;
-(BOOL)isCritical;
-(long long)priority;
-(void)setTimestamp:(id)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(void)setCritical:(BOOL)arg1 ;
-(void)setOriginator:(id)arg1 ;
-(void)setCheckpointTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
-(void)setAckTimestamp:(unsigned long long)arg1 ;
@end

