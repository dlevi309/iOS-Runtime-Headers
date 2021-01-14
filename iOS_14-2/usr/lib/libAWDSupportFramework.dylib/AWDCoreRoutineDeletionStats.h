/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _deleteType;
	NSMutableArray* _groups;
	BOOL _syncEnabled;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSyncEnabled; 
@property (assign,nonatomic) BOOL syncEnabled;                          //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDeleteType; 
@property (assign,nonatomic) unsigned deleteType;                       //@synthesize deleteType=_deleteType - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                   //@synthesize groups=_groups - In the implementation block
+(Class)groupsType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)syncEnabled;
-(void)mergeFrom:(id)arg1 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(NSMutableArray *)groups;
-(id)description;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasSyncEnabled:(BOOL)arg1 ;
-(BOOL)hasSyncEnabled;
-(unsigned)deleteType;
-(void)setDeleteType:(unsigned)arg1 ;
-(void)setHasDeleteType:(BOOL)arg1 ;
-(BOOL)hasDeleteType;
-(void)addGroups:(id)arg1 ;
-(unsigned long long)groupsCount;
-(void)clearGroups;
-(id)groupsAtIndex:(unsigned long long)arg1 ;
@end

