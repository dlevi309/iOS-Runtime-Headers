/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDRap : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _placecardRapButtonType;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasPlacecardRapButtonType; 
@property (assign,nonatomic) int placecardRapButtonType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)placecardRapButtonType;
-(void)setPlacecardRapButtonType:(int)arg1 ;
-(void)setHasPlacecardRapButtonType:(BOOL)arg1 ;
-(BOOL)hasPlacecardRapButtonType;
-(id)placecardRapButtonTypeAsString:(int)arg1 ;
-(int)StringAsPlacecardRapButtonType:(id)arg1 ;
@end

