/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaLocaleConfidence : PBCodable {

	NSString* _locale;
	unsigned _confidence;
	SCD_Struct_SI1 _has;
	BOOL _hasLocale;

}

@property (nonatomic,copy) NSString * locale;                  //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL hasLocale;                   //@synthesize hasLocale=_hasLocale - In the implementation block
@property (assign,nonatomic) unsigned confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (nonatomic,readonly) NSData * jsonData; 
-(unsigned)confidence;
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(BOOL)hasLocale;
-(void)setLocale:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setConfidence:(unsigned)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasLocale:(BOOL)arg1 ;
@end

