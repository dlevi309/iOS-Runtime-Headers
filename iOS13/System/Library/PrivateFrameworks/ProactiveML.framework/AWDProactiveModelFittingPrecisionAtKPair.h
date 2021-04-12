/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)precision;
-(void)setPrecision:(float)arg1 ;
-(unsigned long long)k;
-(void)setK:(unsigned long long)arg1 ;
-(void)setHasK:(BOOL)arg1 ;
-(BOOL)hasK;
-(void)setHasPrecision:(BOOL)arg1 ;
-(BOOL)hasPrecision;
@end

