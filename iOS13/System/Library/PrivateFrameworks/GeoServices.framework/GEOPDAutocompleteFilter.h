/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPoiIconCategoryFilter;

@interface GEOPDAutocompleteFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _requestedEntryTypes;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_requestedEntryTypes : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_requestedEntryTypes : 1;
		unsigned wrote_poiIconCategoryFilter : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long requestedEntryTypesCount; 
@property (nonatomic,readonly) int* requestedEntryTypes; 
@property (nonatomic,readonly) BOOL hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
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
-(unsigned long long)requestedEntryTypesCount;
-(int)requestedEntryTypeAtIndex:(unsigned long long)arg1 ;
-(void)setRequestedEntryTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addRequestedEntryType:(int)arg1 ;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(void)clearRequestedEntryTypes;
-(void)_readRequestedEntryTypes;
-(void)_addNoFlagsRequestedEntryType:(int)arg1 ;
-(void)_readPoiIconCategoryFilter;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(int*)requestedEntryTypes;
-(id)requestedEntryTypesAsString:(int)arg1 ;
-(int)StringAsRequestedEntryTypes:(id)arg1 ;
-(BOOL)hasPoiIconCategoryFilter;
@end

