/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>
#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage <IDSSocketPairMessage> {

	unsigned _sequenceNumber;
	unsigned short _streamID;
	unsigned long long _payloadOffset;
	unsigned long long _payloadLength;
	NSData* _data;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressed;
	BOOL _didWakeHint;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (assign,nonatomic) unsigned sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL expectsPeerResponse;                       //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (nonatomic,readonly) BOOL wantsAppAck;                               //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign,nonatomic) BOOL compressed;                                  //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) BOOL didWakeHint;                                 //@synthesize didWakeHint=_didWakeHint - In the implementation block
@property (nonatomic,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * messageUUID;                         //@synthesize messageUUID=_messageUUID - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                              //@synthesize expiryDate=_expiryDate - In the implementation block
-(void)setSequenceNumber:(unsigned)arg1 ;
-(BOOL)compressed;
-(unsigned)sequenceNumber;
-(NSData *)data;
-(unsigned short)streamID;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(void)setStreamID:(unsigned short)arg1 ;
-(BOOL)didWakeHint;
-(NSString *)peerResponseIdentifier;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 didWakeHint:(BOOL)arg6 peerResponseIdentifier:(id)arg7 messageUUID:(id)arg8 data:(id)arg9 expiryDate:(id)arg10 ;
-(void)setDidWakeHint:(BOOL)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(BOOL)expectsPeerResponse;
-(NSString *)messageUUID;
-(unsigned char)command;
-(BOOL)wantsAppAck;
@end

