/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamMessaging : PBCodable <NSCopying> {

	unsigned _receivedConnSetup;
	unsigned _receivedNegotiationRequest;
	unsigned _receivedStartRequest;
	unsigned _sentConnSetup;
	unsigned _sentNegotiationRequest;
	unsigned _sentNegotiationResponse;
	unsigned _sentStartRequest;
	unsigned _sentStartResponse;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasReceivedNegotiationRequest; 
@property (assign,nonatomic) unsigned receivedNegotiationRequest;              //@synthesize receivedNegotiationRequest=_receivedNegotiationRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentNegotiationRequest; 
@property (assign,nonatomic) unsigned sentNegotiationRequest;                  //@synthesize sentNegotiationRequest=_sentNegotiationRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentNegotiationResponse; 
@property (assign,nonatomic) unsigned sentNegotiationResponse;                 //@synthesize sentNegotiationResponse=_sentNegotiationResponse - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedStartRequest; 
@property (assign,nonatomic) unsigned receivedStartRequest;                    //@synthesize receivedStartRequest=_receivedStartRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentStartRequest; 
@property (assign,nonatomic) unsigned sentStartRequest;                        //@synthesize sentStartRequest=_sentStartRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentStartResponse; 
@property (assign,nonatomic) unsigned sentStartResponse;                       //@synthesize sentStartResponse=_sentStartResponse - In the implementation block
@property (assign,nonatomic) BOOL hasSentConnSetup; 
@property (assign,nonatomic) unsigned sentConnSetup;                           //@synthesize sentConnSetup=_sentConnSetup - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedConnSetup; 
@property (assign,nonatomic) unsigned receivedConnSetup;                       //@synthesize receivedConnSetup=_receivedConnSetup - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setReceivedNegotiationRequest:(unsigned)arg1 ;
-(void)setHasReceivedNegotiationRequest:(BOOL)arg1 ;
-(BOOL)hasReceivedNegotiationRequest;
-(void)setSentNegotiationRequest:(unsigned)arg1 ;
-(void)setHasSentNegotiationRequest:(BOOL)arg1 ;
-(BOOL)hasSentNegotiationRequest;
-(void)setSentNegotiationResponse:(unsigned)arg1 ;
-(void)setHasSentNegotiationResponse:(BOOL)arg1 ;
-(BOOL)hasSentNegotiationResponse;
-(void)setReceivedStartRequest:(unsigned)arg1 ;
-(void)setHasReceivedStartRequest:(BOOL)arg1 ;
-(BOOL)hasReceivedStartRequest;
-(void)setSentStartRequest:(unsigned)arg1 ;
-(void)setHasSentStartRequest:(BOOL)arg1 ;
-(BOOL)hasSentStartRequest;
-(void)setSentStartResponse:(unsigned)arg1 ;
-(void)setHasSentStartResponse:(BOOL)arg1 ;
-(BOOL)hasSentStartResponse;
-(void)setSentConnSetup:(unsigned)arg1 ;
-(void)setHasSentConnSetup:(BOOL)arg1 ;
-(BOOL)hasSentConnSetup;
-(void)setReceivedConnSetup:(unsigned)arg1 ;
-(void)setHasReceivedConnSetup:(BOOL)arg1 ;
-(BOOL)hasReceivedConnSetup;
-(unsigned)receivedNegotiationRequest;
-(unsigned)sentNegotiationRequest;
-(unsigned)sentNegotiationResponse;
-(unsigned)receivedStartRequest;
-(unsigned)sentStartRequest;
-(unsigned)sentStartResponse;
-(unsigned)sentConnSetup;
-(unsigned)receivedConnSetup;
@end

