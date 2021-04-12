/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _entranceNameDisplayString;
	NSMutableArray* _entranceZoomNames;
	NSString* _exitNameDisplayString;
	NSMutableArray* _exitZoomNames;
	GEOLatLng* _location;
	unsigned long long _muid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _accessPointIndex;
	unsigned _stationIndex;
	struct {
		unsigned has_muid : 1;
		unsigned has_accessPointIndex : 1;
		unsigned has_stationIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_entranceNameDisplayString : 1;
		unsigned read_entranceZoomNames : 1;
		unsigned read_exitNameDisplayString : 1;
		unsigned read_exitZoomNames : 1;
		unsigned read_location : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex; 
@property (nonatomic,retain) NSMutableArray * entranceZoomNames; 
@property (nonatomic,retain) NSMutableArray * exitZoomNames; 
@property (nonatomic,readonly) BOOL hasEntranceNameDisplayString; 
@property (nonatomic,retain) NSString * entranceNameDisplayString; 
@property (nonatomic,readonly) BOOL hasExitNameDisplayString; 
@property (nonatomic,retain) NSString * exitNameDisplayString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)exitZoomNameType;
+(Class)entranceZoomNameType;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOLatLng *)location;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStationIndex;
-(unsigned)stationIndex;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(id)bestExitName;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(id)bestEntranceNameWithLocale:(out id*)arg1 ;
-(id)bestExitNameWithLocale:(out id*)arg1 ;
-(id)bestEntranceName;
-(id)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)entranceNameDisplayString;
-(NSString *)exitNameDisplayString;
-(void)setStationIndex:(unsigned)arg1 ;
-(NSMutableArray *)exitZoomNames;
-(void)addEntranceZoomName:(id)arg1 ;
-(void)addExitZoomName:(id)arg1 ;
-(void)setEntranceNameDisplayString:(NSString *)arg1 ;
-(unsigned long long)entranceZoomNamesCount;
-(void)setExitNameDisplayString:(NSString *)arg1 ;
-(void)clearEntranceZoomNames;
-(id)entranceZoomNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)exitZoomNamesCount;
-(void)clearExitZoomNames;
-(id)exitZoomNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(NSMutableArray *)entranceZoomNames;
-(void)setEntranceZoomNames:(NSMutableArray *)arg1 ;
-(void)setExitZoomNames:(NSMutableArray *)arg1 ;
-(BOOL)hasEntranceNameDisplayString;
-(BOOL)hasExitNameDisplayString;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(unsigned)accessPointIndex;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(BOOL)hasAccessPointIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

