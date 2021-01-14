/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDAddressBookSyncFullSyncEvent : PBCodable <NSCopying> {

	unsigned long long _approximateRecordCount;
	unsigned long long _recordsPerSecond;
	unsigned long long _timestamp;
	int _result;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) int result;                                             //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasRecordsPerSecond; 
@property (assign,nonatomic) unsigned long long recordsPerSecond;                    //@synthesize recordsPerSecond=_recordsPerSecond - In the implementation block
@property (assign,nonatomic) BOOL hasApproximateRecordCount; 
@property (assign,nonatomic) unsigned long long approximateRecordCount;              //@synthesize approximateRecordCount=_approximateRecordCount - In the implementation block
-(void)setResult:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(id)resultAsString:(int)arg1 ;
-(int)StringAsResult:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasResult:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)result;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecordsPerSecond:(unsigned long long)arg1 ;
-(void)setHasRecordsPerSecond:(BOOL)arg1 ;
-(BOOL)hasRecordsPerSecond;
-(void)setApproximateRecordCount:(unsigned long long)arg1 ;
-(void)setHasApproximateRecordCount:(BOOL)arg1 ;
-(BOOL)hasApproximateRecordCount;
-(unsigned long long)recordsPerSecond;
-(unsigned long long)approximateRecordCount;
@end

