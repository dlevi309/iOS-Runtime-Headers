/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueContainer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _buildingIds;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_buildingIds : 1;
		unsigned wrote_label : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_venueId : 1;
		unsigned wrote_browseType : 1;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(GEOPDVenueLabel *)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(unsigned long long)venueId;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(void)_readLabel;
-(void)_readBuildingIds;
-(void)_addNoFlagsBuildingId:(unsigned long long)arg1 ;
-(unsigned long long)buildingIdsCount;
-(void)clearBuildingIds;
-(unsigned long long)buildingIdAtIndex:(unsigned long long)arg1 ;
-(void)addBuildingId:(unsigned long long)arg1 ;
-(unsigned long long*)buildingIds;
-(void)setBuildingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(int)browseType;
-(void)setBrowseType:(int)arg1 ;
-(void)setHasBrowseType:(BOOL)arg1 ;
-(BOOL)hasBrowseType;
-(id)browseTypeAsString:(int)arg1 ;
-(int)StringAsBrowseType:(id)arg1 ;
@end

