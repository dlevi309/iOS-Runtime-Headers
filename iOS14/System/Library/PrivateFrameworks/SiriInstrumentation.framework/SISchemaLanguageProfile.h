/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaLanguageProfile : PBCodable {

	BOOL _hasL;
	NSData* _l;

}

@property (l,nonatomic,copy) NSData * l;                       //@synthesize l=_l - In the implementation block
@property (assign,nonatomic) BOOL hasL;                        //@synthesize hasL=_hasL - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)l;
-(id)dictionaryRepresentation;
-(BOOL)hasL;
-(void)setL:(NSData *)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasL:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

