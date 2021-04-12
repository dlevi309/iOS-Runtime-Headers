/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueBuilding : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _directoryGroupingIds;
	SCD_Struct_GE68* _levelIds;
	unsigned long long _buildingId;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_buildingId : 1;
		unsigned has_muid : 1;
		unsigned read_unknownFields : 1;
		unsigned read_directoryGroupingIds : 1;
		unsigned read_levelIds : 1;
		unsigned read_label : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_directoryGroupingIds : 1;
		unsigned wrote_levelIds : 1;
		unsigned wrote_buildingId : 1;
		unsigned wrote_label : 1;
		unsigned wrote_muid : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (nonatomic,readonly) unsigned long long levelIdsCount; 
@property (nonatomic,readonly) unsigned long long* levelIds; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) unsigned long long directoryGroupingIdsCount; 
@property (nonatomic,readonly) unsigned long long* directoryGroupingIds; 
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
-(unsigned long long)buildingId;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(BOOL)hasBuildingId;
-(void)_readLabel;
-(void)_readLevelIds;
-(void)_addNoFlagsLevelId:(unsigned long long)arg1 ;
-(void)_readDirectoryGroupingIds;
-(void)_addNoFlagsDirectoryGroupingId:(unsigned long long)arg1 ;
-(unsigned long long)levelIdsCount;
-(void)clearLevelIds;
-(unsigned long long)levelIdAtIndex:(unsigned long long)arg1 ;
-(void)addLevelId:(unsigned long long)arg1 ;
-(unsigned long long)directoryGroupingIdsCount;
-(void)clearDirectoryGroupingIds;
-(unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1 ;
-(void)addDirectoryGroupingId:(unsigned long long)arg1 ;
-(unsigned long long*)levelIds;
-(void)setLevelIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)directoryGroupingIds;
-(void)setDirectoryGroupingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

