/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPPBPolicyProhibits : PBCodable <NSCopying> {

	unsigned long long _policyVersion;
	NSString* _candidateCategory;
	NSString* _explanation;
	NSString* _sponsorCategory;
	NSString* _sponsorId;
	SCD_Struct_TP3 _has;

}

@property (assign,nonatomic) BOOL hasPolicyVersion; 
@property (assign,nonatomic) unsigned long long policyVersion;              //@synthesize policyVersion=_policyVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSponsorId; 
@property (nonatomic,retain) NSString * sponsorId;                          //@synthesize sponsorId=_sponsorId - In the implementation block
@property (nonatomic,readonly) BOOL hasSponsorCategory; 
@property (nonatomic,retain) NSString * sponsorCategory;                    //@synthesize sponsorCategory=_sponsorCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasCandidateCategory; 
@property (nonatomic,retain) NSString * candidateCategory;                  //@synthesize candidateCategory=_candidateCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasExplanation; 
@property (nonatomic,retain) NSString * explanation;                        //@synthesize explanation=_explanation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setPolicyVersion:(unsigned long long)arg1 ;
-(void)setHasPolicyVersion:(BOOL)arg1 ;
-(BOOL)hasPolicyVersion;
-(BOOL)hasSponsorId;
-(BOOL)hasSponsorCategory;
-(BOOL)hasCandidateCategory;
-(BOOL)hasExplanation;
-(unsigned long long)policyVersion;
-(NSString *)sponsorId;
-(void)setSponsorId:(NSString *)arg1 ;
-(NSString *)sponsorCategory;
-(void)setSponsorCategory:(NSString *)arg1 ;
-(NSString *)candidateCategory;
-(void)setCandidateCategory:(NSString *)arg1 ;
@end

