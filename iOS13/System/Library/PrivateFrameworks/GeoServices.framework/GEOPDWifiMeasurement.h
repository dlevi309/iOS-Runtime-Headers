/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_entryTime : 1;
		unsigned wrote_exitTime : 1;
		unsigned wrote_locations : 1;
		unsigned wrote_wifiAccessPoints : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (nonatomic,retain) NSMutableArray * wifiAccessPoints; 
@property (assign,nonatomic) BOOL hasEntryTime; 
@property (assign,nonatomic) unsigned long long entryTime; 
@property (assign,nonatomic) BOOL hasExitTime; 
@property (assign,nonatomic) unsigned long long exitTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)locationType;
+(Class)wifiAccessPointType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)entryTime;
-(unsigned long long)exitTime;
-(void)setEntryTime:(unsigned long long)arg1 ;
-(void)setExitTime:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)_readLocations;
-(void)_addNoFlagsLocation:(id)arg1 ;
-(void)_readWifiAccessPoints;
-(void)_addNoFlagsWifiAccessPoint:(id)arg1 ;
-(unsigned long long)wifiAccessPointsCount;
-(void)clearWifiAccessPoints;
-(id)wifiAccessPointAtIndex:(unsigned long long)arg1 ;
-(void)addWifiAccessPoint:(id)arg1 ;
-(NSMutableArray *)wifiAccessPoints;
-(void)setWifiAccessPoints:(NSMutableArray *)arg1 ;
-(void)setHasEntryTime:(BOOL)arg1 ;
-(BOOL)hasEntryTime;
-(void)setHasExitTime:(BOOL)arg1 ;
-(BOOL)hasExitTime;
@end

