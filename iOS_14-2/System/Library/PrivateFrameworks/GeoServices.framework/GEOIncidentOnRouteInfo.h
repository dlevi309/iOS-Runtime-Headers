/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOIncidentOnRouteInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _indexAndOffsets;

}

@property (nonatomic,retain) NSMutableArray * indexAndOffsets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)indexAndOffsetType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)indexAndOffsets;
-(void)addIndexAndOffset:(id)arg1 ;
-(unsigned long long)indexAndOffsetsCount;
-(void)clearIndexAndOffsets;
-(id)indexAndOffsetAtIndex:(unsigned long long)arg1 ;
-(void)setIndexAndOffsets:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

