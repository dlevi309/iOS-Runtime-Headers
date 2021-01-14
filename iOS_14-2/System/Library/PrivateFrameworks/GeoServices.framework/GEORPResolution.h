/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapRegion, NSString, NSMutableArray;

@interface GEORPResolution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapRegion* _displayRegion;
	NSString* _localizedAlertText;
	NSMutableArray* _localizedChangeLists;
	NSString* _localizedDescription;
	double _resolutionDate;
	unsigned long long _transitLineMuid;
	NSMutableArray* _updatedPlaces;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _displayStyle;
	struct {
		unsigned has_resolutionDate : 1;
		unsigned has_transitLineMuid : 1;
		unsigned has_displayStyle : 1;
		unsigned read_displayRegion : 1;
		unsigned read_localizedAlertText : 1;
		unsigned read_localizedChangeLists : 1;
		unsigned read_localizedDescription : 1;
		unsigned read_updatedPlaces : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResolutionDate; 
@property (assign,nonatomic) double resolutionDate; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion; 
@property (nonatomic,retain) NSMutableArray * localizedChangeLists; 
@property (nonatomic,retain) NSMutableArray * updatedPlaces; 
@property (assign,nonatomic) BOOL hasTransitLineMuid; 
@property (assign,nonatomic) unsigned long long transitLineMuid; 
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription; 
@property (nonatomic,readonly) BOOL hasLocalizedAlertText; 
@property (nonatomic,retain) NSString * localizedAlertText; 
@property (assign,nonatomic) BOOL hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle; 
+(Class)localizedChangeListType;
+(Class)updatedPlaceType;
+(BOOL)isValid:(id)arg1 ;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDisplayRegion;
-(GEOMapRegion *)displayRegion;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasLocalizedDescription;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)localizedChangeLists;
-(NSString *)localizedAlertText;
-(void)setResolutionDate:(double)arg1 ;
-(void)addLocalizedChangeList:(id)arg1 ;
-(void)addUpdatedPlace:(id)arg1 ;
-(void)setLocalizedAlertText:(NSString *)arg1 ;
-(unsigned long long)localizedChangeListsCount;
-(void)clearLocalizedChangeLists;
-(id)localizedChangeListAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)updatedPlacesCount;
-(void)clearUpdatedPlaces;
-(id)updatedPlaceAtIndex:(unsigned long long)arg1 ;
-(double)resolutionDate;
-(void)setHasResolutionDate:(BOOL)arg1 ;
-(BOOL)hasResolutionDate;
-(NSMutableArray *)updatedPlaces;
-(void)setLocalizedChangeLists:(NSMutableArray *)arg1 ;
-(void)setUpdatedPlaces:(NSMutableArray *)arg1 ;
-(void)setHasTransitLineMuid:(BOOL)arg1 ;
-(BOOL)hasLocalizedAlertText;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(void)setDisplayStyle:(int)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(BOOL)hasDisplayStyle;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)displayStyleAsString:(int)arg1 ;
-(unsigned long long)transitLineMuid;
-(void)setTransitLineMuid:(unsigned long long)arg1 ;
-(BOOL)hasTransitLineMuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)displayStyle;
@end

