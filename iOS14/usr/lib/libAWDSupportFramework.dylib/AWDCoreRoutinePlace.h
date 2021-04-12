/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDCoreRoutineMapItem;

@interface AWDCoreRoutinePlace : PBCodable <NSCopying> {

	NSMutableArray* _distanceToOtherPlaces;
	AWDCoreRoutineMapItem* _mapItem;

}

@property (nonatomic,readonly) BOOL hasMapItem; 
@property (nonatomic,retain) AWDCoreRoutineMapItem * mapItem;                     //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * distanceToOtherPlaces;              //@synthesize distanceToOtherPlaces=_distanceToOtherPlaces - In the implementation block
+(Class)distanceToOtherPlacesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(AWDCoreRoutineMapItem *)mapItem;
-(id)description;
-(void)setMapItem:(AWDCoreRoutineMapItem *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMapItem;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addDistanceToOtherPlaces:(id)arg1 ;
-(void)setDistanceToOtherPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)distanceToOtherPlacesCount;
-(void)clearDistanceToOtherPlaces;
-(id)distanceToOtherPlacesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)distanceToOtherPlaces;
@end

