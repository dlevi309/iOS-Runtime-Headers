/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineHistogramBin : PBCodable <NSCopying> {

	unsigned _count;
	unsigned _value;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;              //@synthesize count=_count - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setValue:(unsigned)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)value;
-(BOOL)isEqual:(id)arg1 ;
@end

