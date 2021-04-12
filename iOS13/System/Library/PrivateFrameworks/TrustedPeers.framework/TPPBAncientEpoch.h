/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMyEpoch:(unsigned long long)arg1 ;
-(void)setHasMyEpoch:(BOOL)arg1 ;
-(BOOL)hasMyEpoch;
-(void)setCandidateEpoch:(unsigned long long)arg1 ;
-(void)setHasCandidateEpoch:(BOOL)arg1 ;
-(BOOL)hasCandidateEpoch;
-(unsigned long long)myEpoch;
-(unsigned long long)candidateEpoch;
@end

