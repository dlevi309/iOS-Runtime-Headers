/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueDirectoryGroup : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _directoryGroupingId;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	struct {
		unsigned has_directoryGroupingId : 1;
		unsigned has_muid : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDirectoryGroupingId; 
@property (assign,nonatomic) unsigned long long directoryGroupingId; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
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
-(void)readAll:(BOOL)arg1 ;
-(void)setDirectoryGroupingId:(unsigned long long)arg1 ;
-(unsigned long long)directoryGroupingId;
-(void)setHasDirectoryGroupingId:(BOOL)arg1 ;
-(BOOL)hasDirectoryGroupingId;
-(BOOL)hasLabel;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDVenueLabel *)label;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

