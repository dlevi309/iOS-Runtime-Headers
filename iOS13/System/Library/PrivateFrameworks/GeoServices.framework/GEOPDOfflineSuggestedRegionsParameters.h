/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDOfflineSuggestedRegionsParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _layers;
	NSMutableArray* _locations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_layers : 1;
		unsigned read_locations : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_layers : 1;
		unsigned wrote_locations : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (nonatomic,retain) NSMutableArray * layers; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)layerType;
+(BOOL)isValid:(id)arg1 ;
+(Class)locationType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)layers;
-(void)setLayers:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readLayers;
-(void)_addNoFlagsLayer:(id)arg1 ;
-(unsigned long long)layersCount;
-(void)clearLayers;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(void)addLayer:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)_readLocations;
-(void)_addNoFlagsLocation:(id)arg1 ;
@end

