/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)accessPointIndex;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(BOOL)hasAccessPointIndex;
-(void)setStopIndex:(unsigned)arg1 ;
-(unsigned)stopIndex;
-(void)setHasStopIndex:(BOOL)arg1 ;
-(BOOL)hasStopIndex;
-(unsigned)transferTime;
-(BOOL)hasUncertainArrival;
-(BOOL)uncertainArrival;
-(BOOL)displayStop;
-(BOOL)hasDisplayStop;
-(void)setTransferTime:(unsigned)arg1 ;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
-(void)setDisplayStop:(BOOL)arg1 ;
-(void)setHasDisplayStop:(BOOL)arg1 ;
-(void)setUncertainArrival:(BOOL)arg1 ;
-(void)setHasUncertainArrival:(BOOL)arg1 ;
@end

