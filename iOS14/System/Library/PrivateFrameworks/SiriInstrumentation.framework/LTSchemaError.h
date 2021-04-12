/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaError : PBCodable {

	NSString* _domain;
	unsigned _code;
	SCD_Struct_SI1 _has;
	BOOL _hasDomain;

}

@property (nonatomic,copy) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasDomain;                   //@synthesize hasDomain=_hasDomain - In the implementation block
@property (assign,nonatomic) unsigned code;                    //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCode:(unsigned)arg1 ;
-(BOOL)hasDomain;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDomain:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

