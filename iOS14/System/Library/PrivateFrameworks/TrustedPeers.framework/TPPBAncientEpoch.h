/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TPPBAncientEpoch : PBCodable <NSCopying> {

	unsigned long long _candidateEpoch;
	unsigned long long _myEpoch;
	SCD_Struct_TP4 _has;

}

@property (assign,nonatomic) BOOL hasMyEpoch; 
@property (assign,nonatomic) unsigned long long myEpoch;                     //@synthesize myEpoch=_myEpoch - In the implementation block
@property (assign,nonatomic) BOOL hasCandidateEpoch; 
@property (assign,nonatomic) unsigned long long candidateEpoch;              //@synthesize candidateEpoch=_candidateEpoch - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)myEpoch;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMyEpoch:(unsigned long long)arg1 ;
-(void)setHasMyEpoch:(BOOL)arg1 ;
-(BOOL)hasMyEpoch;
-(void)setCandidateEpoch:(unsigned long long)arg1 ;
-(void)setHasCandidateEpoch:(BOOL)arg1 ;
-(BOOL)hasCandidateEpoch;
-(unsigned long long)candidateEpoch;
@end

