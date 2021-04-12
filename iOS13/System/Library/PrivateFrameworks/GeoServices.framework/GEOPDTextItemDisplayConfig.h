/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasMaxItemsPerRow; 
@property (assign,nonatomic) unsigned maxItemsPerRow; 
@property (assign,nonatomic) BOOL hasMaxRowCount; 
@property (assign,nonatomic) unsigned maxRowCount; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)maxItemsPerRow;
-(void)setMaxItemsPerRow:(unsigned)arg1 ;
-(void)setHasMaxItemsPerRow:(BOOL)arg1 ;
-(BOOL)hasMaxItemsPerRow;
-(unsigned)maxRowCount;
-(void)setMaxRowCount:(unsigned)arg1 ;
-(void)setHasMaxRowCount:(BOOL)arg1 ;
-(BOOL)hasMaxRowCount;
@end

