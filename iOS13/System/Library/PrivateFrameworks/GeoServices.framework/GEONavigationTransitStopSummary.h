/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {

	GEOLatLng* _coordinate;
	unsigned long long _stopID;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasStopID; 
@property (assign,nonatomic) unsigned long long stopID; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasCoordinate;
-(unsigned long long)stopID;
-(void)setStopID:(unsigned long long)arg1 ;
-(void)setHasStopID:(BOOL)arg1 ;
-(BOOL)hasStopID;
-(id)initWithTransitStop:(id)arg1 ;
@end

