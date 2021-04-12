/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLngE7, GEOLatLng, NSMutableArray;

@interface GEOWiFiBSS : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _attributes;
	NSString* _identifier;
	GEOLatLngE7* _latLngE7;
	GEOLatLng* _location;
	NSMutableArray* _qualities;
	long long _uniqueIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_uniqueIdentifier : 1;
		unsigned read_attributes : 1;
		unsigned read_identifier : 1;
		unsigned read_latLngE7 : 1;
		unsigned read_location : 1;
		unsigned read_qualities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (nonatomic,readonly) unsigned long long attributesCount; 
@property (nonatomic,readonly) int* attributes; 
@property (nonatomic,retain) NSMutableArray * qualities; 
@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) long long uniqueIdentifier; 
@property (nonatomic,readonly) BOOL hasLatLngE7; 
@property (nonatomic,retain) GEOLatLngE7 * latLngE7; 
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasUniqueIdentifier;
-(BOOL)hasIdentifier;
-(GEOLatLng *)location;
-(long long)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)clearAttributes;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(int*)attributes;
-(id)description;
-(BOOL)hasLocation;
-(GEOLatLngE7 *)latLngE7;
-(void)addAttributes:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)attributesCount;
-(NSMutableArray *)qualities;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addQualities:(id)arg1 ;
-(void)setLatLngE7:(GEOLatLngE7 *)arg1 ;
-(int)attributesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributesAsString:(int)arg1 ;
-(void)setQualities:(NSMutableArray *)arg1 ;
-(int)StringAsAttributes:(id)arg1 ;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasLatLngE7;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

