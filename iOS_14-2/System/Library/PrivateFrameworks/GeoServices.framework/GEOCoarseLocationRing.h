/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCoarseLocationRing : PBCodable <NSCopying> {

	GEOCoarseLocationPoint* _points;
	unsigned long long _pointsCount;
	unsigned long long _pointsSpace;

}

@property (nonatomic,readonly) unsigned long long pointsCount; 
@property (nonatomic,readonly) GEOCoarseLocationPoint* points; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)addPoints:(GEOCoarseLocationPoint)arg1 ;
-(void)clearPoints;
-(unsigned long long)pointsCount;
-(GEOCoarseLocationPoint)pointsAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPoints:(GEOCoarseLocationPoint*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOCoarseLocationPoint*)points;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

