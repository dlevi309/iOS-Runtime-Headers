/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingPrecisionAtKPair : PBCodable <NSCopying> {

	unsigned long long _k;
	float _precision;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasK; 
@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) BOOL hasPrecision; 
@property (assign,nonatomic) float precision;                     //@synthesize precision=_precision - In the implementation block
-(unsigned long long)k;
-(float)precision;
-(id)dictionaryRepresentation;
-(void)setPrecision:(float)arg1 ;
-(BOOL)hasK;
-(void)mergeFrom:(id)arg1 ;
-(void)setK:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasK:(BOOL)arg1 ;
-(void)setHasPrecision:(BOOL)arg1 ;
-(BOOL)hasPrecision;
@end

