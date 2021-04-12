/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_displayRegion : 1;
		unsigned wrote_localizedAlertText : 1;
		unsigned wrote_localizedChangeLists : 1;
		unsigned wrote_localizedDescription : 1;
		unsigned wrote_resolutionDate : 1;
		unsigned wrote_transitLineMuid : 1;
		unsigned wrote_updatedPlaces : 1;
		unsigned wrote_displayStyle : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedChangeListType;
+(Class)updatedPlaceType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readDisplayRegion;
-(GEOMapRegion *)displayRegion;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayRegion;
-(unsigned long long)transitLineMuid;
-(void)setTransitLineMuid:(unsigned long long)arg1 ;
-(void)setHasTransitLineMuid:(BOOL)arg1 ;
-(BOOL)hasTransitLineMuid;
-(void)_readLocalizedDescription;
-(int)displayStyle;
-(void)setDisplayStyle:(int)arg1 ;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(BOOL)hasDisplayStyle;
-(id)displayStyleAsString:(int)arg1 ;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(BOOL)hasLocalizedDescription;
-(void)_readLocalizedChangeLists;
-(void)_addNoFlagsLocalizedChangeList:(id)arg1 ;
-(void)_readUpdatedPlaces;
-(void)_addNoFlagsUpdatedPlace:(id)arg1 ;
-(void)_readLocalizedAlertText;
-(NSMutableArray *)localizedChangeLists;
-(NSString *)localizedAlertText;
-(unsigned long long)localizedChangeListsCount;
-(void)clearLocalizedChangeLists;
-(id)localizedChangeListAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedChangeList:(id)arg1 ;
-(unsigned long long)updatedPlacesCount;
-(void)clearUpdatedPlaces;
-(id)updatedPlaceAtIndex:(unsigned long long)arg1 ;
-(void)addUpdatedPlace:(id)arg1 ;
-(void)setLocalizedAlertText:(NSString *)arg1 ;
-(double)resolutionDate;
-(void)setResolutionDate:(double)arg1 ;
-(void)setHasResolutionDate:(BOOL)arg1 ;
-(BOOL)hasResolutionDate;
-(void)setLocalizedChangeLists:(NSMutableArray *)arg1 ;
-(NSMutableArray *)updatedPlaces;
-(void)setUpdatedPlaces:(NSMutableArray *)arg1 ;
-(BOOL)hasLocalizedAlertText;
@end

