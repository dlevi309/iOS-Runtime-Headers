/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoPasscodeUpgradeFlowApplyPasscodeRestrictionsRequest : PBRequest <NSCopying> {

	int _enforcedPolicy;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasEnforcedPolicy; 
@property (assign,nonatomic) int enforcedPolicy;                  //@synthesize enforcedPolicy=_enforcedPolicy - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)enforcedPolicy;
-(void)setEnforcedPolicy:(int)arg1 ;
-(void)setHasEnforcedPolicy:(BOOL)arg1 ;
-(BOOL)hasEnforcedPolicy;
-(id)enforcedPolicyAsString:(int)arg1 ;
-(int)StringAsEnforcedPolicy:(id)arg1 ;
@end

