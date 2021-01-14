/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAcousticProfile : PBCodable {

	BOOL _hasA;
	NSData* _a;

}

@property (a,nonatomic,copy) NSData * a;                       //@synthesize a=_a - In the implementation block
@property (assign,nonatomic) BOOL hasA;                        //@synthesize hasA=_hasA - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(BOOL)hasA;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setA:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasA:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)a;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

