/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivitySharingSnapshotEvent : PBCodable <NSCopying> {

	long long _count;
	unsigned long long _timestamp;
	int _kind;
	BOOL _success;
	SCD_Struct_HD10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;                           //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasKind; 
@property (assign,nonatomic) int kind;                                  //@synthesize kind=_kind - In the implementation block
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setCount:(long long)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(long long)count;
-(int)kind;
-(BOOL)hasKind;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(void)setHasKind:(BOOL)arg1 ;
-(id)kindAsString:(int)arg1 ;
-(int)StringAsKind:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(void)setKind:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

