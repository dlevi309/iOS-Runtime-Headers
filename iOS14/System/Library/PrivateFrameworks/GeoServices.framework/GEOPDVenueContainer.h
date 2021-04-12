/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueContainer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _buildingIds;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	unsigned long long _venueId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _browseType;
	struct {
		unsigned has_muid : 1;
		unsigned has_venueId : 1;
		unsigned has_browseType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buildingIds : 1;
		unsigned read_label : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId; 
@property (nonatomic,readonly) unsigned long long buildingIdsCount; 
@property (nonatomic,readonly) unsigned long long* buildingIds; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (assign,nonatomic) BOOL hasBrowseType; 
@property (assign,nonatomic) int browseType; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(unsigned long long)venueId;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(void)addBuildingId:(unsigned long long)arg1 ;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setBrowseType:(int)arg1 ;
-(unsigned long long)buildingIdsCount;
-(void)clearBuildingIds;
-(unsigned long long)buildingIdAtIndex:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(unsigned long long*)buildingIds;
-(void)setBuildingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasBrowseType:(BOOL)arg1 ;
-(BOOL)hasBrowseType;
-(id)browseTypeAsString:(int)arg1 ;
-(int)StringAsBrowseType:(id)arg1 ;
-(id)init;
-(BOOL)hasLabel;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)browseType;
-(GEOPDVenueLabel *)label;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

