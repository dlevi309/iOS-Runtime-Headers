/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTSponsorToApplicantRound1M2, OTApplicantToSponsorRound2M1, OTSponsorToApplicantRound2M2;

@interface OTPairingMessage : PBCodable <NSCopying> {

	OTSponsorToApplicantRound1M2* _epoch;
	OTApplicantToSponsorRound2M1* _prepare;
	OTSponsorToApplicantRound2M2* _voucher;

}

@property (nonatomic,readonly) BOOL hasEpoch; 
@property (nonatomic,retain) OTSponsorToApplicantRound1M2 * epoch;                //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,readonly) BOOL hasPrepare; 
@property (nonatomic,retain) OTApplicantToSponsorRound2M1 * prepare;              //@synthesize prepare=_prepare - In the implementation block
@property (nonatomic,readonly) BOOL hasVoucher; 
@property (nonatomic,retain) OTSponsorToApplicantRound2M2 * voucher;              //@synthesize voucher=_voucher - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(OTSponsorToApplicantRound1M2 *)epoch;
-(void)setEpoch:(OTSponsorToApplicantRound1M2 *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(OTApplicantToSponsorRound2M1 *)prepare;
-(OTSponsorToApplicantRound2M2 *)voucher;
-(void)setVoucher:(OTSponsorToApplicantRound2M2 *)arg1 ;
-(BOOL)hasEpoch;
-(BOOL)hasPrepare;
-(BOOL)hasVoucher;
-(void)setPrepare:(OTApplicantToSponsorRound2M1 *)arg1 ;
@end

