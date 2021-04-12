/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaUserDataContainer : PBCodable {

	BOOL _hasC;
	NSData* _c;

}

@property (c,nonatomic,copy) NSData * c;                       //@synthesize c=_c - In the implementation block
@property (assign,nonatomic) BOOL hasC;                        //@synthesize hasC=_hasC - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)c;
-(id)dictionaryRepresentation;
-(void)setC:(NSData *)arg1 ;
-(BOOL)hasC;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasC:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

