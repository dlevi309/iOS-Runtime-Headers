/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOVectorTileRequest : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _accessKey;
	NSString* _countryCode;
	NSString* _languageCode;
	unsigned long long _lineId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _latitudeHint;
	float _longitudeHint;
	unsigned _scale;
	unsigned _size;
	unsigned _style;
	unsigned _version;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	BOOL _preflight;
	BOOL _venuesPreflight;
	BOOL _vloc;
	struct {
		unsigned has_lineId : 1;
		unsigned has_latitudeHint : 1;
		unsigned has_longitudeHint : 1;
		unsigned has_scale : 1;
		unsigned has_size : 1;
		unsigned has_style : 1;
		unsigned has_version : 1;
		unsigned has_x : 1;
		unsigned has_y : 1;
		unsigned has_z : 1;
		unsigned has_preflight : 1;
		unsigned has_venuesPreflight : 1;
		unsigned has_vloc : 1;
		unsigned read_accessKey : 1;
		unsigned read_countryCode : 1;
		unsigned read_languageCode : 1;
		unsigned wrote_accessKey : 1;
		unsigned wrote_countryCode : 1;
		unsigned wrote_languageCode : 1;
		unsigned wrote_lineId : 1;
		unsigned wrote_latitudeHint : 1;
		unsigned wrote_longitudeHint : 1;
		unsigned wrote_scale : 1;
		unsigned wrote_size : 1;
		unsigned wrote_style : 1;
		unsigned wrote_version : 1;
		unsigned wrote_x : 1;
		unsigned wrote_y : 1;
		unsigned wrote_z : 1;
		unsigned wrote_preflight : 1;
		unsigned wrote_venuesPreflight : 1;
		unsigned wrote_vloc : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) unsigned x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) unsigned y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) unsigned z; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) unsigned style; 
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode; 
@property (assign,nonatomic) BOOL hasPreflight; 
@property (assign,nonatomic) BOOL preflight; 
@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned size; 
@property (assign,nonatomic) BOOL hasScale; 
@property (assign,nonatomic) unsigned scale; 
@property (nonatomic,readonly) BOOL hasAccessKey; 
@property (nonatomic,retain) NSString * accessKey; 
@property (assign,nonatomic) BOOL hasLongitudeHint; 
@property (assign,nonatomic) float longitudeHint; 
@property (assign,nonatomic) BOOL hasLatitudeHint; 
@property (assign,nonatomic) float latitudeHint; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (assign,nonatomic) BOOL hasVenuesPreflight; 
@property (assign,nonatomic) BOOL venuesPreflight; 
@property (assign,nonatomic) BOOL hasVloc; 
@property (assign,nonatomic) BOOL vloc; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)languageCode;
-(NSString *)countryCode;
-(unsigned)size;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)scale;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(void)setScale:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)x;
-(unsigned)y;
-(unsigned)z;
-(void)setX:(unsigned)arg1 ;
-(void)setY:(unsigned)arg1 ;
-(void)setZ:(unsigned)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasSize;
-(void)setHasSize:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)_readLanguageCode;
-(BOOL)hasLanguageCode;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasCountryCode;
-(void)setLineId:(unsigned long long)arg1 ;
-(unsigned long long)lineId;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasLineId;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)_readCountryCode;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasZ;
-(void)_readAccessKey;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(BOOL)preflight;
-(void)setPreflight:(BOOL)arg1 ;
-(void)setHasPreflight:(BOOL)arg1 ;
-(BOOL)hasPreflight;
-(void)setHasScale:(BOOL)arg1 ;
-(BOOL)hasScale;
-(BOOL)hasAccessKey;
-(float)longitudeHint;
-(void)setLongitudeHint:(float)arg1 ;
-(void)setHasLongitudeHint:(BOOL)arg1 ;
-(BOOL)hasLongitudeHint;
-(float)latitudeHint;
-(void)setLatitudeHint:(float)arg1 ;
-(void)setHasLatitudeHint:(BOOL)arg1 ;
-(BOOL)hasLatitudeHint;
-(BOOL)venuesPreflight;
-(void)setVenuesPreflight:(BOOL)arg1 ;
-(void)setHasVenuesPreflight:(BOOL)arg1 ;
-(BOOL)hasVenuesPreflight;
-(BOOL)vloc;
-(void)setVloc:(BOOL)arg1 ;
-(void)setHasVloc:(BOOL)arg1 ;
-(BOOL)hasVloc;
@end

