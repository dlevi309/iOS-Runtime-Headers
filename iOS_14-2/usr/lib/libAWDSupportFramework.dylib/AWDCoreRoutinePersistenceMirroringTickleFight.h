/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying> {

	SCD_Struct_AW15* _tickleTimes;
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
-(int)operationType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasRecordType;
-(int)recordType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setRecordType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setOperationType:(int)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(unsigned long long)tickleTimesCount;
-(void)clearTickleTimes;
-(int)tickleTimesAtIndex:(unsigned long long)arg1 ;
-(void)addTickleTimes:(int)arg1 ;
-(int*)tickleTimes;
-(void)setTickleTimes:(int*)arg1 count:(unsigned long long)arg2 ;
@end

