/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	NSString* _baseURL;
	NSMutableArray* _countryRegionAllowlists;
	NSMutableArray* _deviceSKUAllowlists;
	NSString* _localizationURL;
	NSMutableArray* _sentinelTiles;
	NSMutableArray* _supportedLanguages;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _checksumType;
	int _requestStyle;
	int _scale;
	int _size;
	int _style;
	unsigned _timeToLiveSeconds;
	int _updateBehavior;
	unsigned _version;
	BOOL _useAuthProxy;
	struct {
		unsigned has_checksumType : 1;
		unsigned has_requestStyle : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned has_updateBehavior : 1;
		unsigned has_useAuthProxy : 1;
		unsigned read_unknownFields : 1;
		unsigned read_availableTiles : 1;
		unsigned read_baseURL : 1;
		unsigned read_countryRegionAllowlists : 1;
		unsigned read_deviceSKUAllowlists : 1;
		unsigned read_localizationURL : 1;
		unsigned read_sentinelTiles : 1;
		unsigned read_supportedLanguages : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) int scale; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* availableTiles; 
@property (nonatomic,retain) NSMutableArray * sentinelTiles; 
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL; 
@property (nonatomic,retain) NSMutableArray * supportedLanguages; 
@property (assign,nonatomic) BOOL hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior; 
@property (nonatomic,retain) NSMutableArray * countryRegionAllowlists; 
@property (assign,nonatomic) BOOL hasChecksumType; 
@property (assign,nonatomic) int checksumType; 
@property (assign,nonatomic) BOOL hasRequestStyle; 
@property (assign,nonatomic) int requestStyle; 
@property (assign,nonatomic) BOOL hasUseAuthProxy; 
@property (assign,nonatomic) BOOL useAuthProxy; 
@property (nonatomic,retain) NSMutableArray * deviceSKUAllowlists; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)sentinelTileType;
+(Class)supportedLanguageType;
+(Class)countryRegionAllowlistType;
+(Class)deviceSKUAllowlistType;
+(id)buildDisputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2 ;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearSentinelTiles;
-(PBUnknownFields *)unknownFields;
-(id)disputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2 ;
-(void)setRequestStyle:(int)arg1 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearAvailableTiles;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasTimeToLiveSeconds;
-(GEOTileSetRegion*)availableTiles;
-(BOOL)hasLocalizationURL;
-(void)clearDeviceSKUAllowlists;
-(unsigned long long)availableTilesCount;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)baseURL;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(id)init;
-(int)StringAsScale:(id)arg1 ;
-(NSMutableArray *)sentinelTiles;
-(unsigned)timeToLiveSeconds;
-(id)jsonRepresentation;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(void)setHasChecksumType:(BOOL)arg1 ;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(unsigned long long)deviceSKUAllowlistsCount;
-(int)checksumType;
-(int)size;
-(BOOL)hasBaseURL;
-(id)sizeAsString:(int)arg1 ;
-(id)dataForGenericTileType:(int)arg1 configuration:(id)arg2 ;
-(int)scale;
-(void)setHasRequestStyle:(BOOL)arg1 ;
-(BOOL)useAuthProxy;
-(void)setSentinelTiles:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(unsigned)maximumZoomLevelInRect:(SCD_Struct_GE36)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(void)setDeviceSKUAllowlists:(NSMutableArray *)arg1 ;
-(void)addDeviceSKUAllowlist:(id)arg1 ;
-(BOOL)isEquivalentTileSet:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)StringAsChecksumType:(id)arg1 ;
-(void)setHasUpdateBehavior:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)_bestCountryRegionAllowlistMatchForCountry:(id)arg1 region:(id)arg2 ;
-(id)deviceSKUAllowlistAtIndex:(unsigned long long)arg1 ;
-(void)setUseAuthProxy:(BOOL)arg1 ;
-(void)addCountryRegionAllowlist:(id)arg1 ;
-(unsigned)largestZoomLevelLEQ:(unsigned)arg1 inRect:(SCD_Struct_GE36)arg2 ;
-(id)scaleAsString:(int)arg1 ;
-(id)description;
-(int)StringAsUpdateBehavior:(id)arg1 ;
-(void)clearSupportedLanguages;
-(int)StringAsRequestStyle:(id)arg1 ;
-(id)requestStyleAsString:(int)arg1 ;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)clearCountryRegionAllowlists;
-(unsigned long long)sentinelTilesCount;
-(unsigned)maximumZoomLevelForMapPoint:(GEOCoarseLocationLatLng)arg1 ;
-(int)requestStyle;
-(unsigned long long)supportedLanguagesCount;
-(void)setScale:(int)arg1 ;
-(NSMutableArray *)deviceSKUAllowlists;
-(id)sentinelTileAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countryRegionAllowlistsCount;
-(unsigned long long)hash;
-(BOOL)hasUseAuthProxy;
-(NSString *)localizationURL;
-(int)StringAsSize:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCountryRegionAllowlists:(NSMutableArray *)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(BOOL)hasRequestStyle;
-(id)updateBehaviorAsString:(int)arg1 ;
-(BOOL)hasUpdateBehavior;
-(void)setVersion:(unsigned)arg1 ;
-(void)setStyle:(int)arg1 ;
-(int)updateBehavior;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(void)setHasUseAuthProxy:(BOOL)arg1 ;
-(NSMutableArray *)supportedLanguages;
-(id)countryRegionAllowlistAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChecksumType;
-(NSMutableArray *)countryRegionAllowlists;
-(void)_resetBestLanguage;
-(id)bestLanguageWithOverrideLocale:(id)arg1 ;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(BOOL)isDisputedBordersAllowlistedForCountry:(id)arg1 region:(id)arg2 ;
-(void)setChecksumType:(int)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseURL:(NSString *)arg1 ;
-(int)style;
-(id)initWithJSON:(id)arg1 ;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(void)addSentinelTile:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)checksumTypeAsString:(int)arg1 ;
-(unsigned)minimumZoomLevelInRect:(SCD_Struct_GE36)arg1 ;
@end

