/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DESBinary32Transport : PBCodable <NSCopying> {

	SCD_Struct_DE4* _datas;

}

@property (nonatomic,readonly) unsigned long long datasCount; 
@property (nonatomic,readonly) float* datas; 
-(id)dictionaryRepresentation;
-(float*)datas;
-(float)dataAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addData:(float)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(void)setDatas:(float*)arg1 count:(unsigned long long)arg2 ;
@end

