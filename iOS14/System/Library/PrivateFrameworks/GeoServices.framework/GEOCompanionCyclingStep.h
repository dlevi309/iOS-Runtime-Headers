/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, PBDataReader, GEOPBTransitArtwork, GEONameInfo, NSString;

@interface GEOCompanionCyclingStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	PBDataReader* _reader;
	GEOJunctionElement* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	GEOPBTransitArtwork* _artworkOverride;
	GEONameInfo* _exitNumber;
	NSMutableArray* _maneuverNames;
	NSString* _shield;
	NSMutableArray* _signposts;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _drivingSide;
	int _junctionType;
	int _maneuverType;
	int _shieldType;
	BOOL _toFreeway;
	struct {
		unsigned has_drivingSide : 1;
		unsigned has_junctionType : 1;
		unsigned has_maneuverType : 1;
		unsigned has_shieldType : 1;
		unsigned has_toFreeway : 1;
		unsigned read_junctionElements : 1;
		unsigned read_artworkOverride : 1;
		unsigned read_exitNumber : 1;
		unsigned read_maneuverNames : 1;
		unsigned read_shield : 1;
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
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) NSString * shield; 
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) int shieldType; 
@property (assign,nonatomic) BOOL hasToFreeway; 
@property (assign,nonatomic) BOOL toFreeway; 
@property (nonatomic,readonly) BOOL hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber; 
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide; 
@property (nonatomic,readonly) BOOL hasArtworkOverride; 
@property (nonatomic,retain) GEOPBTransitArtwork * artworkOverride; 
+(Class)signpostType;
+(Class)maneuverNameType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)shield;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(int)shieldType;
-(NSString *)description;
-(int)maneuverType;
-(unsigned long long)hash;
-(GEOJunctionElement*)junctionElements;
-(int)junctionType;
-(unsigned long long)junctionElementsCount;
-(BOOL)hasDrivingSide;
-(BOOL)hasShield;
-(int)drivingSide;
-(void)clearJunctionElements;
-(GEOPBTransitArtwork *)artworkOverride;
-(void)setJunctionType:(int)arg1 ;
-(void)addJunctionElement:(GEOJunctionElement)arg1 ;
-(void)addManeuverName:(id)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(void)setToFreeway:(BOOL)arg1 ;
-(void)setExitNumber:(GEONameInfo *)arg1 ;
-(void)setDrivingSide:(int)arg1 ;
-(void)setArtworkOverride:(GEOPBTransitArtwork *)arg1 ;
-(GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasShieldType;
-(unsigned long long)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(BOOL)readFrom:(id)arg1 ;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(BOOL)hasJunctionType;
-(NSMutableArray *)maneuverNames;
-(id)junctionTypeAsString:(int)arg1 ;
-(int)StringAsJunctionType:(id)arg1 ;
-(void)setJunctionElements:(GEOJunctionElement*)arg1 count:(unsigned long long)arg2 ;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(void)setHasToFreeway:(BOOL)arg1 ;
-(BOOL)hasToFreeway;
-(BOOL)hasExitNumber;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(NSMutableArray *)signposts;
-(BOOL)toFreeway;
-(id)drivingSideAsString:(int)arg1 ;
-(int)StringAsDrivingSide:(id)arg1 ;
-(BOOL)hasArtworkOverride;
-(id<GEOTransitArtworkDataSource>)maneuverArtworkOverride;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setShieldType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(GEONameInfo *)exitNumber;
-(void)setShield:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

