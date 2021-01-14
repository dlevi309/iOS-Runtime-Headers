/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying> {

	int _transportType;
	BOOL _isEv;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasIsEv; 
@property (assign,nonatomic) BOOL isEv; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isEv;
-(BOOL)hasTransportType;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasIsEv;
-(void)setHasIsEv:(BOOL)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(id)description;
-(void)setIsEv:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

