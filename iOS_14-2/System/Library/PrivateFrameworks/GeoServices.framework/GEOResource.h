/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned _alternateResourceURLIndex;
	int _connectionType;
	unsigned _preferWiFiAllowedStaleThreshold;
	int _resourceType;
	unsigned _timeToLiveSeconds;
	int _updateMethod;
	int _validationMethod;
	struct {
		unsigned has_alternateResourceURLIndex : 1;
		unsigned has_connectionType : 1;
		unsigned has_preferWiFiAllowedStaleThreshold : 1;
		unsigned has_resourceType : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned has_updateMethod : 1;
		unsigned has_validationMethod : 1;
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_checksum : 1;
		unsigned read_filename : 1;
		unsigned read_filters : 1;
		unsigned wrote_anyField : 1;
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
@property (assign,nonatomic) BOOL hasValidationMethod; 
@property (assign,nonatomic) int validationMethod; 
@property (assign,nonatomic) BOOL hasAlternateResourceURLIndex; 
@property (assign,nonatomic) unsigned alternateResourceURLIndex; 
@property (assign,nonatomic) BOOL hasUpdateMethod; 
@property (assign,nonatomic) int updateMethod; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)filterType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearFilters;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearRegions;
-(BOOL)hasTimeToLiveSeconds;
-(unsigned long long)regionsCount;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(int)connectionType;
-(void)setResourceType:(int)arg1 ;
-(unsigned long long)filtersCount;
-(id)init;
-(void)setHasResourceType:(BOOL)arg1 ;
-(unsigned)timeToLiveSeconds;
-(id)jsonRepresentation;
-(int)resourceType;
-(void)setConnectionType:(int)arg1 ;
-(void)setValidationMethod:(int)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)filename;
-(NSMutableArray *)filters;
-(BOOL)hasConnectionType;
-(GEOTileSetRegion*)regions;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasChecksum;
-(void)setAlternateResourceURLIndex:(unsigned)arg1 ;
-(id)validationMethodAsString:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setUpdateMethod:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)updateMethodAsString:(int)arg1 ;
-(BOOL)hasUpdateMethod;
-(void)addFilter:(id)arg1 ;
-(int)updateMethod;
-(int)StringAsValidationMethod:(id)arg1 ;
-(id)description;
-(unsigned)alternateResourceURLIndex;
-(BOOL)hasPreferWiFiAllowedStaleThreshold;
-(void)setHasAlternateResourceURLIndex:(BOOL)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(id)connectionTypeAsString:(int)arg1 ;
-(BOOL)hasResourceType;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)setHasPreferWiFiAllowedStaleThreshold:(BOOL)arg1 ;
-(id)resourceTypeAsString:(int)arg1 ;
-(void)setPreferWiFiAllowedStaleThreshold:(unsigned)arg1 ;
-(BOOL)hasFilename;
-(void)setHasUpdateMethod:(BOOL)arg1 ;
-(BOOL)hasValidationMethod;
-(unsigned long long)hash;
-(BOOL)hasAlternateResourceURLIndex;
-(BOOL)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)preferWiFiAllowedStaleThreshold;
-(int)validationMethod;
-(int)StringAsConnectionType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setChecksum:(NSData *)arg1 ;
-(NSData *)checksum;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasValidationMethod:(BOOL)arg1 ;
-(int)StringAsUpdateMethod:(id)arg1 ;
@end

