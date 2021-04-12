/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying> {

	SCD_Struct_AW16* _tickleTimes;
	unsigned long long _timestamp;
	int _operationType;
	int _recordType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long tickleTimesCount; 
@property (nonatomic,readonly) int* tickleTimes; 
@property (assign,nonatomic) BOOL hasRecordType; 
@property (assign,nonatomic) int recordType;                                     //@synthesize recordType=_recordType - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                                  //@synthesize operationType=_operationType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)operationType;
-(void)setOperationType:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)recordType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecordType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasRecordType;
-(unsigned long long)tickleTimesCount;
-(void)clearTickleTimes;
-(int)tickleTimesAtIndex:(unsigned long long)arg1 ;
-(void)addTickleTimes:(int)arg1 ;
-(int*)tickleTimes;
-(void)setTickleTimes:(int*)arg1 count:(unsigned long long)arg2 ;
@end

