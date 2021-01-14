/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {

	GEOLatLng* _coordinate;
	unsigned long long _stopID;
	struct {
		unsigned has_stopID : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStopID; 
@property (assign,nonatomic) unsigned long long stopID; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasCoordinate;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)stopID;
-(GEOLatLng *)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStopID;
-(void)setHasStopID:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithTransitStop:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStopID:(unsigned long long)arg1 ;
@end

