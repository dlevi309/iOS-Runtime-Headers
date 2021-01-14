/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDCoreRoutineMapItem;

@interface AWDCoreRoutineVisit : PBCodable <NSCopying> {

	SCD_Struct_AW15* _mapItemSources;
	unsigned long long _dwellTime;
	NSMutableArray* _possibleMapItems;
	AWDCoreRoutineMapItem* _selectedMapItem;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) unsigned long long mapItemSourcesCount; 
@property (nonatomic,readonly) int* mapItemSources; 
@property (nonatomic,retain) NSMutableArray * possibleMapItems;                     //@synthesize possibleMapItems=_possibleMapItems - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedMapItem; 
@property (nonatomic,retain) AWDCoreRoutineMapItem * selectedMapItem;               //@synthesize selectedMapItem=_selectedMapItem - In the implementation block
@property (assign,nonatomic) BOOL hasDwellTime; 
@property (assign,nonatomic) unsigned long long dwellTime;                          //@synthesize dwellTime=_dwellTime - In the implementation block
+(Class)possibleMapItemsType;
-(id)dictionaryRepresentation;
-(void)setDwellTime:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)dwellTime;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addMapItemSources:(int)arg1 ;
-(void)addPossibleMapItems:(id)arg1 ;
-(void)setSelectedMapItem:(AWDCoreRoutineMapItem *)arg1 ;
-(unsigned long long)mapItemSourcesCount;
-(void)clearMapItemSources;
-(int)mapItemSourcesAtIndex:(unsigned long long)arg1 ;
-(int*)mapItemSources;
-(void)setMapItemSources:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mapItemSourcesAsString:(int)arg1 ;
-(int)StringAsMapItemSources:(id)arg1 ;
-(void)setPossibleMapItems:(NSMutableArray *)arg1 ;
-(unsigned long long)possibleMapItemsCount;
-(void)clearPossibleMapItems;
-(id)possibleMapItemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSelectedMapItem;
-(void)setHasDwellTime:(BOOL)arg1 ;
-(BOOL)hasDwellTime;
-(NSMutableArray *)possibleMapItems;
-(AWDCoreRoutineMapItem *)selectedMapItem;
@end

