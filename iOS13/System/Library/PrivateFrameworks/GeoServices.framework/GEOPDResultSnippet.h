/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE92 _flags;

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
+(BOOL)isValid:(id)arg1 ;
+(Class)childPlaceType;
+(Class)childItemType;
+(id)resultSnippetForPlaceData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasCategory;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCategory;
-(void)_readName;
-(void)_readPriceRange;
-(void)_readLocationString;
-(void)_readChildPlaces;
-(void)_addNoFlagsChildPlace:(id)arg1 ;
-(void)_readPriceDescription;
-(void)_readChildItems;
-(void)_addNoFlagsChildItem:(id)arg1 ;
-(GEOPDRating *)priceRange;
-(NSString *)locationString;
-(GEOPDPriceDescription *)priceDescription;
-(void)setPriceRange:(GEOPDRating *)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(unsigned long long)childPlacesCount;
-(void)clearChildPlaces;
-(id)childPlaceAtIndex:(unsigned long long)arg1 ;
-(void)addChildPlace:(id)arg1 ;
-(void)setPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(unsigned long long)childItemsCount;
-(void)clearChildItems;
-(id)childItemAtIndex:(unsigned long long)arg1 ;
-(void)addChildItem:(id)arg1 ;
-(NSMutableArray *)childPlaces;
-(NSMutableArray *)childItems;
-(BOOL)hasPriceRange;
-(BOOL)hasLocationString;
-(unsigned)distanceDisplayThreshold;
-(void)setDistanceDisplayThreshold:(unsigned)arg1 ;
-(void)setHasDistanceDisplayThreshold:(BOOL)arg1 ;
-(BOOL)hasDistanceDisplayThreshold;
-(void)setChildPlaces:(NSMutableArray *)arg1 ;
-(BOOL)hasPriceDescription;
-(void)setChildItems:(NSMutableArray *)arg1 ;
@end

