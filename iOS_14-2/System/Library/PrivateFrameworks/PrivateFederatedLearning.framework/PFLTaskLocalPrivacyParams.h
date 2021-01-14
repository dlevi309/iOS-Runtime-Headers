/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFLTaskLocalPrivacyParams : PBCodable <NSCopying> {

	double _clippingNormMax;
	long long _normBinCount;
	SCD_Struct_PF1 _has;

}

@property (assign,nonatomic) BOOL hasNormBinCount; 
@property (assign,nonatomic) long long normBinCount;               //@synthesize normBinCount=_normBinCount - In the implementation block
@property (assign,nonatomic) BOOL hasClippingNormMax; 
@property (assign,nonatomic) double clippingNormMax;               //@synthesize clippingNormMax=_clippingNormMax - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)normBinCount;
-(void)setNormBinCount:(long long)arg1 ;
-(void)setHasNormBinCount:(BOOL)arg1 ;
-(BOOL)hasNormBinCount;
-(void)setClippingNormMax:(double)arg1 ;
-(void)setHasClippingNormMax:(BOOL)arg1 ;
-(BOOL)hasClippingNormMax;
-(double)clippingNormMax;
@end

