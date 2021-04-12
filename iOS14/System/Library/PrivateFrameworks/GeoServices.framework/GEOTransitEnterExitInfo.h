/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _accessPointIndex;
	unsigned _stopIndex;
	unsigned _transferTime;
	BOOL _displayStop;
	BOOL _uncertainArrival;
	struct {
		unsigned has_accessPointIndex : 1;
		unsigned has_stopIndex : 1;
		unsigned has_transferTime : 1;
		unsigned has_displayStop : 1;
		unsigned has_uncertainArrival : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex; 
@property (assign,nonatomic) BOOL hasStopIndex; 
@property (assign,nonatomic) unsigned stopIndex; 
@property (assign,nonatomic) BOOL hasDisplayStop; 
@property (assign,nonatomic) BOOL displayStop; 
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime; 
@property (assign,nonatomic) BOOL hasUncertainArrival; 
@property (assign,nonatomic) BOOL uncertainArrival; 
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
-(unsigned long long)hash;
-(unsigned)stopIndex;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStopIndex:(unsigned)arg1 ;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(void)setDisplayStop:(BOOL)arg1 ;
-(void)setTransferTime:(unsigned)arg1 ;
-(void)setUncertainArrival:(BOOL)arg1 ;
-(BOOL)displayStop;
-(unsigned)accessPointIndex;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(BOOL)hasAccessPointIndex;
-(void)setHasStopIndex:(BOOL)arg1 ;
-(BOOL)hasStopIndex;
-(void)setHasDisplayStop:(BOOL)arg1 ;
-(BOOL)hasDisplayStop;
-(unsigned)transferTime;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
-(BOOL)uncertainArrival;
-(void)setHasUncertainArrival:(BOOL)arg1 ;
-(BOOL)hasUncertainArrival;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

