/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSponsorToApplicantRound1M2 : PBCodable <NSCopying> {

	unsigned long long _epoch;
	SCD_Struct_OT1 _has;

}

@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) unsigned long long epoch;              //@synthesize epoch=_epoch - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)epoch;
-(void)setHasEpoch:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEpoch;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEpoch:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

