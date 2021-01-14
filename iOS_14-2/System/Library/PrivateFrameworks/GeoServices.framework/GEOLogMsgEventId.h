/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventId : PBCodable <NSCopying> {

	unsigned long long _high;
	unsigned long long _low;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasHigh; 
@property (assign,nonatomic) unsigned long long high; 
@property (assign,nonatomic) BOOL hasLow; 
@property (assign,nonatomic) unsigned long long low; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned long long)low;
-(id)dictionaryRepresentation;
-(void)setLow:(unsigned long long)arg1 ;
-(unsigned long long)high;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasLow:(BOOL)arg1 ;
-(void)setHasHigh:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHigh:(unsigned long long)arg1 ;
-(BOOL)hasLow;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasHigh;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

