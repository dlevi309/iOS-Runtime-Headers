/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBrowseCategory;

@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _placeIndexs;
	GEOPDBrowseCategory* _category;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_placeIndexs : 1;
		unsigned read_category : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * category; 
@property (nonatomic,readonly) unsigned long long placeIndexsCount; 
@property (nonatomic,readonly) unsigned* placeIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setCategory:(GEOPDBrowseCategory *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(GEOPDBrowseCategory *)category;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasCategory;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned*)placeIndexs;
-(void)addPlaceIndex:(unsigned)arg1 ;
-(unsigned long long)placeIndexsCount;
-(void)clearPlaceIndexs;
-(unsigned)placeIndexAtIndex:(unsigned long long)arg1 ;
-(void)setPlaceIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

