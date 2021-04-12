/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOPDPriceDescription, GEOPDRating;

@interface GEOPDResultSnippet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _category;
	NSMutableArray* _childItems;
	NSMutableArray* _childPlaces;
	NSString* _locationString;
	NSString* _name;
	GEOPDPriceDescription* _priceDescription;
	GEOPDRating* _priceRange;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distanceDisplayThreshold;
	struct {
		unsigned has_distanceDisplayThreshold : 1;
		unsigned read_unknownFields : 1;
		unsigned read_category : 1;
		unsigned read_childItems : 1;
		unsigned read_childPlaces : 1;
		unsigned read_locationString : 1;
		unsigned read_name : 1;
		unsigned read_priceDescription : 1;
		unsigned read_priceRange : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,readonly) BOOL hasPriceRange; 
@property (nonatomic,retain) GEOPDRating * priceRange; 
@property (nonatomic,readonly) BOOL hasLocationString; 
@property (nonatomic,retain) NSString * locationString; 
@property (assign,nonatomic) BOOL hasDistanceDisplayThreshold; 
@property (assign,nonatomic) unsigned distanceDisplayThreshold; 
@property (nonatomic,retain) NSMutableArray * childPlaces; 
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,retain) GEOPDPriceDescription * priceDescription; 
@property (nonatomic,retain) NSMutableArray * childItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)childItemType;
+(id)resultSnippetForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(Class)childPlaceType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSMutableArray *)childPlaces;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(NSString *)locationString;
-(id)jsonRepresentation;
-(void)setPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(NSMutableArray *)childItems;
-(BOOL)hasLocationString;
-(unsigned long long)childPlacesCount;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(unsigned long long)childItemsCount;
-(id)initWithData:(id)arg1 ;
-(GEOPDRating *)priceRange;
-(void)addChildPlace:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(id)childItemAtIndex:(unsigned long long)arg1 ;
-(NSString *)name;
-(BOOL)hasPriceRange;
-(GEOPDPriceDescription *)priceDescription;
-(void)setHasDistanceDisplayThreshold:(BOOL)arg1 ;
-(id)description;
-(void)setChildItems:(NSMutableArray *)arg1 ;
-(BOOL)hasPriceDescription;
-(BOOL)hasCategory;
-(void)clearChildPlaces;
-(id)childPlaceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)addChildItem:(id)arg1 ;
-(void)clearChildItems;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)distanceDisplayThreshold;
-(BOOL)hasDistanceDisplayThreshold;
-(void)setDistanceDisplayThreshold:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriceRange:(GEOPDRating *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setChildPlaces:(NSMutableArray *)arg1 ;
@end

