/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAutocompletePlaceContextMetadata, GEOPDSearchPlaceContextMetadata;

@interface GEOPDPlaceContextMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAutocompletePlaceContextMetadata* _autocompletePlaceContextMetadata;
	unsigned long long _muid;
	GEOPDSearchPlaceContextMetadata* _searchPlaceContextMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placeContextMetadataType;
	struct {
		unsigned has_muid : 1;
		unsigned has_placeContextMetadataType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_autocompletePlaceContextMetadata : 1;
		unsigned read_searchPlaceContextMetadata : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_autocompletePlaceContextMetadata : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_searchPlaceContextMetadata : 1;
		unsigned wrote_placeContextMetadataType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasPlaceContextMetadataType; 
@property (assign,nonatomic) int placeContextMetadataType; 
@property (nonatomic,readonly) BOOL hasSearchPlaceContextMetadata; 
@property (nonatomic,retain) GEOPDSearchPlaceContextMetadata * searchPlaceContextMetadata; 
@property (nonatomic,readonly) BOOL hasAutocompletePlaceContextMetadata; 
@property (nonatomic,retain) GEOPDAutocompletePlaceContextMetadata * autocompletePlaceContextMetadata; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readSearchPlaceContextMetadata;
-(void)_readAutocompletePlaceContextMetadata;
-(GEOPDSearchPlaceContextMetadata *)searchPlaceContextMetadata;
-(GEOPDAutocompletePlaceContextMetadata *)autocompletePlaceContextMetadata;
-(void)setSearchPlaceContextMetadata:(GEOPDSearchPlaceContextMetadata *)arg1 ;
-(void)setAutocompletePlaceContextMetadata:(GEOPDAutocompletePlaceContextMetadata *)arg1 ;
-(int)placeContextMetadataType;
-(void)setPlaceContextMetadataType:(int)arg1 ;
-(void)setHasPlaceContextMetadataType:(BOOL)arg1 ;
-(BOOL)hasPlaceContextMetadataType;
-(id)placeContextMetadataTypeAsString:(int)arg1 ;
-(int)StringAsPlaceContextMetadataType:(id)arg1 ;
-(BOOL)hasSearchPlaceContextMetadata;
-(BOOL)hasAutocompletePlaceContextMetadata;
@end

