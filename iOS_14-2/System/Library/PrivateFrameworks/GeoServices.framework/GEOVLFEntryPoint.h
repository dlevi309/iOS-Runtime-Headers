/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFEntryPoint : PBCodable <NSCopying> {

	int _accessPoint;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasAccessPoint; 
@property (assign,nonatomic) int accessPoint; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)accessPoint;
-(void)setAccessPoint:(int)arg1 ;
-(BOOL)hasAccessPoint;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasAccessPoint:(BOOL)arg1 ;
-(id)accessPointAsString:(int)arg1 ;
-(int)StringAsAccessPoint:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

