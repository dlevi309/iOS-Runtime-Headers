/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBrowseCategory;

@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _placeIndexs;
	GEOPDBrowseCategory* _category;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_placeIndexs : 1;
		unsigned read_category : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_placeIndexs : 1;
		unsigned wrote_category : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * category; 
@property (nonatomic,readonly) unsigned long long placeIndexsCount; 
@property (nonatomic,readonly) unsigned* placeIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOPDBrowseCategory *)category;
-(void)setCategory:(GEOPDBrowseCategory *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCategory;
-(void)_readPlaceIndexs;
-(void)_addNoFlagsPlaceIndex:(unsigned)arg1 ;
-(unsigned long long)placeIndexsCount;
-(void)clearPlaceIndexs;
-(unsigned)placeIndexAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceIndex:(unsigned)arg1 ;
-(unsigned*)placeIndexs;
-(void)setPlaceIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

