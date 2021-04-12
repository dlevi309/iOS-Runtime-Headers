/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOOriginalWaypointRoute : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _routeLegs;
	unsigned _identifier;
	int _purpose;
	struct {
		unsigned has_identifier : 1;
		unsigned has_purpose : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,retain) NSMutableArray * routeLegs; 
@property (assign,nonatomic) BOOL hasPurpose; 
@property (assign,nonatomic) int purpose; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routeLegType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)purpose;
-(void)setPurpose:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(NSMutableArray *)routeLegs;
-(void)mergeFrom:(id)arg1 ;
-(void)addRouteLeg:(id)arg1 ;
-(unsigned long long)routeLegsCount;
-(void)clearRouteLegs;
-(id)routeLegAtIndex:(unsigned long long)arg1 ;
-(void)setRouteLegs:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasPurpose;
-(void)setHasPurpose:(BOOL)arg1 ;
-(int)StringAsPurpose:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(unsigned)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)purposeAsString:(int)arg1 ;
@end

