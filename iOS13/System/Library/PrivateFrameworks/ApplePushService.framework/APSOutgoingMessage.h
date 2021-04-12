/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)timestamp;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)timeout;
-(void)setTimeout:(unsigned long long)arg1 ;
-(void)setTimestamp:(id)arg1 ;
-(BOOL)wasCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(unsigned long long)messageID;
-(void)setMessageID:(unsigned long long)arg1 ;
-(APSOutgoingMessageCheckpointTrace *)checkpointTrace;
-(void)setAckTimestamp:(unsigned long long)arg1 ;
-(void)setCheckpointTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
-(id)eagernessTimeoutTime;
-(BOOL)isEager;
-(unsigned long long)_effectiveSendTimeout;
-(id)sendTimeoutTime;
-(id)rawTimeoutTime;
-(BOOL)isCritical;
-(void)setCritical:(BOOL)arg1 ;
-(BOOL)wasSent;
-(void)setSent:(BOOL)arg1 ;
-(long long)sendInterface;
-(void)setSendInterface:(long long)arg1 ;
-(BOOL)hasTimedOut;
-(void)setTimedOut:(BOOL)arg1 ;
-(unsigned long long)payloadFormat;
-(void)setPayloadFormat:(unsigned long long)arg1 ;
-(unsigned long long)payloadLength;
-(void)setPayloadLength:(unsigned long long)arg1 ;
-(unsigned long long)pushType;
-(void)setPushType:(unsigned long long)arg1 ;
-(NSString *)senderTokenName;
-(void)setSenderTokenName:(NSString *)arg1 ;
-(void)setOriginator:(id)arg1 ;
-(id)originator;
-(void)setSentTimestamp:(id)arg1 ;
-(id)sentTimestamp;
-(void)setSendRetried:(BOOL)arg1 ;
-(BOOL)sendRetried;
-(unsigned long long)ackTimestamp;
-(unsigned)pushFlags;
-(void)setPushFlags:(unsigned)arg1 ;
-(BOOL)ackReceived;
-(void)setAckReceived:(BOOL)arg1 ;
@end

