/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying> {

	unsigned _itemType;
	unsigned _oldestRecordAgeInDays;
	NSMutableArray* _records;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) unsigned itemType;                           //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) BOOL hasOldestRecordAgeInDays; 
@property (assign,nonatomic) unsigned oldestRecordAgeInDays;              //@synthesize oldestRecordAgeInDays=_oldestRecordAgeInDays - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                    //@synthesize records=_records - In the implementation block
+(Class)recordsType;
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
-(NSMutableArray *)records;
-(unsigned)itemType;
-(void)setItemType:(unsigned)arg1 ;
-(BOOL)hasItemType;
-(void)setHasItemType:(BOOL)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)setOldestRecordAgeInDays:(unsigned)arg1 ;
-(void)setHasOldestRecordAgeInDays:(BOOL)arg1 ;
-(BOOL)hasOldestRecordAgeInDays;
-(unsigned)oldestRecordAgeInDays;
@end

