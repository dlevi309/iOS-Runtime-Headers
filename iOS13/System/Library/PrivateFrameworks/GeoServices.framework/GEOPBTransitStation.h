/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_location : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_nameDisplayString : 1;
		unsigned wrote_zoomNames : 1;
		unsigned wrote_stationIndex : 1;
		unsigned wrote_structureType : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)identifier;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(BOOL)hasLocation;
-(void)_readLocation;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(unsigned)stationIndex;
-(void)setStationIndex:(unsigned)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(BOOL)hasStationIndex;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setZoomNames:(NSMutableArray *)arg1 ;
-(BOOL)hasStructureType;
-(int)structureType;
-(void)_readNameDisplayString;
-(NSString *)nameDisplayString;
-(BOOL)hasNameDisplayString;
-(void)_readZoomNames;
-(void)_addNoFlagsZoomName:(id)arg1 ;
-(unsigned long long)zoomNamesCount;
-(void)clearZoomNames;
-(id)zoomNameAtIndex:(unsigned long long)arg1 ;
-(void)addZoomName:(id)arg1 ;
-(NSMutableArray *)zoomNames;
-(id)bestName;
-(void)setStructureType:(int)arg1 ;
-(void)setHasStructureType:(BOOL)arg1 ;
-(id)structureTypeAsString:(int)arg1 ;
-(int)StringAsStructureType:(id)arg1 ;
@end

