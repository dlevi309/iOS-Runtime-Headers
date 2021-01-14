/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPBTransitArtwork, NSMutableArray, NSString;

@interface GEOCompanionFerryStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	PBDataReader* _reader;
	GEOJunctionElement* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	GEOPBTransitArtwork* _artworkOverride;
	NSMutableArray* _maneuverNames;
	NSMutableArray* _signposts;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _junctionType;
	int _maneuverType;
	struct {
		unsigned has_junctionType : 1;
		unsigned has_maneuverType : 1;
		unsigned read_junctionElements : 1;
		unsigned read_artworkOverride : 1;
		unsigned read_maneuverNames : 1;
		unsigned read_signposts : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> maneuverArtworkOverride; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasArtworkOverride; 
@property (nonatomic,retain) GEOPBTransitArtwork * artworkOverride; 
+(Class)signpostType;
+(Class)maneuverNameType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(int)maneuverType;
-(unsigned long long)hash;
-(GEOJunctionElement*)junctionElements;
-(int)junctionType;
-(unsigned long long)junctionElementsCount;
-(void)clearJunctionElements;
-(GEOPBTransitArtwork *)artworkOverride;
-(void)setJunctionType:(int)arg1 ;
-(void)addJunctionElement:(GEOJunctionElement)arg1 ;
-(void)addManeuverName:(id)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(void)setArtworkOverride:(GEOPBTransitArtwork *)arg1 ;
-(GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(BOOL)readFrom:(id)arg1 ;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(BOOL)hasJunctionType;
-(NSMutableArray *)maneuverNames;
-(id)junctionTypeAsString:(int)arg1 ;
-(int)StringAsJunctionType:(id)arg1 ;
-(void)setJunctionElements:(GEOJunctionElement*)arg1 count:(unsigned long long)arg2 ;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)signposts;
-(BOOL)hasArtworkOverride;
-(id<GEOTransitArtworkDataSource>)maneuverArtworkOverride;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

