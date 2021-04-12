/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDLinkedPlace;

@interface GEOPDContainedPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _childPlaces;
	unsigned long long _featureId;
	GEOPDLinkedPlace* _parentPlace;
	NSMutableArray* _siblingPlaces;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_featureId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_childPlaces : 1;
		unsigned read_parentPlace : 1;
		unsigned read_siblingPlaces : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_childPlaces : 1;
		unsigned wrote_featureId : 1;
		unsigned wrote_parentPlace : 1;
		unsigned wrote_siblingPlaces : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasParentPlace; 
@property (nonatomic,retain) GEOPDLinkedPlace * parentPlace; 
@property (nonatomic,retain) NSMutableArray * childPlaces; 
@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (nonatomic,retain) NSMutableArray * siblingPlaces; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)childPlaceType;
+(Class)siblingPlaceType;
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
-(unsigned long long)featureId;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(void)_readChildPlaces;
-(void)_addNoFlagsChildPlace:(id)arg1 ;
-(unsigned long long)childPlacesCount;
-(void)clearChildPlaces;
-(id)childPlaceAtIndex:(unsigned long long)arg1 ;
-(void)addChildPlace:(id)arg1 ;
-(NSMutableArray *)childPlaces;
-(void)setChildPlaces:(NSMutableArray *)arg1 ;
-(BOOL)hasParentPlace;
-(GEOPDLinkedPlace *)parentPlace;
-(unsigned long long)siblingPlacesCount;
-(NSMutableArray *)siblingPlaces;
-(void)_readParentPlace;
-(void)_readSiblingPlaces;
-(void)_addNoFlagsSiblingPlace:(id)arg1 ;
-(void)setParentPlace:(GEOPDLinkedPlace *)arg1 ;
-(void)clearSiblingPlaces;
-(id)siblingPlaceAtIndex:(unsigned long long)arg1 ;
-(void)addSiblingPlace:(id)arg1 ;
-(void)setSiblingPlaces:(NSMutableArray *)arg1 ;
@end

