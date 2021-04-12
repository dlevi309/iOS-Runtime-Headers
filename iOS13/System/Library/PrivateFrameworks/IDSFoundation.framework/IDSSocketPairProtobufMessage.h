/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>
#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage <IDSSocketPairMessage> {

	unsigned long long _payloadOffset;
	unsigned long long _payloadLength;
	unsigned short _isResponse;
	unsigned short _type;
	NSData* _data;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) unsigned short isResponse;                      //@synthesize isResponse=_isResponse - In the implementation block
@property (nonatomic,readonly) unsigned short type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) BOOL expectsPeerResponse;                       //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (nonatomic,readonly) BOOL wantsAppAck;                               //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign,nonatomic) BOOL compressed;                                  //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * messageUUID;                         //@synthesize messageUUID=_messageUUID - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                              //@synthesize expiryDate=_expiryDate - In the implementation block
-(unsigned short)type;
-(NSData *)data;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(unsigned short)isResponse;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(unsigned char)command;
-(NSString *)messageUUID;
-(BOOL)wantsAppAck;
-(BOOL)expectsPeerResponse;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(NSString *)peerResponseIdentifier;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9 ;
@end

