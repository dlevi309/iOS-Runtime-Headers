/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(id)description;
-(int)reason;
-(unsigned long long)hash;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)sponsor;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(NSString *)beneficiary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBeneficiary:(NSString *)arg1 ;
-(BOOL)hasBeneficiary;
-(BOOL)hasSponsor;
-(void)setSponsor:(NSString *)arg1 ;
@end

