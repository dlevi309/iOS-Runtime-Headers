/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, ATPRequest, ATPResponse, ATPError;

@interface ATPMessage : PBCodable <NSCopying> {

	unsigned _messageID;
	int _messageType;
	NSData* _parameters;
	NSData* _paramsSignature;
	NSData* _payload;
	NSData* _payloadSignature;
	ATPRequest* _request;
	ATPResponse* _response;
	unsigned _sessionID;
	ATPError* _streamError;
	BOOL _additionalPayload;
	SCD_Struct_AT2 _has;

}

@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                         //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasMessageID; 
@property (assign,nonatomic) unsigned messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NSData * parameters;                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasParamsSignature; 
@property (nonatomic,retain) NSData * paramsSignature;                //@synthesize paramsSignature=_paramsSignature - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadSignature; 
@property (nonatomic,retain) NSData * payloadSignature;               //@synthesize payloadSignature=_payloadSignature - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) ATPRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ATPResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                        //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalPayload; 
@property (assign,nonatomic) BOOL additionalPayload;                  //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,readonly) BOOL hasStreamError; 
@property (nonatomic,retain) ATPError * streamError;                  //@synthesize streamError=_streamError - In the implementation block
-(NSData *)parameters;
-(void)setParameters:(NSData *)arg1 ;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(ATPError *)streamError;
-(int)messageType;
-(void)setPayload:(NSData *)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(BOOL)hasResponse;
-(void)setMessageID:(unsigned)arg1 ;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(BOOL)hasRequest;
-(void)setRequest:(ATPRequest *)arg1 ;
-(BOOL)hasParameters;
-(id)formattedDescription;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPayload;
-(NSData *)payload;
-(ATPRequest *)request;
-(void)setAdditionalPayload:(BOOL)arg1 ;
-(id)description;
-(ATPResponse *)response;
-(void)setResponse:(ATPResponse *)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)messageID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)additionalPayload;
-(void)setParamsSignature:(NSData *)arg1 ;
-(void)setPayloadSignature:(NSData *)arg1 ;
-(void)setStreamError:(ATPError *)arg1 ;
-(void)setHasMessageID:(BOOL)arg1 ;
-(BOOL)hasMessageID;
-(BOOL)hasParamsSignature;
-(BOOL)hasPayloadSignature;
-(void)setHasAdditionalPayload:(BOOL)arg1 ;
-(BOOL)hasAdditionalPayload;
-(BOOL)hasStreamError;
-(NSData *)paramsSignature;
-(NSData *)payloadSignature;
@end

