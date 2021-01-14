/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray, GEOMapRegionE7;

@interface GEOLPRLicensePlateRegion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _identifier;
	NSMutableArray* _licensePlateInfos;
	GEOMapRegionE7* _mapRegion;
	NSMutableArray* _regions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_identifier : 1;
		unsigned read_licensePlateInfos : 1;
		unsigned read_mapRegion : 1;
		unsigned read_regions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegionE7 * mapRegion; 
@property (nonatomic,retain) NSMutableArray * licensePlateInfos; 
@property (nonatomic,retain) NSMutableArray * regions; 
+(Class)licensePlateInfoType;
+(Class)regionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(id)regionAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addRegion:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addLicensePlateInfo:(id)arg1 ;
-(unsigned long long)licensePlateInfosCount;
-(void)clearLicensePlateInfos;
-(id)licensePlateInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)licensePlateInfos;
-(void)setLicensePlateInfos:(NSMutableArray *)arg1 ;
-(GEOMapRegionE7 *)mapRegion;
-(NSMutableArray *)regions;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(id)description;
-(void)setMapRegion:(GEOMapRegionE7 *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

