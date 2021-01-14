/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)addRecords:(id)arg1 ;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)clearRecords;
-(NSMutableArray *)records;
-(unsigned long long)recordsCount;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasItemType;
-(void)setHasItemType:(BOOL)arg1 ;
-(void)setItemType:(unsigned)arg1 ;
-(id)description;
-(unsigned)itemType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setOldestRecordAgeInDays:(unsigned)arg1 ;
-(void)setHasOldestRecordAgeInDays:(BOOL)arg1 ;
-(BOOL)hasOldestRecordAgeInDays;
-(unsigned)oldestRecordAgeInDays;
@end

