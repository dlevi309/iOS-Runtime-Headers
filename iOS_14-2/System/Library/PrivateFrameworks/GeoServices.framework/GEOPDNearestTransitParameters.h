/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDNearestTransitParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _lineMuid;
	BOOL _isTransitOnly;
	struct {
		unsigned has_lineMuid : 1;
		unsigned has_isTransitOnly : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLineMuid; 
@property (assign,nonatomic) unsigned long long lineMuid; 
@property (assign,nonatomic) BOOL hasIsTransitOnly; 
@property (assign,nonatomic) BOOL isTransitOnly; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)lineMuid;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsTransitOnly:(BOOL)arg1 ;
-(BOOL)isTransitOnly;
-(void)setHasIsTransitOnly:(BOOL)arg1 ;
-(BOOL)hasIsTransitOnly;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLineMuid:(unsigned long long)arg1 ;
-(void)setHasLineMuid:(BOOL)arg1 ;
-(BOOL)hasLineMuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

