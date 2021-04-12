/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEOArrivalRegion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _arrivalRegion;
	int _arrivalRegionAction;
	unsigned _endNavigationTimeoutThreshold;
	struct {
		unsigned has_arrivalRegionAction : 1;
		unsigned has_endNavigationTimeoutThreshold : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasArrivalRegion; 
@property (nonatomic,retain) GEOMapRegion * arrivalRegion; 
@property (assign,nonatomic) BOOL hasArrivalRegionAction; 
@property (assign,nonatomic) int arrivalRegionAction; 
@property (assign,nonatomic) BOOL hasEndNavigationTimeoutThreshold; 
@property (assign,nonatomic) unsigned endNavigationTimeoutThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOMapRegion *)arrivalRegion;
-(void)setEndNavigationTimeoutThreshold:(unsigned)arg1 ;
-(void)setArrivalRegion:(GEOMapRegion *)arg1 ;
-(id)jsonRepresentation;
-(void)setArrivalRegionAction:(int)arg1 ;
-(BOOL)hasArrivalRegion;
-(int)arrivalRegionAction;
-(void)setHasArrivalRegionAction:(BOOL)arg1 ;
-(BOOL)hasArrivalRegionAction;
-(id)arrivalRegionActionAsString:(int)arg1 ;
-(int)StringAsArrivalRegionAction:(id)arg1 ;
-(unsigned)endNavigationTimeoutThreshold;
-(void)setHasEndNavigationTimeoutThreshold:(BOOL)arg1 ;
-(BOOL)hasEndNavigationTimeoutThreshold;
-(void)mergeFrom:(id)arg1 ;
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

