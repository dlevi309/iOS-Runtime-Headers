/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPPBVoucher : PBCodable <NSCopying> {

	NSString* _beneficiary;
	int _reason;
	NSString* _sponsor;
	SCD_Struct_TP3 _has;

}

@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL hasBeneficiary; 
@property (nonatomic,retain) NSString * beneficiary;              //@synthesize beneficiary=_beneficiary - In the implementation block
@property (nonatomic,readonly) BOOL hasSponsor; 
@property (nonatomic,retain) NSString * sponsor;                  //@synthesize sponsor=_sponsor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(BOOL)hasReason;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasBeneficiary;
-(BOOL)hasSponsor;
-(NSString *)beneficiary;
-(void)setBeneficiary:(NSString *)arg1 ;
-(NSString *)sponsor;
-(void)setSponsor:(NSString *)arg1 ;
@end

