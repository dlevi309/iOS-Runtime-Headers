/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSMutableArray;

@interface GEORestrictionInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _effectiveTimeRange;
	NSMutableArray* _restrictionDetails;
	GEOFormattedString* _subTitleString;
	GEOFormattedString* _titleString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_effectiveTimeRange : 1;
		unsigned read_restrictionDetails : 1;
		unsigned read_subTitleString : 1;
		unsigned read_titleString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitleString; 
@property (nonatomic,retain) GEOFormattedString * titleString; 
@property (nonatomic,readonly) BOOL hasSubTitleString; 
@property (nonatomic,retain) GEOFormattedString * subTitleString; 
@property (nonatomic,readonly) BOOL hasEffectiveTimeRange; 
@property (nonatomic,retain) GEOFormattedString * effectiveTimeRange; 
@property (nonatomic,retain) NSMutableArray * restrictionDetails; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)restrictionDetailsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOFormattedString *)effectiveTimeRange;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOFormattedString *)subTitleString;
-(void)setSubTitleString:(GEOFormattedString *)arg1 ;
-(void)setEffectiveTimeRange:(GEOFormattedString *)arg1 ;
-(void)addRestrictionDetails:(id)arg1 ;
-(unsigned long long)restrictionDetailsCount;
-(void)clearRestrictionDetails;
-(id)restrictionDetailsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTitleString;
-(BOOL)hasSubTitleString;
-(BOOL)hasEffectiveTimeRange;
-(void)setRestrictionDetails:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSMutableArray *)restrictionDetails;
-(BOOL)readFrom:(id)arg1 ;
-(GEOFormattedString *)titleString;
-(void)setTitleString:(GEOFormattedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

