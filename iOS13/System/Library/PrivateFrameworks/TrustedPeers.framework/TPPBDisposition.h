/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBAncientEpoch, TPPBDispositionDisallowedMachineID, TPPBDispositionDuplicateMachineID, TPPBPolicyProhibits, TPPBUnknownMachineID;

@interface TPPBDisposition : PBCodable <NSCopying> {

	TPPBAncientEpoch* _ancientEpoch;
	TPPBDispositionDisallowedMachineID* _disallowedMachineID;
	TPPBDispositionDuplicateMachineID* _duplicateMachineID;
	TPPBPolicyProhibits* _policyProhibits;
	TPPBUnknownMachineID* _unknownMachineID;

}

@property (nonatomic,readonly) BOOL hasAncientEpoch; 
@property (nonatomic,retain) TPPBAncientEpoch * ancientEpoch;                                       //@synthesize ancientEpoch=_ancientEpoch - In the implementation block
@property (nonatomic,readonly) BOOL hasPolicyProhibits; 
@property (nonatomic,retain) TPPBPolicyProhibits * policyProhibits;                                 //@synthesize policyProhibits=_policyProhibits - In the implementation block
@property (nonatomic,readonly) BOOL hasUnknownMachineID; 
@property (nonatomic,retain) TPPBUnknownMachineID * unknownMachineID;                               //@synthesize unknownMachineID=_unknownMachineID - In the implementation block
@property (nonatomic,readonly) BOOL hasDuplicateMachineID; 
@property (nonatomic,retain) TPPBDispositionDuplicateMachineID * duplicateMachineID;                //@synthesize duplicateMachineID=_duplicateMachineID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisallowedMachineID; 
@property (nonatomic,retain) TPPBDispositionDisallowedMachineID * disallowedMachineID;              //@synthesize disallowedMachineID=_disallowedMachineID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAncientEpoch;
-(BOOL)hasPolicyProhibits;
-(BOOL)hasUnknownMachineID;
-(BOOL)hasDuplicateMachineID;
-(BOOL)hasDisallowedMachineID;
-(TPPBAncientEpoch *)ancientEpoch;
-(void)setAncientEpoch:(TPPBAncientEpoch *)arg1 ;
-(TPPBPolicyProhibits *)policyProhibits;
-(void)setPolicyProhibits:(TPPBPolicyProhibits *)arg1 ;
-(TPPBUnknownMachineID *)unknownMachineID;
-(void)setUnknownMachineID:(TPPBUnknownMachineID *)arg1 ;
-(TPPBDispositionDuplicateMachineID *)duplicateMachineID;
-(void)setDuplicateMachineID:(TPPBDispositionDuplicateMachineID *)arg1 ;
-(TPPBDispositionDisallowedMachineID *)disallowedMachineID;
-(void)setDisallowedMachineID:(TPPBDispositionDisallowedMachineID *)arg1 ;
@end

