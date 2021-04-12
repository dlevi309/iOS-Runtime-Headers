/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion;

@interface GEOLPRBoundingBoxE7 : PBCodable <NSCopying> {

	int _eastLngE7;
	int _northLatE7;
	int _southLatE7;
	int _westLngE7;
	struct {
		unsigned has_eastLngE7 : 1;
		unsigned has_northLatE7 : 1;
		unsigned has_southLatE7 : 1;
		unsigned has_westLngE7 : 1;
	}  _flags;

}

@property (nonatomic,readonly) int centerLatE7; 
@property (nonatomic,readonly) int centerLngE7; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng center; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasSouthLatE7; 
@property (assign,nonatomic) int southLatE7; 
@property (assign,nonatomic) BOOL hasWestLngE7; 
@property (assign,nonatomic) int westLngE7; 
@property (assign,nonatomic) BOOL hasNorthLatE7; 
@property (assign,nonatomic) int northLatE7; 
@property (assign,nonatomic) BOOL hasEastLngE7; 
@property (assign,nonatomic) int eastLngE7; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(GEOCoarseLocationLatLng)center;
-(id)jsonRepresentation;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)westLngE7;
-(BOOL)isValid;
-(int)centerLatE7;
-(int)eastLngE7;
-(int)southLatE7;
-(int)northLatE7;
-(int)centerLngE7;
-(void)setSouthLatE7:(int)arg1 ;
-(void)setWestLngE7:(int)arg1 ;
-(void)setNorthLatE7:(int)arg1 ;
-(void)setEastLngE7:(int)arg1 ;
-(BOOL)hasNorthLatE7;
-(BOOL)hasSouthLatE7;
-(BOOL)hasEastLngE7;
-(BOOL)hasWestLngE7;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasSouthLatE7:(BOOL)arg1 ;
-(void)setHasWestLngE7:(BOOL)arg1 ;
-(void)setHasNorthLatE7:(BOOL)arg1 ;
-(void)setHasEastLngE7:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

