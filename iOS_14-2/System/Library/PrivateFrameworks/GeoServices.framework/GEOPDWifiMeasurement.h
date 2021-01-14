/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDWifiMeasurement : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _entryTime;
	unsigned long long _exitTime;
	NSMutableArray* _locations;
	NSMutableArray* _wifiAccessPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_entryTime : 1;
		unsigned has_exitTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_locations : 1;
		unsigned read_wifiAccessPoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (nonatomic,retain) NSMutableArray * wifiAccessPoints; 
@property (assign,nonatomic) BOOL hasEntryTime; 
@property (assign,nonatomic) unsigned long long entryTime; 
@property (assign,nonatomic) BOOL hasExitTime; 
@property (assign,nonatomic) unsigned long long exitTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)locationType;
+(BOOL)isValid:(id)arg1 ;
+(Class)wifiAccessPointType;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(PBUnknownFields *)unknownFields;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(unsigned long long)locationsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)exitTime;
-(unsigned long long)hash;
-(unsigned long long)entryTime;
-(BOOL)readFrom:(id)arg1 ;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasExitTime;
-(void)addWifiAccessPoint:(id)arg1 ;
-(void)setEntryTime:(unsigned long long)arg1 ;
-(void)setExitTime:(unsigned long long)arg1 ;
-(BOOL)hasEntryTime;
-(unsigned long long)wifiAccessPointsCount;
-(void)clearWifiAccessPoints;
-(id)wifiAccessPointAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wifiAccessPoints;
-(void)setWifiAccessPoints:(NSMutableArray *)arg1 ;
-(void)setHasEntryTime:(BOOL)arg1 ;
-(void)setHasExitTime:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

