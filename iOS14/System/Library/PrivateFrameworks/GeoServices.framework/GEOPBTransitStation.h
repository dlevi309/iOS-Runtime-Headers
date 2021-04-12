/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, NSString, NSMutableArray;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _location;
	unsigned long long _muid;
	NSString* _nameDisplayString;
	NSMutableArray* _zoomNames;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _stationIndex;
	int _structureType;
	struct {
		unsigned has_muid : 1;
		unsigned has_stationIndex : 1;
		unsigned has_structureType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_location : 1;
		unsigned read_nameDisplayString : 1;
		unsigned read_zoomNames : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasStructureType; 
@property (assign,nonatomic) int structureType; 
@property (nonatomic,retain) NSMutableArray * zoomNames; 
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)zoomNameType;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setStructureType:(int)arg1 ;
-(int)structureType;
-(void)setHasStructureType:(BOOL)arg1 ;
-(BOOL)hasStructureType;
-(id)structureTypeAsString:(int)arg1 ;
-(int)StringAsStructureType:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOLatLng *)location;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setZoomNames:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStationIndex;
-(unsigned)stationIndex;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(NSString *)description;
-(BOOL)hasLocation;
-(id)bestName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(NSMutableArray *)zoomNames;
-(id)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStationIndex:(unsigned)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(NSString *)nameDisplayString;
-(BOOL)hasNameDisplayString;
-(void)addZoomName:(id)arg1 ;
-(unsigned long long)zoomNamesCount;
-(void)clearZoomNames;
-(id)zoomNameAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

