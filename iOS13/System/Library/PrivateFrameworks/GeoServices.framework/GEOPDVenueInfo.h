/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDVenueItemList, GEOPDLocatedInsideInfo;

@interface GEOPDVenueInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _filterElements;
	GEOPDVenueItemList* _itemList;
	GEOPDLocatedInsideInfo* _locatedInside;
	NSMutableArray* _venueFeatureIds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _featureType;
	int _goInsideLevel;
	struct {
		unsigned has_featureType : 1;
		unsigned has_goInsideLevel : 1;
		unsigned read_unknownFields : 1;
		unsigned read_filterElements : 1;
		unsigned read_itemList : 1;
		unsigned read_locatedInside : 1;
		unsigned read_venueFeatureIds : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_filterElements : 1;
		unsigned wrote_itemList : 1;
		unsigned wrote_locatedInside : 1;
		unsigned wrote_venueFeatureIds : 1;
		unsigned wrote_featureType : 1;
		unsigned wrote_goInsideLevel : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * venueFeatureIds; 
@property (assign,nonatomic) BOOL hasFeatureType; 
@property (assign,nonatomic) int featureType; 
@property (nonatomic,readonly) BOOL hasItemList; 
@property (nonatomic,retain) GEOPDVenueItemList * itemList; 
@property (nonatomic,readonly) BOOL hasLocatedInside; 
@property (nonatomic,retain) GEOPDLocatedInsideInfo * locatedInside; 
@property (nonatomic,retain) NSMutableArray * filterElements; 
@property (assign,nonatomic) BOOL hasGoInsideLevel; 
@property (assign,nonatomic) int goInsideLevel; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)venueInfoForPlaceData:(id)arg1 ;
+(Class)venueFeatureIdType;
+(Class)filterElementType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)featureType;
-(void)setFeatureType:(int)arg1 ;
-(void)setHasFeatureType:(BOOL)arg1 ;
-(BOOL)hasFeatureType;
-(id)featureTypeAsString:(int)arg1 ;
-(int)StringAsFeatureType:(id)arg1 ;
-(void)_readVenueFeatureIds;
-(void)_addNoFlagsVenueFeatureId:(id)arg1 ;
-(void)_readItemList;
-(void)_readLocatedInside;
-(void)_readFilterElements;
-(void)_addNoFlagsFilterElement:(id)arg1 ;
-(GEOPDVenueItemList *)itemList;
-(GEOPDLocatedInsideInfo *)locatedInside;
-(unsigned long long)venueFeatureIdsCount;
-(void)clearVenueFeatureIds;
-(id)venueFeatureIdAtIndex:(unsigned long long)arg1 ;
-(void)addVenueFeatureId:(id)arg1 ;
-(void)setItemList:(GEOPDVenueItemList *)arg1 ;
-(void)setLocatedInside:(GEOPDLocatedInsideInfo *)arg1 ;
-(unsigned long long)filterElementsCount;
-(void)clearFilterElements;
-(id)filterElementAtIndex:(unsigned long long)arg1 ;
-(void)addFilterElement:(id)arg1 ;
-(NSMutableArray *)venueFeatureIds;
-(NSMutableArray *)filterElements;
-(void)setVenueFeatureIds:(NSMutableArray *)arg1 ;
-(BOOL)hasItemList;
-(BOOL)hasLocatedInside;
-(void)setFilterElements:(NSMutableArray *)arg1 ;
-(int)goInsideLevel;
-(void)setGoInsideLevel:(int)arg1 ;
-(void)setHasGoInsideLevel:(BOOL)arg1 ;
-(BOOL)hasGoInsideLevel;
@end

