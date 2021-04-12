/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface DESBfloat16Transport : PBCodable <NSCopying> {

	unsigned _count;
	NSData* _data;
	SCD_Struct_DE3 _has;

}

@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;               //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;              //@synthesize count=_count - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)hasData;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setData:(NSData *)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(NSData *)data;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

