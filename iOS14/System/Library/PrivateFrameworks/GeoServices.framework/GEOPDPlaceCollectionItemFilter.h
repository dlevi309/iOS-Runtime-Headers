/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDPlaceCollectionItemFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _itemIds;

}

@property (nonatomic,retain) NSMutableArray * itemIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)itemIdType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)addItemId:(id)arg1 ;
-(unsigned long long)itemIdsCount;
-(id)initWithDictionary:(id)arg1 ;
-(void)clearItemIds;
-(id)itemIdAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)setItemIds:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)itemIds;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

