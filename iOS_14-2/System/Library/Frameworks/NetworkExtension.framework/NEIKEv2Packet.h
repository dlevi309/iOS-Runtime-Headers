/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEIKEv2IKESPI, NEIKEv2EncryptedPayload, NSArray;

@interface NEIKEv2Packet : NSObject <NEPrettyDescription> {

	BOOL _isFragmented;
	BOOL _isResponse;
	BOOL _isInitiator;
	BOOL _decrypted;
	BOOL _isInbound;
	unsigned _fragmentNumber;
	unsigned _totalFragments;
	int _messageID;
	NEIKEv2IKESPI* _initiatorSPI;
	NEIKEv2IKESPI* _responderSPI;
	NEIKEv2EncryptedPayload* _encryptedPayload;
	NSArray* _customPayloads;
	NSArray* _notifications;
	NSArray* _packetDatagrams;
	NSArray* _rawPayloads;

}

@property (assign) BOOL decrypted;                                          //@synthesize decrypted=_decrypted - In the implementation block
@property (assign) BOOL isFragmented;                                       //@synthesize isFragmented=_isFragmented - In the implementation block
@property (assign) unsigned fragmentNumber;                                 //@synthesize fragmentNumber=_fragmentNumber - In the implementation block
@property (assign) unsigned totalFragments;                                 //@synthesize totalFragments=_totalFragments - In the implementation block
@property (assign) BOOL isInbound;                                          //@synthesize isInbound=_isInbound - In the implementation block
@property (retain) NSArray * packetDatagrams;                               //@synthesize packetDatagrams=_packetDatagrams - In the implementation block
@property (retain) NSArray * rawPayloads;                                   //@synthesize rawPayloads=_rawPayloads - In the implementation block
@property (readonly) BOOL hasErrors; 
@property (assign) int messageID;                                           //@synthesize messageID=_messageID - In the implementation block
@property (retain) NEIKEv2IKESPI * initiatorSPI;                            //@synthesize initiatorSPI=_initiatorSPI - In the implementation block
@property (retain) NEIKEv2IKESPI * responderSPI;                            //@synthesize responderSPI=_responderSPI - In the implementation block
@property (readonly) NEIKEv2IKESPI * senderSPI; 
@property (readonly) NEIKEv2IKESPI * receiverSPI; 
@property (assign) BOOL isResponse;                                         //@synthesize isResponse=_isResponse - In the implementation block
@property (assign) BOOL isInitiator;                                        //@synthesize isInitiator=_isInitiator - In the implementation block
@property (retain) NEIKEv2EncryptedPayload * encryptedPayload;              //@synthesize encryptedPayload=_encryptedPayload - In the implementation block
@property (retain) NSArray * customPayloads;                                //@synthesize customPayloads=_customPayloads - In the implementation block
@property (retain) NSArray * notifications;                                 //@synthesize notifications=_notifications - In the implementation block
+(id)copyTypeDescription;
+(unsigned long long)exchangeType;
+(BOOL)encryptPayloads;
+(id)createPacketFromReceivedData:(id)arg1 ikeSA:(id)arg2 ;
+(id)createPacketFromReceivedFragments:(id)arg1 ikeSA:(id)arg2 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setMessageID:(int)arg1 ;
-(BOOL)hasErrors;
-(NEIKEv2EncryptedPayload *)encryptedPayload;
-(void)setIsInitiator:(BOOL)arg1 ;
-(id)initOutbound;
-(id)copyShortDescription;
-(BOOL)hasNotification:(unsigned long long)arg1 ;
-(id)initResponse:(id)arg1 ;
-(BOOL)addNotifyPayload:(id)arg1 ;
-(BOOL)addNotification:(unsigned long long)arg1 data:(id)arg2 ;
-(NEIKEv2IKESPI *)initiatorSPI;
-(NEIKEv2IKESPI *)responderSPI;
-(BOOL)isInbound;
-(id)copyNotification:(unsigned long long)arg1 ;
-(id)copyUnifiedData;
-(id)description;
-(NSArray *)customPayloads;
-(void)setCustomPayloads:(NSArray *)arg1 ;
-(void)setInitiatorSPI:(NEIKEv2IKESPI *)arg1 ;
-(void)setResponderSPI:(NEIKEv2IKESPI *)arg1 ;
-(BOOL)isInitiator;
-(void)setIsInbound:(BOOL)arg1 ;
-(unsigned)fragmentNumber;
-(unsigned)totalFragments;
-(void)setTotalFragments:(unsigned)arg1 ;
-(void)setFragmentNumber:(unsigned)arg1 ;
-(BOOL)decrypted;
-(NSArray *)rawPayloads;
-(void)setRawPayloads:(NSArray *)arg1 ;
-(NEIKEv2IKESPI *)senderSPI;
-(unsigned)headerSizeForAddressFamily:(unsigned char)arg1 fragment:(BOOL)arg2 nonESPMarker:(BOOL)arg3 ;
-(NSArray *)packetDatagrams;
-(void)gatherPayloads;
-(BOOL)shouldFragmentForEncryptedPayloadSize:(unsigned)arg1 addressFamily:(unsigned char)arg2 nonESPMarker:(BOOL)arg3 ;
-(void)setPacketDatagrams:(NSArray *)arg1 ;
-(id)copyAdditionalAuthenticationDataForNextPayloadType:(unsigned long long)arg1 plainTextLen:(unsigned)arg2 fragmentNumber:(unsigned short)arg3 totalFragments:(unsigned short)arg4 encryption:(id)arg5 ;
-(unsigned)encryptedFragmentSizeForIKESA:(id)arg1 ;
-(void)setEncryptedPayload:(NEIKEv2EncryptedPayload *)arg1 ;
-(void)setIsFragmented:(BOOL)arg1 ;
-(void)setDecrypted:(BOOL)arg1 ;
-(id)createPacketDatagramWithPayloadData:(id)arg1 nextPayloadType:(unsigned long long)arg2 ikeSA:(id)arg3 needsChecksum:(BOOL)arg4 ;
-(void)filloutPayloads;
-(NEIKEv2IKESPI *)receiverSPI;
-(BOOL)isFragmented;
-(id)copyPacketDatagramsForIKESA:(id)arg1 ;
-(id)copyReceivedPacketForIKESA:(id)arg1 ;
-(void)addNotification:(unsigned long long)arg1 fromArray:(id)arg2 toPayloads:(id)arg3 ;
-(void)setNotifications:(NSArray *)arg1 ;
-(BOOL)isResponse;
-(NSArray *)notifications;
-(int)messageID;
-(void)setIsResponse:(BOOL)arg1 ;
-(BOOL)addNotification:(unsigned long long)arg1 ;
@end

