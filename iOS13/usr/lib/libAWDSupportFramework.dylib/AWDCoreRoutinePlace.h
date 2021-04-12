/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMapItem:(AWDCoreRoutineMapItem *)arg1 ;
-(AWDCoreRoutineMapItem *)mapItem;
-(BOOL)hasMapItem;
-(void)addDistanceToOtherPlaces:(id)arg1 ;
-(void)setDistanceToOtherPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)distanceToOtherPlacesCount;
-(void)clearDistanceToOtherPlaces;
-(id)distanceToOtherPlacesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)distanceToOtherPlaces;
@end

