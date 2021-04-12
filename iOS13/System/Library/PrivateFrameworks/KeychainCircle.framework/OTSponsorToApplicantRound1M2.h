/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSponsorToApplicantRound1M2 : PBCodable <NSCopying> {

	unsigned long long _epoch;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) unsigned long long epoch;              //@synthesize epoch=_epoch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEpoch;
-(void)setHasEpoch:(BOOL)arg1 ;
@end

