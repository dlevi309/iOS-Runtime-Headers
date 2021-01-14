/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventGridDurationEndStateErrorInfo : PBCodable <NSCopying> {

	unsigned _count;
	int _type;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

