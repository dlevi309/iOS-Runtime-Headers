/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, NSString, NSMutableArray;

@interface GEOResource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSData* _checksum;
	NSString* _filename;
	NSMutableArray* _filters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _connectionType;
	unsigned _preferWiFiAllowedStaleThreshold;
	int _resourceType;
	struct {
		unsigned has_connectionType : 1;
		unsigned has_preferWiFiAllowedStaleThreshold : 1;
		unsigned has_resourceType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_checksum : 1;
		unsigned read_filename : 1;
		unsigned read_filters : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_regions : 1;
		unsigned wrote_checksum : 1;
		unsigned wrote_filename : 1;
		unsigned wrote_filters : 1;
		unsigned wrote_connectionType : 1;
		unsigned wrote_preferWiFiAllowedStaleThreshold : 1;
		unsigned wrote_resourceType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType; 
@property (nonatomic,readonly) BOOL hasFilename; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,readonly) BOOL hasChecksum; 
@property (nonatomic,retain) NSData * checksum; 
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (nonatomic,retain) NSMutableArray * filters; 
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType; 
@property (assign,nonatomic) BOOL hasPreferWiFiAllowedStaleThreshold; 
@property (assign,nonatomic) unsigned preferWiFiAllowedStaleThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)filterType;
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(int)connectionType;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)filters;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion*)regions;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readRegions;
-(void)_readFilename;
-(void)_readChecksum;
-(void)_addNoFlagsRegion:(GEOTileSetRegion)arg1 ;
-(void)_readFilters;
-(void)_addNoFlagsFilter:(id)arg1 ;
-(NSData *)checksum;
-(void)setChecksum:(NSData *)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)addFilter:(id)arg1 ;
-(int)resourceType;
-(void)setResourceType:(int)arg1 ;
-(void)setHasResourceType:(BOOL)arg1 ;
-(BOOL)hasResourceType;
-(id)resourceTypeAsString:(int)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(BOOL)hasFilename;
-(BOOL)hasChecksum;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(id)connectionTypeAsString:(int)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(unsigned)preferWiFiAllowedStaleThreshold;
-(void)setPreferWiFiAllowedStaleThreshold:(unsigned)arg1 ;
-(void)setHasPreferWiFiAllowedStaleThreshold:(BOOL)arg1 ;
-(BOOL)hasPreferWiFiAllowedStaleThreshold;
-(BOOL)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2 ;
@end

