/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAnyEvent : PBCodable {

	int _anyEventType;
	NSData* _payload;
	SCD_Struct_SI1 _has;
	BOOL _hasPayload;

}

@property (assign,nonatomic) int anyEventType;                  //@synthesize anyEventType=_anyEventType - In the implementation block
@property (assign,nonatomic) BOOL hasAnyEventType; 
@property (nonatomic,copy) NSData * payload;                    //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL hasPayload;                   //@synthesize hasPayload=_hasPayload - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)jsonData;
-(BOOL)hasPayload;
-(NSData *)payload;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)anyEventType;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAnyEventType:(int)arg1 ;
-(BOOL)hasAnyEventType;
-(void)setHasAnyEventType:(BOOL)arg1 ;
-(void)setHasPayload:(BOOL)arg1 ;
@end

